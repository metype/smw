#include "CustomSound.h"

/* Music Funcs */
/*  MUS_LoadBasedContext();
    Loads a music file based on certain gamestates.
    Requires all songs to be defined first.
    Returns 0 if no suitable song is found.
*/
int MUS_LoadBasedContext(){
    switch(misc_game_mode){
        case gm_Overworld:
            switch(ow_players_map[0]){
                case wm_World1:
                    return MUS_Load("./assets/custom/Overworld/1.txt");
                case wm_World2:
                    return MUS_Load("./assets/custom/Overworld/2.txt");
                case wm_World3:
                    return MUS_Load("./assets/custom/Overworld/3.txt");
                case wm_World5:
                    return MUS_Load("./assets/custom/Overworld/5.txt");
                case wm_World7:
                    return MUS_Load("./assets/custom/Overworld/7.txt");
                case wm_Special:
                    return MUS_Load("./assets/custom/Overworld/Special.txt");
                case wm_Star:
                    return MUS_Load("./assets/custom/Overworld/Star.txt");
            }
            break;
        case gm_Level:  /*  TODO: Make this bit based on level IDs. 
                            Also add in the Func. Music.
                        */
            switch(io_music_ch1){
                case MUSID_ATHLETIC:
                    return MUS_Load("./assets/custom/Level/Athletic.txt");
                case MUSID_OVERWORLD:
                    return MUS_Load("./assets/custom/Level/Overworld.txt");
                case MUSID_SWIMMING:
                    return MUS_Load("./assets/custom/Level/Swimming.txt");
                case MUSID_UNDERGROUND:
                    return MUS_Load("./assets/custom/Level/Underground.txt");
                case MUSID_HAUNTED:
                    return MUS_Load("./assets/custom/Level/Haunted.txt");
                case MUSID_CASTLE:
                    return MUS_Load("./assets/custom/Level/Castle.txt");
                case MUSID_PALACE:
                    return MUS_Load("./assets/custom/Level/Palace.txt");
                case MUSID_BOSS:
                    return MUS_Load("./assets/custom/Level/Boss.txt");
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

    // Load interrupt data if applicable.
    if(doInterrupt && USE_MUSICVAR_BACK){
        curTrackPath_Back = curTrackPath;
        curMusicPos_Back = curMusicPos;
        curMusicLoopPoint_Back = curMusicLoopPoint;
        curMusicEndPoint_Back = curMusicEndPoint;
        curMusicDoLoop_Back = curMusicDoLoop;
    }
    curTrackPath = filePath;

    // Tracking vars.
    // Line 1: Start Pos
    // Line 2: End Pos
    // Line 3: Loop Pos
    // Line 4: Do Loop
    fgets(curLine, 256, readFile);
    curMusicPos = atoi(curLine);
    fgets(curLine, 256, readFile);
    curMusicEndPoint = atoi(curLine);
    fgets(curLine, 256, readFile);
    curMusicLoopPoint = atoi(curLine);
    fgets(curLine, 256, readFile);
    curMusicDoLoop = atoi(curLine);

    fclose(readFile);
    free(curLine);
    free(copyLine);

    // Play music.
    Mix_PlayMusic(gMusic_Playing, 0);
    Mix_SetMusicPosition(curMusicPos / 1000);

    // Everything read correctly! (Yay)
    return 1;
}

/*  MUS_Step();
    Tracks current music.
*/
void MUS_Step(){

}

/* Sound Funcs */
/*  SND_Step();
    Tracks and plays certain sounds based on certain gamestates.
    Requires all sounds to be defined first.
*/
void SND_Step(){}