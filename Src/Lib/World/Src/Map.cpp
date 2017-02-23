#include "Map.h"

Map::Map(coord lc, coord uc){

    this->lc = lc;
    this->uc = uc;

}

// Add an obstacle to the map
bool Map::AddObstacle(coord lc, coord uc){

    // Check coordinate
    if( !(lc.Less(uc)) ){
         LOG("Map::addObstacle Lower coordinates must be larger than upper coordinates");
         return false;
    }


    // Check if box is in map space
    if( !( lc.In(this->lc,this->uc) && uc.In(this->lc,this->uc)) ){
        LOG("Map::addObstacle Obstacle falls outside map space");
        return false;
    }

    this->obstacles.push_back(tuple<coord,coord>(lc,uc));
    return true;

}



