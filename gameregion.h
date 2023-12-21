#pragma once

#include <raylib.h>

//Forward declarations to avoid circular dependency
class QuadTree;
class GameObject;

class GameRegion {
public:
    Rectangle area;

    QuadTree treeParent;

    Color color;

    GameObject* object;

    virtual void draw() =0;
};



/*-------------------------------- building classes --------------------------------*/

class Building : public GameRegion {

};
