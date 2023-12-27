#pragma once

#include <raylib.h>

//Forward declarations to avoid circular dependency
class QuadTree;
class GameObject;

#ifndef GameRegion_H
#define GameRegion_H
class GameRegion {
public:
    Color color;

    GameObject* object;

    virtual void draw(Rectangle area) = 0;
};
#endif // !GameRegion_H


/*-------------------------------- building classes --------------------------------*/

class Building : public GameRegion {
public:
    Building();

    void draw(Rectangle area) override;
};


#include "gameregion.cpp"
