#ifndef PLAYER_C
#define PLAYER_C

#include "raylib.h"
#include "vars.h"
#include "res.h"

int playerWobbleAnimationTimer = 31;

bool allowPlayerUpWobble = false;

bool allowPlayerDownWobble = false;

void spawnPlayer(){
    DrawTexture(playerDown, playerPosX, playerPosY, WHITE);

    playerWobbleAnimationTimer = playerWobbleAnimationTimer - 1;

    if (allowPlayerUpWobble){
        playerPosY = playerPosY - 1;
        allowPlayerUpWobble = !allowPlayerUpWobble; 
    }

    if (allowPlayerDownWobble){
        playerPosY = playerPosY + 1;
        allowPlayerDownWobble = !allowPlayerDownWobble; 
    }

    if (playerWobbleAnimationTimer == 30){
        allowPlayerUpWobble = !allowPlayerUpWobble;
    }

    if (playerWobbleAnimationTimer == 0){
        allowPlayerDownWobble = !allowPlayerDownWobble;
    }
    
    if (playerWobbleAnimationTimer == -30){
        playerWobbleAnimationTimer = 31;
    }
}


#endif
