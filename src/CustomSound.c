#include "CustomSound.h"

/* Music Funcs */
/*  MUS_LoadBasedContext();
    Loads a music file based on certain gamestates.
    Requires all songs to be defined first.
    Returns 0 if no suitable song is found.
*/
int MUS_LoadBasedContext(){}

/*  MUS_Load(filePath);
    Loads a music file based on given params.
    Returns 0 if file isn't found.
filePath    ;   Path to music file.
*/
int MUS_Load(const char* filePath){
    /*const*/ char* curLine = malloc(256);//[256];
    /*const*/ char* copyLine = malloc(256);//[256];
    
    // Read in file.
    FILE* readFile = fopen(filePath, "r");
    if(readFile == NULL){
        printf("MUS_Load() Err: Can't find file at %s.\n", filePath);
        return 0;
    }
    
    // Path to music file.
    fgets(curLine, 256, readFile);
    strncpy(copyLine, curLine, strlen(curLine) - 1);
    copyLine[strlen(curLine) - 1] = NULL;//'\0';
    gMusic_Playing = Mix_LoadMUS(copyLine);
    if(gMusic_Playing == NULL){
        printf("MUS_Load() Err: Mix_LoadMUS() Err: %s.\n", Mix_GetError());
        return 0;
    }

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
void MUS_Step(){}

/* Sound Funcs */
/*  SND_Step();
    Tracks and plays certain sounds based on certain gamestates.
    Requires all sounds to be defined first.
*/
void SND_Step(){}