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

#ifndef Building_H
#define Building_H
class Building : public GameRegion {
public:
    Building();

    void draw(Rectangle area) override;
};
#endif // !Building_H