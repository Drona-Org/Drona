#ifndef MAP
#define MAP

#include <vector>
#include <tuple>

#include "Logger.h"
#include<iostream>

using namespace std;

struct coord {

    int x,y,z;

    //Comparison functions
    bool Less(coord c){ return ((x <= c.x) && (y <= c.y) && (z <= c.z)); }
    bool Great(coord c){ return ((x >= c.x) && (y >= c.y) && (z >= c.z)); }
    bool In(coord lc, coord uc){ return (Great(lc) && Less(uc)); }

    void Print(){ cout<<x<<","<<y<<","<<z<<"\n"; }
};

class Map
{
private:

    coord lc, uc;                               // lower and upper corners of the map
    vector< tuple<coord,coord> > obstacles;     // list of obstacles (upper and lower corners)

public:

    Map(coord lc, coord uc);
    bool AddObstacle(coord lc, coord uc);
    bool ObstacleIn(coord lc);

};
#endif // !Map
