#pragma once

#include <raylib.h>
#include "raymath.h"



Building::Building(){
    color = LIGHTGRAY;
}

void Building::draw(Rectangle area) {
    DrawRectangleRec(area, color);
}

