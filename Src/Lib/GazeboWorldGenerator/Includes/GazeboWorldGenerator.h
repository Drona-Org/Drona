#ifndef GAZEBOWORLDGENERATOR
#define GAZEBOWORLDGENERATOR

#include "WorkspaceParser.h"
#include <fstream>

using namespace std;

class GazeboWorldGenerator
{
private:

    ofstream exportFile;
    WorkspaceInfo *wSInfo;

    void include(string str, int inds);
    void physics(int inds);
    void iOut(string str, int inds);


public:

    GazeboWorldGenerator(){};

    void GenerateWorld(const char* importFileName, const char* exportFileName);
    void AddBox(WS_Coord low, WS_Coord high);

};
#endif // !GazeboWorldGenerator
