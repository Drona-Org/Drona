#include "World.h"
#include <math.h>


int main(){

    char* const fileName = "/home/tommaso/src/Firmware/Tools/sitl_gazebo/worlds/iris.world";
    World *w = new World(fileName);


    for(double a=0; a<=6.28; a+=0.5){
        w->Box(2*cos(a),2*sin(a),0,1,1,5);
    }

    w->CloseWorld();

}

