#include "Map.h"

Map::Map(coord lc, coord uc){

    this->lc = lc;
    this->uc = uc;

}

// Add an obstacle to the map
bool Map::addObstacle(coord lc, coord uc){

    if((lc.x >= uc.x) || (lc.y >= uc.y) || (lc.z >= uc.z)){
         LOG(" Map::addObstacle Lower coordinates must be larger than upper coordinates");
         return false;
    }

}



