// Polis City Simulator

/*--- includes ---*/
#include <vector>
#include <raylib.h>
#include "raymath.h"

#include "gameobject.h"
#include "gameregion.h"
#include "quadtree.h"

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

    Rectangle test = {0, 0, 500, 500};
    Building testBuilding;

    QuadTree testTree(test);

    testTree.subdivide();
    testTree.southWest->region = &testBuilding;

    /*--- game loop ---*/
    while(!WindowShouldClose()){
        /*--- pre-draw ---*/


        /*--- draw ---*/
        BeginDrawing();

            ClearBackground(RAYWHITE);
            testTree.draw_regions();

        EndDrawing();

        /*--- post-draw ---*/


    }

    /*--- terminate ---*/
    CloseWindow();
}
