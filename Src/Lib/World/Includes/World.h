#ifndef WORLD
#define WORLD

#include <iostream>
#include <fstream>

using namespace std;

class World
{
private:

    ofstream file;

    void include(char* str, int inds);
    void physics(int inds);
    void iOut(char* str, int inds);


public:

    World(char* wordName);

    void InitWorld();
    void CloseWorld();

};
#endif // !World
