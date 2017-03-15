#ifndef WORLD
#define WORLD

#include "Map.h"

#include <iostream>
#include <fstream>

using namespace std;

class World
{
private:

    Map *map;        // Map representation of the world
    ofstream file;
    void include(string str, int inds);
    void physics(int inds);
    void iOut(string str, int inds);


public:

    World(coord lc, coord uc, char* wordName);

    void InitWorld();
    bool AddBox(coord c, int lx, int ly, int lz);
    void CloseWorld();

    Map* GetMap(){ return this->map; };

};
#endif // !World
