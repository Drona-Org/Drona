#include "Map.h"

Map::Map(coord lc, coord uc){

    this->lc = lc;
    this->uc = uc;

}

// Add an obstacle to the map
bool Map::addObstacle(coord lc, coord uc){

    // Check coordinate
    if( !(lc.less(uc)) ){
         LOG(" Map::addObstacle Lower coordinates must be larger than upper coordinates");
         return false;
    }

}



