#ifndef CUSTOMSOUND_H
#define CUSTOMSOUND_H

#include <SDL_mixer.h>
#include <variables.h>
#include <types.h>
#include <stdio.h>

/* Music Vars */
int curMusicPos;                            // Music position in ms.
int curMusicLoopPoint, curMusicEndPoint;    // Where music should loop and end in ms. 
Mix_Music* gMusic_Playing;                  // The currently playing track.

// The vars below are used in case something like the P-Switch music intterupts the current track.
// Non-vanilla behavior. These are only used if allowed.
int curMusicPos_Back;
int curMusicLoopPoint_Back, curMusicEndPoint_Back;

// Paths to music files.
#define PATH const char*

/* Sound Vars */
Mix_Chunk* gSound_Default;

/* Funcs */
int MUS_LoadBasedContext();
int MUS_Load(PATH);
void MUS_Step();
void SND_Step();

#endif