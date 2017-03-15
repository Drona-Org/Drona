#ifndef GAZEBOWORLDGENERATOR
#define GAZEBOWORLDGENERATOR

#include "Map.h"
#include "WorkspaceParser.h"

#include <iostream>
#include <fstream>

using namespace std;

class GazeboWorldGenerator
{
private:

    Map *map;        // Map representation of the world
    ofstream file;
    void include(string str, int inds);
    void physics(int inds);
    void iOut(string str, int inds);

    WorkspaceInfo *wSInfo;


public:

    GazeboWorldGenerator(coord lc, coord uc, char* wordName);
    GazeboWorldGenerator(){};

    void InitWorld();
    bool AddBox(coord c, int lx, int ly, int lz);
    bool AddBox(WS_Coord low, WS_Coord high);
    void CloseWorld();

    Map* GetMap(){ return this->map; };


    void ImportMap(char* fileName);
    void GenerateWorld(const char* importFileName, const char* exportFileName);

};
#endif // !GazeboWorldGenerator
