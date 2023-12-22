#pragma once

#include <raylib.h>
#include "raymath.h"


QuadTree::QuadTree(Rectangle Area) {
    area = Area;

}

void QuadTree::subdivide() {
    QuadTree nW({area.x, area.y, area.width / 2.0f, area.height / 2.0f});
    northWest = &nW;

    QuadTree nE({area.x + area.width / 2.0f, area.y, area.width / 2.0f, area.height / 2.0f});
    northEast = &nE;

    QuadTree sE({area.x, area.y + area.height / 2.0f, area.width / 2.0f, area.height / 2.0f});
    southEast = &sE;

    QuadTree sW({area.x + area.width / 2.0f, area.y + area.height / 2.0f, area.width / 2.0f, area.height / 2.0f});
    southWest = &sW;
}

void QuadTree::draw_regions() {
    if(northWest != nullptr){
        northWest->draw_regions();
    }
    if(northEast != nullptr){
        northEast->draw_regions();
    }
    if(southEast != nullptr){
        southEast->draw_regions();
    }
    if(southWest != nullptr){
        southWest->draw_regions();
    }
    if(region != nullptr){
        region->draw(area);
    }
}
