#pragma once

#include <vector>
#include <raylib.h>


//Forward declarations to avoid circular dependency
class GameObject;
class GameRegion;

#ifndef QuadTree_H
#define QuadTree_H
class QuadTree {
public:
    Rectangle area;
    //GameObject* objects[QT_NODE_CAPACITY];
    GameRegion* region;


    /* Every Quadtree node has four child nodes
     * NW | NE
     * -------
     * SW | SE
     */
    QuadTree* northWest;
    QuadTree* northEast;
    QuadTree* southEast;
    QuadTree* southWest;

    //ToDo: Decide if we need a pointer pointing back to the parent node.

    //Constructor
    QuadTree(Rectangle Area);


    void draw_regions(); //Recursively draw any regions in this QT


    void subdivide(); //Generate four child nodes under this QuadTree
    void prune(); //Remove unnecessary child nodes

    std::vector<GameObject*> query_objects(); //Query recursively for all GameObjects in this QT
    std::vector<GameRegion*> query_regions(); //Query recursively for all regions in this QT

    bool contains_object(GameObject* target); //Check recursively for a target GameObject
    bool contains_region(GameRegion* target); //Check recursively for a target region

};
#endif // !QuadTree_H