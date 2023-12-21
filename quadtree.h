#pragma once

#include <raylib.h>

#define QT_NODE_CAPACITY 3

class GameObject; //Forward declaration to avoid circular dependency

class QuadTree {
public:
    Rectangle area;
    GameObject* objects[QT_NODE_CAPACITY];
    //ToDo: Give Quadtree a region color/etc.


    /* Every Quadtree node has four child nodes
     * NW | NE
     * -------
     * SW | SE
     */
    QuadTree* northWest;
    QuadTree* nortEast;
    QuadTree* southEast;
    QuadTree* southWest;

    //ToDo: Decide if we need a pointer pointing back to the parent node.

    //Constructor
    QuadTree();


    void subdivide(); //Generate four child nodes under this QuadTree
    void prune(); //Remove unnecessary child nodes

    //ToDo: Functions for querying all objects under this node, finding a sepcific object, etc.

};
