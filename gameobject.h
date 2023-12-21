#pragma once

#include <raylib.h>

//Forward declarations to avoid circular dependency
class QuadTree;

class GameObject{
public:
    Vector2 position;

    QuadTree treeParent;

    virtual int process() =0;

    virtual void draw() =0;

};



/*-------------------------------- creature classes --------------------------------*/

class Creature : public GameObject {

};


class Human : public Creature {



    void draw() override {
        DrawCircleV(position, 5, GREEN);
    }
};
