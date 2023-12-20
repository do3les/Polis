// Polis City Simulator

/*--- includes ---*/
#include "raylib.h"
#include "raymath.h"

/*--- defines ---*/


/*--- globals ---*/
const int windowWidth = 1000;
const int windowHeight = 1000;
const Vector2 windowCenter = {windowWidth / 2.0f, windowHeight / 2.0f};


/*--- main ---*/
int main(void){
    /*--- pre-init ---*/


    /*--- init ---*/
    InitWindow(windowWidth, windowHeight, "Polis - City Simulator");


    /*--- game loop ---*/
    while(!WindowShouldClose()){
        /*--- pre-draw ---*/


        /*--- draw ---*/
        BeginDrawing();

            ClearBackground(RAYWHITE);

        EndDrawing();

        /*--- post-draw ---*/


    }

    /*--- terminate ---*/
    CloseWindow();
}
