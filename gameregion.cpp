#include <raylib.h>
#include "raymath.h"
#include "gameregion.h"


Building::Building(){
    color = LIGHTGRAY;
}

void Building::draw(Rectangle area) {
    DrawRectangleRec(area, color);
}

