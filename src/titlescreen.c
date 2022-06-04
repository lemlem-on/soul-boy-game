#ifndef TITLE_C
#define TITLE_C

#include "raylib.h"
#include "res.h"
#include "vars.h"

void titleScreenSecuence(){
    animationsTimer = animationsTimer - 1;
    UpdateMusicStream(testmusic);
    DrawTexturePro(titleScreen
            ,(Rectangle) { 0, 0, titleScaling.x, 224 }
            ,(Rectangle) { 0, 0, 352, 224 }
            ,(Vector2) { 0, 0 }
            , 0
            , (Color) {255,255,255,transparency}); 

    if (doScaling){
        titleScaling.x = titleScaling.x + 2;
    }

    if (titleScaling.x > 352){
        doScaling = !doScaling;
        titleScaling.x = 352;
    }

    if (animationsTimer == -550){

    }
}
    

#endif