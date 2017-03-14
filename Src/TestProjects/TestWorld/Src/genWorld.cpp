#include "World.h"
#include "Map.h"
#include <math.h>


int main(){

    string fileName = "/home/tommaso/src/Firmware/Tools/sitl_gazebo/worlds/iris.world";

    coord lc = {-20,-20,0};
    coord uc = {20,20,10};
    World *w = new World(lc,uc,fileName);


    coord c1 = {3,3,0};
    coord c2 = {6,-3,0};
    coord c3 = {9,3,0};
    coord c4 = {12,-3,0};
    coord c5 = {15,3,0};
    coord c6 = {18,-3,0};

    w->AddBox(c1,1,1,4);
    w->AddBox(c2,1,1,4);
    w->AddBox(c3,1,1,4);
    w->AddBox(c4,1,1,4);
    w->AddBox(c5,1,1,4);
    w->AddBox(c6,1,1,4);

    w->CloseWorld();

    //vector<int> obs = w->GetMap()->GetObstaclesIdxs();
    //for(int i=0; i<obs.size(); i++){
    //    cout<<obs[i]<<" ";
    //}
}

