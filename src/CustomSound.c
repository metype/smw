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
/*  SND_Step();
    Tracks and plays certain sounds based on certain gamestates.
    Requires all sounds to be defined first.
*/
void SND_Step(){}