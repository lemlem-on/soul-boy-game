#include "raylib.h"
#include "vars.h"
#include "res.h"
#include "initgame.c"
#include "titlescreen.c"

#define max(a, b) ((a)>(b)? (a) : (b))
#define min(a, b) ((a)<(b)? (a) : (b))

int main() {
    const int windowWidth = 768;
    const int windowHeight = 672;

    SetConfigFlags(FLAG_WINDOW_RESIZABLE | FLAG_VSYNC_HINT);
    InitWindow(windowWidth, windowHeight, "");
    SetWindowMinSize(320, 240);

    loadResources();

    int gameScreenWidth = 256;
    int gameScreenHeight = 224;

    RenderTexture2D target = LoadRenderTexture(gameScreenWidth, gameScreenHeight);
    SetTextureFilter(target.texture, TEXTURE_FILTER_POINT);

    SetTargetFPS(60);

    currentState = STATE_LOGO;

    while (!WindowShouldClose()){
        float scale = min((float)GetScreenWidth()/gameScreenWidth, (float)GetScreenHeight()/gameScreenHeight);

        BeginTextureMode(target);

            ClearBackground(BLACK);

            switch(currentState){
            case STATE_LOGO:{
                initGameLogo();
                break;
            }
            case STATE_TITLE:{
                titleScreenSecuence();
                break;
            }
                break;
            case STATE_PLAY:{
                break;
            }
            case STATE_RESET:{
                hudEventActionTimer = 0;
                animationsTimer = 0;
                transparency = 255;
                doScaling = true;
                logoScaling.x = 0;
                logoScaling.y = 0;
                currentState = STATE_TITLE;
                break;
            }
            }
        EndTextureMode();
        
        BeginDrawing();
            DrawTexturePro(target.texture, (Rectangle){ 0.0f, 0.0f, (float)target.texture.width, (float)-target.texture.height },
                           (Rectangle){ (GetScreenWidth() - ((float)gameScreenWidth*scale))*0.5f, (GetScreenHeight() - ((float)gameScreenHeight*scale))*0.5f,
                           (float)gameScreenWidth*scale, (float)gameScreenHeight*scale }, (Vector2){ 0, 0 }, 0.0f, WHITE);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}