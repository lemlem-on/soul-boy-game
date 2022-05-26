#ifndef INITGAME_C
#define INITGAME_C

#include "raylib.h"
#include "vars.h"
#include "res.h"

void initGameLogo(){
    DrawTexturePro(lemLogo
            ,(Rectangle) { 0, 0, logoScaling.x, logoScaling.y }
            ,(Rectangle) { 0, 0, 256, 224 }
            ,(Vector2) { 0, 0 }
            , 0
            , (Color) {255,255,255,transparency}); 

}

#endif