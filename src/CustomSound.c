#include "CustomSound.h"

/* Music Funcs */
/*  MUS_LoadBasedContext();
    Loads a music file based on certain gamestates.
    Requires all songs to be defined first.
    Returns 0 if no suitable song is found.
*/
int MUS_LoadBasedContext(){
    if(io_music_ch1 == MUSID_STOP){
        Mix_PauseMusic();
        printf("MUS_LoadBasedContext(): Stopping current track.\n");
        return 1;
    }

    if(isInterrupt){
        printf("MUS_LoadBasedContext(): Loading interrupted music: %s\n", curTrackPath_Back);
        MUS_LoadFile(curTrackPath_Back, curMusicPos_Back, curMusicEndPoint_Back, curMusicLoopPoint_Back, curMusicDoLoop_Back, 0);
        return 1;
    }

    //printf("misc_game_mode: %u.\n", misc_game_mode);

    switch(misc_game_mode){
        case gm_OverworldFadeIn:
            switch(ow_players_map[0]){
                case wm_World1:
                    return MUS_Load("./assets/custom/Overworld/1.txt", 0);
                case wm_World2:
                    return MUS_Load("./assets/custom/Overworld/2.txt", 0);
                case wm_World3:
                    return MUS_Load("./assets/custom/Overworld/3.txt", 0);
                case wm_World5:
                    return MUS_Load("./assets/custom/Overworld/5.txt", 0);
                case wm_World7:
                    return MUS_Load("./assets/custom/Overworld/7.txt", 0);
                case wm_Special:
                    return MUS_Load("./assets/custom/Overworld/Special.txt", 0);
                case wm_Star:
                    return MUS_Load("./assets/custom/Overworld/Star.txt", 0);
            }
            break;
        case gm_PrepareLevel:   /*  TODO: Make this bit based on level IDs. 
                                    Also add in the Func. Music.
                                */
            switch(io_music_ch1){
                case MUSID_ATHLETIC:
                    return MUS_Load("./assets/custom/Level/Athletic.txt", 0);
                case MUSID_OVERWORLD:
                    return MUS_Load("./assets/custom/Level/Overworld.txt", 0);
                case MUSID_SWIMMING:
                    return MUS_Load("./assets/custom/Level/Swimming.txt", 0);
                case MUSID_UNDERGROUND:
                    return MUS_Load("./assets/custom/Level/Underground.txt", 0);
                case MUSID_HAUNTED:
                    return MUS_Load("./assets/custom/Level/Haunted.txt", 0);
                case MUSID_CASTLE:
                    return MUS_Load("./assets/custom/Level/Castle.txt", 0);
                case MUSID_PALACE:
                    return MUS_Load("./assets/custom/Level/Palace.txt", 0);
                case MUSID_BOSS:
                    return MUS_Load("./assets/custom/Level/Boss.txt", 0);
            }
            break;
        case gm_Level:
            switch(io_music_ch1){
                case MUSID_PSWITCH:
                    return MUS_Load("./assets/custom/Gameplay/PSwitch.txt", 1);
            }
            break;
    }
    return 0;
}

