#ifndef RES_C
#define RES_C

#include "raylib.h"

    Texture2D logo;
    Texture2D titleScreen;

    Texture2D playerUp;
    Texture2D playerDown;
    Texture2D playerLeft;
    Texture2D playerRight;

    //Sound logoChime;

    Music testmusic;

    void loadResources(){
        logo = LoadTexture("../res/logo.png");
        titleScreen = LoadTexture("../res/titleScreen.png");

        playerUp = LoadTexture("../res/playerUp.png");
        playerDown = LoadTexture("../res/playerDown.png");
        playerLeft = LoadTexture("../res/playerLeft.png");
        playerRight = LoadTexture("../res/playerRight.png");

        //logoChime = LoadSound("../res/aud/logochime.mp3");

        testmusic = LoadMusicStream("../res/aud/testmusic.mp3");
    }

#endif