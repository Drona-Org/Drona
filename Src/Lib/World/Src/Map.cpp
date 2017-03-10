#include "Map.h"

Map::Map(coord lc, coord uc){

    // Check coordinate
    if( !(lc.Less(uc)) ){
        LOG("Map::Map Lower coordinates must be larger than upper coordinates");
        exit(EXIT_FAILURE);
    }

    this->lc = lc;
    this->uc = uc;
    this->dx = this->uc.x - this->lc.x;
    this->dy = this->uc.y - this->lc.y;
    this->dz = this->uc.z - this->lc.z;

}

// Add an obstacle to the map
bool Map::AddObstacle(coord lc, coord uc){

    // Check coordinate
    if( !(lc.Less(uc)) ){
         LOG("Map::addObstacle Lower coordinates must be larger than upper coordinates");
         return false;
    }


    // Check if box is in map space
    if( !( this->InMapSpace(lc) && this->InMapSpace(uc)) ){
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

// Generate list of obstacle indexes
vector<int> Map::GetObstaclesIdxs(){

    vector<int> idxs;
    vector< tuple<coord,coord> >::iterator it;

    for(it=this->obstacles.begin() ; it < this->obstacles.end(); it++ ) {

        // get obstacle corners
        coord lc = get<0>(*it);
        coord uc = get<1>(*it);

        for( int i=lc.x; i<uc.x; i++ ){
            for( int j=lc.y; j<uc.y; j++ ){
                for( int k=lc.z; k<uc.z; k++ ){
                    coord obs = {i,j,k};
                    idxs.push_back(this->Coord2Idx(obs));
                }
            }
        }
    }
    return idxs;
}

// Convert coordinate to index
int Map::Coord2Idx(coord c){

    // check if c is in map space
    if( !(this->InMapSpace(c)) ){
        return -1;
    }

    int cx = floor(c.x);
    int cy = floor(c.y);
    int cz = floor(c.z);

    // shift space in (0,0,0)
    cx = cx - this->lc.x;
    cy = cy - this->lc.y;
    cz = cz - this->lc.z;
    return cx + cy*this->dx + cz*(this->dx*this->dy);
}

// Convert index to coordinate
coord Map::Idx2Coord(int idx){

    coord c;
    c.z = (idx/(this->dx*this->dy)) + this->lc.z;
    int rem = idx % (this->dx*this->dy);
    c.y = (rem/this->dx) + this->lc.y;
    c.x = (rem % this->dx) + this->lc.x;

    return c;
}

// Get the centroid of a idx box
coord Map::Centroid(int idx){

    coord c = this->Idx2Coord(idx);
    c.x = c.x + (GRID_STEP/2);
    c.y = c.y + (GRID_STEP/2);
    c.z = c.z + (GRID_STEP/2);

    return c;
}

// Get the index of a neighbor box
int Map::IdxNeigh(int idx, char neigh, int steps){

    coord c = this->Idx2Coord(idx);

    switch(neigh){
        case 'r':
            c.x = c.x + steps*this->GRID_STEP;
        break;
        case 'l':
            c.x = c.x - steps*this->GRID_STEP;
        break;
        case 'f':
            c.y = c.y + steps*this->GRID_STEP;
        break;
        case 'b':
            c.y = c.y - steps*this->GRID_STEP;
        break;
        case 'u':
            c.z = c.z + steps*this->GRID_STEP;
        break;
        case 'd':
            c.z = c.z - steps*this->GRID_STEP;
        break;
        default:
            LOG("Map::Idx2Neigh Unkown neighbor instruction");
            return -1;
    }
    return this->Coord2Idx(c);
}

// Get the index of a neighbor box
coord Map::CentroidNeigh(int idx, char neigh, int steps){
    return this->Centroid(this->IdxNeigh(idx,neigh,steps));
}

// Get the cooridnates of a neighbor box
coord Map::CentroidNeigh(coord c, char neigh, int steps){
    return this->CentroidNeigh(this->Coord2Idx(c),neigh,steps);
}


// Check if coordinate is in map space
bool Map::InMapSpace(coord c){
    return c.In(this->lc,this->uc);
}