/*  MUS_Load(filePath, doInterrupt);
    Loads a music file based on given params.
    Returns 0 if file isn't found.
filePath    ;   Path to music file.
doInerrupt  ;   Whether or not the loaded track should interrupt the current track.
*/
int MUS_Load(const char* filePath, int doInterrupt){
    char* curLine = malloc(256);
    char* copyLine = malloc(256);
    
    // Read in file.
    FILE* readFile = fopen(filePath, "r");
    if(readFile == NULL){
        printf("MUS_Load() Err: Can't find file at %s.\n", filePath);
        return 0;
    }
    
    // Path to MP3 file.
    fgets(curLine, 256, readFile);
    strncpy(copyLine, curLine, strlen(curLine) - 1);
    copyLine[strlen(curLine) - 1] = NULL;
    gMusic_Playing = Mix_LoadMUS(copyLine);
    if(gMusic_Playing == NULL){
        printf("MUS_Load() Err: Mix_LoadMUS() Err: %s.\n", Mix_GetError());
        return 0;
    }

    // Store interrupt data if applicable.
    if(doInterrupt && USE_MUSICVAR_BACK){
        //printf("curMusicPos: %u.\n", curMusicPos);
        isInterrupt = 1;
        curTrackPath_Back = curTrackPath;
        curMusicPos_Back = curMusicPos;
        curMusicLoopPoint_Back = curMusicLoopPoint;
        curMusicEndPoint_Back = curMusicEndPoint;
        curMusicDoLoop_Back = curMusicDoLoop;
    }else{
        isInterrupt = 0;
    }
    curTrackPath = copyLine;

    // Tracking vars.
    // Line 1: Start Pos
    // Line 2: End Pos
    // Line 3: Loop Pos
    // Line 4: Do Loop
    fgets(curLine, 256, readFile);
    curMusicPos = atoi(curLine) / 1000;
    fgets(curLine, 256, readFile);
    curMusicEndPoint = atoi(curLine);
    fgets(curLine, 256, readFile);
    curMusicLoopPoint = atoi(curLine);
    fgets(curLine, 256, readFile);
    curMusicDoLoop = atoi(curLine);

    //printf("curMusicPos: %u.\n", curMusicPos);

    fclose(readFile);
    free(curLine);
    free(copyLine);

    // Play music.
    Mix_PlayMusic(gMusic_Playing, 0);
    Mix_SetMusicPosition((double)curMusicPos / 1000);
    Mix_ResumeMusic();

    // Everything read correctly! (Yay)
    return 1;
}

/*  MUS_LoadFile(path, start, end, loop, doLoop);
    Loads a music file based on the given params.
path            ;   Path to MP3.
start,end,loop  ;   Timing points.
doLoop          ;   Whether or not the track should loop.
doInterrupt     ;   Whether or not the track should interrupt the current track.
*/
int MUS_LoadFile(const char* path, double* start, double* end, double* loop, int* doLoop, int* doInterrupt){
    // Load MP3.
    gMusic_Playing = Mix_LoadMUS(path);
    if(gMusic_Playing == NULL){
        printf("MUS_Load() Err: Mix_LoadMUS() Err: %s.\n", Mix_GetError());
        return 0;
    }

    // Store interrupt data if applicable.
    if(doInterrupt && USE_MUSICVAR_BACK){
        isInterrupt = 1;
        curTrackPath_Back = curTrackPath;
        curMusicPos_Back = curMusicPos;
        curMusicLoopPoint_Back = curMusicLoopPoint;
        curMusicEndPoint_Back = curMusicEndPoint;
        curMusicDoLoop_Back = curMusicDoLoop;
    }else{
        isInterrupt = 0;
    }
    curTrackPath = path;

    // Tracking vars.
    curMusicPos = start;
    curMusicLoopPoint = loop;
    curMusicEndPoint = end;
    curMusicDoLoop = doLoop;

    // Play music.
    Mix_PlayMusic(gMusic_Playing, 0);
    Mix_SetMusicPosition((double)curMusicPos / 1000);
    Mix_ResumeMusic();

    return 1;
}

/*  MUS_Step();
    Tracks current music.
*/
void MUS_Step(){
    if(gMusic_Playing != NULL && !Mix_PausedMusic()){
        double temp = Mix_GetMusicPosition(gMusic_Playing) * 1000;
        curMusicPos = (double*)temp;
    }
    
    //printf("Stuff: %u / %u / %u.\n", curMusicEndPoint, curMusicLoopPoint, curMusicPos);
    //printf("counter_global_frames: %u.\n", counter_global_frames);

    if(curMusicPos >= curMusicEndPoint && curMusicDoLoop)
        Mix_SetMusicPosition((double)curMusicLoopPoint / 1000);
}

