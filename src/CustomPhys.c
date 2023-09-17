#include "CustomPhys.h"

/*  PHYS_DoCelDash(xAdd, yAdd);
    Adds to (or sets) Mario's speed based on given args.
xAdd,yAdd   ;   Values to add to Mario's speed.
doSet       ;   Sets Mario's speed instead of adding.
*/
void PHYS_DoCelDash(int8 xAdd, int8 yAdd, int doSet){
    int moveHort = (CON_HOLD_LEFT >= 1) - (CON_HOLD_RIGHT >= 1);
    int moveVert = (CON_HOLD_DOWN >= 1) - (CON_HOLD_UP >= 1);

    //printf("PHYS_DoCelDash ; Moving towards: (%u, %u)\n.", moveHort, moveVert);

    if(doSet){
        player_xspeed = moveHort * xAdd;
        player_yspeed = moveVert * yAdd;
    }else{
        player_xspeed += moveHort * xAdd;
        player_yspeed += moveVert * yAdd;
    }
}

/*  PHYS_DoDoubleJump(yAdd, doSpin);
    Sets Mario's yspeed to yAdd.
yAdd    ;   What to add to Mario's yspeed.
doSpin  ;   Whether or not to turn on Mario's spin jump.
*/
void PHYS_DoDoubleJump(int8 yAdd, int doSpin){
    //printf("Jumped\n");
    if(doSpin)
        player_spin_jump_flag = 1;
    player_yspeed = -yAdd;
    player_in_air_flag = 1;
}

/*  PHYS_StepSmashPit();
    Records player's grounded position every second.
    Restores player to that position if they fall in a pit.
*/
void PHYS_StepSmashPit(){
    printf("player_on_screen_pos_y: %u.\n", player_on_screen_pos_y);
    if(player_on_screen_pos_y > 240 && player_on_screen_pos_y < 245){
        player_xspeed = player_yspeed = 0;
        player_xpos = lastGroundx;
        player_ypos = lastGroundy;
    }

    if(counter_global_frames % 60 == 0 && !player_in_air_flag){
        printf("Tracking player pos.\n");
        lastGroundx = player_xpos;
        lastGroundy = player_ypos;
    }
}