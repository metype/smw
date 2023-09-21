#ifndef CUSTOMPHYS.h
#define CUSTOMPHYS.h

#include "variables.h"
#include "types.h"
#include "funcs.h"
#include <stdio.h>

/* Smash Pit Vars */
int* lastGroundx;// = 0;
int* lastGroundy;// = 0;

/* Coin Challenge Vars */
uint8* cc_startingCoins;    // The amount of coins the player starts with per-level.
int* cc_coinTimer_Max;      // Time in-between each drain in seconds.
int* cc_coinTimer_Cur;      // Time before next coin is drained.
int* cc_disableLevelTimer;  // Whether or not to disable the level timer.

/* Phys Funcs */
void PHYS_DoCelDash(int8,int8,int);
void PHYS_DoDoubleJump(int8,int);
void PHYS_StepSmashPit();

/* Challenge Funcs */
void CHAL_InitCoinChallenge(uint8,int,int);
void CHAL_StepCoinChallenge();

#endif