/* Sound Funcs */
/*  SND_Load_Minor(target, path);
    Loads a WAV file into the specified chunk from the specified path.
    Loaded files CANNOT have a newline at the end.
    Please god do not put a newline at the end.
    Meant to be used with SND_Load().
    Returns 0 on failure.
target  ;   Target Mix_Chunk.
path    ;   Path to file.
*/
int SND_Load_Minor(Mix_Chunk* target, const char* path){
    char* curLine = malloc(256);
    
    // Read in file.
    FILE* readFile = fopen(path, "r");
    if(readFile == NULL){
        printf("SND_Load_Minor() Err: Can't find file at %s.\n", path);
        return 0;
    }

    // Path to WAV file.
    fgets(curLine, 256, readFile);

    printf("Attempting to load %s.\n", curLine);
    target = Mix_LoadWAV(curLine);
    if(target == NULL){
        printf("SND_Load_Minor() Err: Mix_LoadWAV() Err: %s.\n", Mix_GetError());
        return 0;
    }

    fclose(readFile);
    free(curLine);

    return 1;
}

/*  SND_Load();
    Loads all external sound files.
*/
void SND_Load(){
    printf("Loading Custom SFX...\n");
    gSound_Default = SND_Load_Minor(gSound_Default, "./assets/custom/SFX/default.txt");

    gSound_Pipe = SND_Load_Minor(gSound_Pipe, "./assets/custom/SFX/Levels/pipe.txt");
    gSound_CheckPoint = SND_Load_Minor(gSound_CheckPoint, "./assets/custom/SFX/Levels/checkpoint.txt");
    gSound_SwitchBlock = SND_Load_Minor(gSound_SwitchBlock, "./assets/custom/SFX/Levels/switch.txt");
    gSound_ItemPastGoal = SND_Load_Minor(gSound_ItemPastGoal, "./assets/custom/SFX/Levels/itempastgoal.txt");
    gSound_YoshiCoin = SND_Load_Minor(gSound_YoshiCoin, "./assets/custom/SFX/Levels/yoshicoin.txt");
    gSound_Grinder = SND_Load_Minor(gSound_Grinder, "./assets/custom/SFX/Levels/grinder.txt");
    gSound_Spring = SND_Load_Minor(gSound_Spring, "./assets/custom/SFX/Levels/spring.txt");
    gSound_Door = SND_Load_Minor(gSound_Door, "./assets/custom/SFX/Levels/door.txt");
    gSound_MsgBox = SND_Load_Minor(gSound_MsgBox, "./assets/custom/SFX/Levels/msgbox.txt");

    gSound_YoshiGulp = SND_Load_Minor(gSound_YoshiGulp, "./assets/custom/SFX/Yoshi/yoshigulp.txt");
    gSound_YoshiSpit = SND_Load_Minor(gSound_YoshiSpit, "./assets/custom/SFX/Yoshi/yoshispit.txt");
    gSound_YoshiHatch = SND_Load_Minor(gSound_YoshiHatch, "./assets/custom/SFX/Yoshi/yoshihatch.txt");
    gSound_YoshiLose = SND_Load_Minor(gSound_YoshiLose, "./assets/custom/SFX/Yoshi/yoshilose.txt");
    gSound_YoshiFire = SND_Load_Minor(gSound_YoshiFire, "./assets/custom/SFX/Yoshi/yoshifire.txt");
    gSound_YoshiMount = SND_Load_Minor(gSound_YoshiMount, "./assets/custom/SFX/Yoshi/yoshimount.txt");
    gSound_YoshiTongue = SND_Load_Minor(gSound_YoshiTongue, "./assets/custom/SFX/Yoshi/yoshitongue.txt");
    gSound_YoshiStomp = SND_Load_Minor(gSound_YoshiStomp, "./assets/custom/SFX/Yoshi/yoshistomp.txt");

    gSound_Fly = SND_Load_Minor(gSound_Fly, "./assets/custom/SFX/Mario/fly.txt");
    gSound_FlyHurt = SND_Load_Minor(gSound_FlyHurt, "./assets/custom/SFX/Mario/flyhurt.txt");
    gSound_HitHead = SND_Load_Minor(gSound_HitHead, "./assets/custom/SFX/Mario/hithead.txt");
    gSound_SpinJumpHop = SND_Load_Minor(gSound_SpinJumpHop, "./assets/custom/SFX/Mario/spinjumphop.txt");
    gSound_SpinJumpKill = SND_Load_Minor(gSound_SpinJumpKill, "./assets/custom/SFX/Mario/spinjumpkill.txt");
    gSound_SpinJump = SND_Load_Minor(gSound_SpinJump, "./assets/custom/SFX/Mario/spinjump.txt");
    gSound_Kick = SND_Load_Minor(gSound_Kick, "./assets/custom/SFX/Mario/kick.txt");
    gSound_PowerUp = SND_Load_Minor(gSound_PowerUp, "./assets/custom/SFX/Mario/powerup.txt");
    gSound_GetCape = SND_Load_Minor(gSound_GetCape, "./assets/custom/SFX/Mario/getcape.txt");
    gSound_Swim = SND_Load_Minor(gSound_Swim, "./assets/custom/SFX/Mario/swim.txt");
    gSound_GetPBalloon = SND_Load_Minor(gSound_GetPBalloon, "./assets/custom/SFX/Mario/getpballoon.txt");
    gSound_Jump = SND_Load_Minor(gSound_Jump, "./assets/custom/SFX/Mario/jump.txt");
    gSound_Fireball = SND_Load_Minor(gSound_Fireball, "./assets/custom/SFX/Mario/fireball.txt");
    gSound_ItemInReserve = SND_Load_Minor(gSound_ItemInReserve, "./assets/custom/SFX/Mario/iteminreserve.txt");
    gSound_ItemOutReserve = SND_Load_Minor(gSound_ItemOutReserve, "./assets/custom/SFX/Mario/itemoutreserve.txt");
    gSound_LRScroll = SND_Load_Minor(gSound_LRScroll, "./assets/custom/SFX/Mario/lrscroll.txt");

    gSound_KoopaShrink = SND_Load_Minor(gSound_KoopaShrink, "./assets/custom/SFX/Boss/koopashrink.txt");
    gSound_LemmyWendyFall = SND_Load_Minor(gSound_LemmyWendyFall, "./assets/custom/SFX/Boss/lemmywendyfall.txt");
    gSound_LemmyWendyLava = SND_Load_Minor(gSound_LemmyWendyLava, "./assets/custom/SFX/Boss/lemmywendylava.txt");
    gSound_PeachHelp = SND_Load_Minor(gSound_PeachHelp, "./assets/custom/SFX/Boss/peachhelp.txt");

    gSound_TileReveal = SND_Load_Minor(gSound_TileReveal, "./assets/custom/SFX/Overworld/tilereveal.txt");
    gSound_CastleCollapse = SND_Load_Minor(gSound_CastleCollapse, "./assets/custom/SFX/Overworld/castlecollapse.txt");
    gSound_BlockEjection = SND_Load_Minor(gSound_BlockEjection, "./assets/custom/SFX/Overworld/blockejection.txt");
    gSound_ToLevelTile = SND_Load_Minor(gSound_ToLevelTile, "./assets/custom/SFX/Overworld/toleveltile.txt");

    gSound_FireworkWhistle = SND_Load_Minor(gSound_FireworkWhistle, "./assets/custom/SFX/Ending/fireworkwhistle.txt");
    gSound_FireworkBang = SND_Load_Minor(gSound_FireworkBang, "./assets/custom/SFX/Ending/fireworkbang.txt");

    gSound_Drybones = SND_Load_Minor(gSound_Pause, "./assets/custom/SFX/Misc/drybones.txt");
    gSound_Magic = SND_Load_Minor(gSound_Magic, "./assets/custom/SFX/Misc/magic.txt");
    gSound_Pause = SND_Load_Minor(gSound_Pause, "./assets/custom/SFX/Misc/pause.txt");
    gSound_Unpause = SND_Load_Minor(gSound_Unpause, "./assets/custom/SFX/Misc/unpause.txt");
    gSound_Stomp1 = SND_Load_Minor(gSound_Stomp1, "./assets/custom/SFX/Misc/stomp1.txt");
    gSound_Stomp2 = SND_Load_Minor( gSound_Stomp2, "./assets/custom/SFX/Misc/stomp2.txt");
    gSound_Stomp3 = SND_Load_Minor(gSound_Stomp3, "./assets/custom/SFX/Misc/stomp3.txt");
    gSound_Stomp4 = SND_Load_Minor(gSound_Stomp4, "./assets/custom/SFX/Misc/stomp4.txt");
    gSound_Stomp5 = SND_Load_Minor(gSound_Stomp5, "./assets/custom/SFX/Misc/stomp5.txt");
    gSound_Stomp6 = SND_Load_Minor(gSound_Stomp6, "./assets/custom/SFX/Misc/stomp6.txt");
    gSound_Stomp7 = SND_Load_Minor(gSound_Stomp7, "./assets/custom/SFX/Misc/stomp7.txt");
    gSound_TimeLow = SND_Load_Minor(gSound_TimeLow, "./assets/custom/SFX/Misc/timelow.txt");
    gSound_World7Appears = SND_Load_Minor(gSound_World7Appears, "./assets/custom/SFX/Misc/world7appears.txt");
    gSound_BlarggRoar = SND_Load_Minor(gSound_BlarggRoar, "./assets/custom/SFX/Misc/blarggroar.txt");
    gSound_Coin = SND_Load_Minor(gSound_Coin, "./assets/custom/SFX/Misc/coin.txt");
    gSound_PowerBlock = SND_Load_Minor(gSound_PowerBlock, "./assets/custom/SFX/Misc/powerblock.txt");
    gSound_VineBlock = SND_Load_Minor(gSound_VineBlock, "./assets/custom/SFX/Misc/vineblock.txt");
    gSound_1UP = SND_Load_Minor(gSound_1UP, "./assets/custom/SFX/Misc/1up.txt");
    gSound_DestroyedBlock = SND_Load_Minor(gSound_DestroyedBlock, "./assets/custom/SFX/Misc/destroyedblock.txt");
    gSound_BulletBill = SND_Load_Minor(gSound_BulletBill, "./assets/custom/SFX/Misc/bulletbill.txt");
    gSound_DrumRollStart = SND_Load_Minor(gSound_DrumRollStart, "./assets/custom/SFX/Misc/drumrollstart.txt");
    gSound_DrumRollEnd = SND_Load_Minor( gSound_DrumRollEnd, "./assets/custom/SFX/Misc/drumrollend.txt");
    gSound_Thunder = SND_Load_Minor(gSound_Thunder, "./assets/custom/SFX/Misc/thunder.txt");
    gSound_ChuckClap = SND_Load_Minor(gSound_ChuckClap, "./assets/custom/SFX/Misc/chuckclap.txt");
    gSound_BombBlow = SND_Load_Minor(gSound_BombBlow, "./assets/custom/SFX/Misc/bombblow.txt");
    gSound_BombFuse = SND_Load_Minor(gSound_BombFuse, "./assets/custom/SFX/Misc/bombfuse.txt");
    gSound_Whistle = SND_Load_Minor(gSound_Whistle, "./assets/custom/SFX/Misc/whistle.txt");
    gSound_PSwitchOver = SND_Load_Minor(gSound_PSwitchOver, "./assets/custom/SFX/Misc/pswitchover.txt");
    gSound_Swooper = SND_Load_Minor(gSound_Swooper, "./assets/custom/SFX/Misc/swooper.txt");
    gSound_Podoboo = SND_Load_Minor(gSound_Podoboo, "./assets/custom/SFX/Misc/podoboo.txt");
    gSound_Stunned = SND_Load_Minor(gSound_Stunned, "./assets/custom/SFX/Misc/stunned.txt");
    gSound_Correct = SND_Load_Minor(gSound_Correct, "./assets/custom/SFX/Misc/correct.txt");
    gSound_Wrong = SND_Load_Minor(gSound_Wrong, "./assets/custom/SFX/Misc/wrong.txt");
}

