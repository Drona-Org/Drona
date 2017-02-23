#include "World.h"
#include <math.h>


int main(){

    char* const fileName = "/home/tommaso/src/Firmware/Tools/sitl_gazebo/worlds/iris.world";
    World *w = new World(fileName);


    coord c = {2,2,2};
    w->Box(c,2,3,1);



    w->CloseWorld();

}

