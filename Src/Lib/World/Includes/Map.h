#ifndef MAP
#define MAP

#include <vector>
#include <tuple>

#include "Logger.h"


using namespace std;

struct coord {
    int x,y,z;
};

class Map
{
private:

    coord lc, uc;                               // lower and upper corners of the map
    vector< tuple<coord,coord> > obstacles;     // list of obstacles (upper and lower corners)

public:

    Map(coord lc, coord uc);
    bool addObstacle(coord lc, coord uc);

};
#endif // !Map
