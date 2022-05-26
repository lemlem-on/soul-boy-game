#ifndef RES_C
#define RES_C

#include "raylib.h"

    Texture2D lemLogo;
    Texture2D titleScreen;
    Texture2D titleScreenFloor;
    Texture2D skyBackground;

    void loadResources(){
        lemLogo = LoadTexture("../res/lemLogo.png");
        titleScreen = LoadTexture("../res/titleScreen.png");
        titleScreenFloor = LoadTexture("../res/titleScreenFloor.png");
        skyBackground = LoadTexture("../res/skyBackground.png");
    }

#endif