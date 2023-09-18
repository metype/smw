#ifndef CUSTOMSOUND_H
#define CUSTOMSOUND_H

#include <SDL_mixer.h>
#include "variables.h"
#include <string.h>
#include <stdio.h>

/* Music Vars */
const char* curTrackPath;                   // Path to whatever is currently playing.
double curMusicPos;                         // Music position in ms.
double curMusicLoopPoint, curMusicEndPoint; // Where music should loop and end in ms. 
double curMusicDoLoop;                      // Whether or not the current song should loop.
int isInerrupt;                             // Whether or not the current track interrupted a previous track.
Mix_Music* gMusic_Playing;                  // The currently playing track.

// The vars below are used in case something like the P-Switch music intterupts the current track.
// Non-vanilla behavior. These are only used if allowed.
const char* curTrackPath_Back;
double curMusicPos_Back;
double curMusicLoopPoint_Back, curMusicEndPoint_Back;
double curMusicDoLoop_Back;

/* Sound Vars */
Mix_Chunk* gSound_Default;

/* Funcs */
int MUS_LoadBasedContext();
int MUS_Load(const char*,int);
void MUS_Step();
void SND_Step();

#endif