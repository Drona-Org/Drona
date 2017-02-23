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

    void include(char* str, int inds);
    void physics(int inds);
    void iOut(char* str, int inds);


public:

    World(char* wordName);

    void InitWorld();
    bool AddBox(coord c, int lx, int ly, int lz);
    void CloseWorld();

    Map* GetMap(){ return this->map; };

};
#endif // !World
