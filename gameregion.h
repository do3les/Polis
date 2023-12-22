#pragma once

#include <raylib.h>

//Forward declarations to avoid circular dependency
class QuadTree;
class GameObject;

class GameRegion {
public:
    Color color;

    GameObject* object;

    virtual void draw(Rectangle area) =0;
};



/*-------------------------------- building classes --------------------------------*/

class Building : public GameRegion {
public:
    Building();

    void draw(Rectangle area) override;
};


#include "gameregion.cpp"
