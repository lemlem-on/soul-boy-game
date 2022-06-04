#ifndef VARS_H
#define VARS_H

#include "raylib.h"
#include "stdbool.h"
//-----------------------------------------------------------------
//               gamestates
//-----------------------------------------------------------------
enum GAME_STATE
{
    STATE_LOGO,
    STATE_TITLE,
    STATE_DEMO,
    STATE_PLAY,
    STATE_RESET
};

enum GAME_STATE currentState;

//-----------------------------------------------------------------
//     general game variables (timers, counters, bools, etc)
//-----------------------------------------------------------------

//int
int hudEventActionTimer = 0;
int animationsTimer = 100;
int transparency = 255;

//bool
bool doScaling = true;
bool doTransition = true;
bool titleVariableForSomething = true;
bool enableMusic = false;

//-----------------------------------------------------------------
//             position / dims related stuff
//-----------------------------------------------------------------

//vector
Vector2 titleScaling = {0, 0};
Vector2 floorPosition = {0, 0};

int playerPosX = 100;
int playerPosY = 100;

#endif