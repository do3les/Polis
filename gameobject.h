#pragma once

#include <raylib.h>


class QuadTree; //Forward declaration to avoid circular dependency

class GameObject{
public:
    Vector2 position;

    QuadTree treeParent;

    virtual int process() =0;


};
/*-------------------------------- creature classes --------------------------------*/

class Creature : GameObject {

};


class Human : Creature {

};
