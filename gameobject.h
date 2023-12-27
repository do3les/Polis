#pragma once

#include <raylib.h>

//Forward declarations to avoid circular dependency
class QuadTree;

#ifndef GameObject_H
#define GameObject_H
class GameObject {
public:
    Vector2 position;

    virtual int process() = 0;

    virtual void draw() = 0;

};
#endif // !GameObject_H


/*-------------------------------- creature classes --------------------------------*/

class Creature : public GameObject {

};


class Human : public Creature {



    void draw() override {
        DrawCircleV(position, 5, GREEN);
    }
};
