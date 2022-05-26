#ifndef TITLE_C
#define TITLE_C

#include "raylib.h"
#include "res.h"
#include "vars.h"

void titleScreenSecuence(){
    DrawTexture(skyBackground, 0, 0, WHITE);
    DrawTexturePro(titleScreenFloor
            ,(Rectangle) { floorPosition.x, 0, 256, logoScaling.y }
            ,(Rectangle) { 0, 0, 256, 224 }
            ,(Vector2) { 0, 0 }
            , 0
            , WHITE); 

    floorPosition.x = floorPosition.x + 1;

    DrawTexturePro(titleScreen
            ,(Rectangle) { 0, 0, 256, logoScaling.y }
            ,(Rectangle) { 0, 0, 256, 224 }
            ,(Vector2) { 0, 0 }
            , 0
            , WHITE); 

    if (doTransition == true){
        DrawRectangle(0, 0, 256, 224, (Color) {255,255,255,transparency});
        transparency = transparency - 10;
        if (transparency < 0){
            doTransition = false;
            transparency = 255;
        }
    } 
    
    if (doScaling == true){
        logoScaling.y = logoScaling.y + 5;
        if (logoScaling.y > 224){
            doScaling = false;
            logoScaling.y = 224;
        }
    }
}
    

#endif