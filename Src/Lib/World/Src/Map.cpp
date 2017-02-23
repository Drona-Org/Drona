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

// Check if there's an obstacle in c
bool Map::ObstacleIn(coord c){

    vector< tuple<coord,coord> >::iterator it;
    for(it=this->obstacles.begin() ; it < this->obstacles.end(); it++ ) {

        // check if c is in an obstacle
        if( c.In( get<0>(*it), get<1>(*it) ) ){
            return true;
        }
    }
    return false;
}



