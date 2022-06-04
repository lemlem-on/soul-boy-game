#ifndef RES_H
#define RES_H

#include "raylib.h"
#include "res.c"

    extern Texture2D logo;
    extern Texture2D titleScreen;

    extern Texture2D playerUp;
    extern Texture2D playerDown;
    extern Texture2D playerLeft;
    extern Texture2D playerRight;

    //extern Sound logoChime;

    extern Music testmusic;

    void loadResources();

#endif