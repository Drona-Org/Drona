#include "World.h"
#include "Map.h"
#include <math.h>


int main(){

    char* const fileName = "/home/tommaso/src/Firmware/Tools/sitl_gazebo/worlds/iris.world";

    coord lc = {-10,-10,0};
    coord uc = {10,10,10};
    World *w = new World(lc,uc,fileName);


    coord c1 = {2,2,0};
    coord c2 = {-5,-3,0};

    w->AddBox(c1,2,3,1);
    w->AddBox(c2,1,5,2);
    w->CloseWorld();

    vector<int> obs = w->GetMap()->GetObstaclesIdxs();
    for(int i=0; i<obs.size(); i++){
        cout<<obs[i]<<" ";
    }
}

