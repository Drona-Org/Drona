#include <iostream>
#include <vector>

#include "PX4API.h"
#include "Map.h"

using namespace std;

#define SIMULATOR_PORT 14550

int main()
{

    coord lc = {-10,-10,0};
    coord uc = {10,10,10};
    Map *map = new Map(lc,uc);

    PX4API *px4 = new PX4API(SIMULATOR_PORT,map);

//    coord test = {0.9,0.5,0.5};
//    test = px4->map->CentroidNeigh(test,'u');

//    cout<<test.x<<"\n";
//    cout<<test.y<<"\n";
//    cout<<test.z<<"\n";



    usleep(2500000);

    //px4->StartLogger();
    px4->Arm();

    usleep(2500000);
    px4->StartAutopilot(0,0,-3);
    usleep(2500000);

    int steps = 2;
    int step_len = 3;

    for(int i=0; i<1; i++){
        px4->MotionPrimitive('r',9);
    }
    for(int i=0; i<1; i++){
        px4->MotionPrimitive('l',19);
    }
    for(int i=0; i<2*steps; i++){
        px4->MotionPrimitive('f',2);
    }
//    for(int i=0; i<2*steps; i++){
//        px4->MotionPrimitive('b',step_len);
//    }
//    for(int i=0; i<2*steps; i++){
//        px4->MotionPrimitive('r',step_len);
//    }
//    for(int i=0; i<steps; i++){
//        px4->MotionPrimitive('f',step_len);
//    }


//    px4->SetTargetLocalPosition(-1,-6,-1);
//    usleep(2500000);
//    px4->SetTargetLocalPosition(-5,-7,-1);
//    usleep(2500000);
//    px4->SetTargetLocalPosition(-5,-3,-1);
//    usleep(2500000);

//    px4->SetTargetLocalPosition(0,0,-1);
//    usleep(4000000);

//    px4->SetTargetLocalPosition(1,5,-3);
//    usleep(2500000);
//    px4->SetTargetLocalPosition(5,5,-3);
//    usleep(2500000);
//    px4->SetTargetLocalPosition(5,1,-3);
//    usleep(2500000);

//    px4->SetTargetLocalPosition(0,0,-1);
//    usleep(4000000);

//    px4->StopAutopilot();
//    px4->StopLogger();

//    vector<bool> mask = {true,true,true};
//    px4->Logs2CSV("traj.csv",mask);

    while(true){
       usleep(5000);
    }

}

