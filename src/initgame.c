#ifndef INITGAME_C
#define INITGAME_C

#include "raylib.h"
#include "vars.h"
#include "res.h"

void initGameLogo(){
    /*
    DrawTexturePro(lemLogo
            ,(Rectangle) { 0, 0, logoScaling.x, logoScaling.y }
            ,(Rectangle) { 0, 0, 256, 224 }
            ,(Vector2) { 0, 0 }
            , 0
            , (Color) {255,255,255,transparency}); 
    */
    if (enableMusic){
        PlayMusicStream(testmusic);
        UpdateMusicStream(testmusic);
    }

    if (animationsTimer < 0){
        DrawTexture(logo, 0, 0, WHITE);
        enableMusic = !enableMusic;
        //PlaySound(logoChime);
    }

    if (animationsTimer < -550){
        animationsTimer = 600;
    }

    if (animationsTimer == 500){
        animationsTimer = 0;
        currentState = STATE_TITLE;
    }

    animationsTimer = animationsTimer - 1;
    
}

#endif