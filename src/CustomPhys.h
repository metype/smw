#ifndef CUSTOMPHYS.h
#define CUSTOMPHYS.h

#include "variables.h"
#include "types.h"
#include <stdio.h>

int* lastGroundx;// = 0;
int* lastGroundy;// = 0;

void PHYS_DoCelDash(int8,int8,int);
void PHYS_DoDoubleJump(int8,int);
void PHYS_StepSmashPit();

#endif