/*  SND_Step();
    Tracks and plays certain sounds based on certain gamestates.
    Requires all sounds to be defined first. (Call SND_Load().)
    Returns -1 if Mix_PlayChannel() fails or no suitable file was found.
*/
int SND_Step(){
    /* TODO: This method sucks and needs to be redone. */
    
    // Mix_PlayChannel(1,NULL,0);
    switch(io_sound_ch1){
        case SNDID_HITHEAD:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_SPINJUMPHOP:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_KICK:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_PIPE:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_CHECKPOINT:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_YOSHIGULP:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_DRYBONES:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_SPINJUMPKILL:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_FLY:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_POWERUP:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_SWITCHBLOCK:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_ITEMPASTGOAL:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_GETCAPE:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_SWIM:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_FLYHURT:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_MAGIC:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_PAUSE:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_UNPAUSE:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_STOMP1:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_STOMP2:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_STOMP3:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_STOMP4:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_STOMP5:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_STOMP6:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_STOMP7:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_YOSHICOIN:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_TIMELOW:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_GETPBALLOON:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_KOOPASHRINK:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_YOSHISPIT:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_WORLD7APPEARS:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_LEMMYWENDYFALL:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_BLARGGROAR:
            return Mix_PlayChannel(1,NULL,0);
        case SNDID_PEACHHELP:
            return Mix_PlayChannel(1,NULL,0);    
    }

    // Mix_PlayChannel(2,NULL,0);
    /*switch(io_sound_ch2){
        case SNDID_JUMP:
            return Mix_PlayChannel(2,gSound_Jump,0);
        case SNDID_GRINDER:
            return Mix_PlayChannel(2,gSound_Grinder,0);
    }*/

    // Mix_PlayChannel(3,NULL,0);
    switch(io_sound_ch3){
        case SNDID_COIN:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_POWERBLOCK:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_VINEBLOCK:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_SPINJUMP:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_1UP:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_FIREBALL:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_DESTROYEDBLOCK:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_SPRING:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_BULLETBILL:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_YOSHIHATCH:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_ITEMINRESERVE:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_ITEMOUTRESERVE:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_LRSCROLL:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_DOOR:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_DRUMROLLSTART:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_DRUMROLLEND:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_YOSHILOSE:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_TILEREVEAL:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_CASTLECOLLAPSE:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_YOSHIFIRE:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_THUNDER:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_CHUCKCLAP:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_BOMBBLOW:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_BOMBFUSE:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_BLOCKEJECTION:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_WHISTLE:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_YOSHIMOUNT:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_LEMMYWENDYLAVA:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_YOSHITONGUE:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_MSGBOX:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_TOLEVELTILE:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_PSWITCHOVER:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_YOSHISTOMP:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_SWOOPER:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_PODOBOO:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_STUNNED:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_CORRECT:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_WRONG:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_FIREWORKBANG:
            return Mix_PlayChannel(3,NULL,0);
        case SNDID_FIREWORKWHISTLE:
            return Mix_PlayChannel(3,NULL,0);
    }

    printf("SND_Step(): No suitable sound found.\n");
    return -1;
}