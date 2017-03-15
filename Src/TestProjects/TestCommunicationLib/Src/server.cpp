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

    px4->StartLogger();
    px4->Arm();

    usleep(2500000);
    px4->StartAutopilot(0,0,-3);
    usleep(2500000);

    coord c1 = {3,3,-2};
    coord c2 = {-3,6,-2};
    coord c3 = {3,9,-2};
    coord c4 = {-3,12,-2};
    coord c5 = {3,15,-2};
    coord c6 = {-3,18,-2};

    vector<coord> c {c1,c2,c3,c4,c5,c6};

//    for(int i=0; i<c.size(); i++){
//        coord cc = c[i];
//        if(cc.x > 0){
//            px4->GoTo(cc.x-1,cc.y+2,cc.z);
//            px4->GoTo(cc.x,cc.y+2,cc.z);
//            px4->GoTo(cc.x+1,cc.y+2,cc.z);
//        }else{
//            px4->GoTo(cc.x-1,cc.y-1,cc.z);
//            px4->GoTo(cc.x,cc.y-1,cc.z);
//            px4->GoTo(cc.x+1,cc.y-1,cc.z);
//        }
//    }


    px4->GoTo(5,2.5,-2);
    px4->GoTo(5,3.5,-2);
    px4->GoTo(5,4.5,-2);


    px4->GoTo(-5,6.5,-2);
    px4->GoTo(-5,7.5,-2);
    px4->GoTo(-5,8.5,-2);

    px4->GoTo(5,8.5,-2);
    px4->GoTo(5,9.5,-2);
    px4->GoTo(5,10.5,-2);

    px4->GoTo(-5,12.5,-2);
    px4->GoTo(-5,13.5,-2);
    px4->GoTo(-5,14.5,-2);

    px4->GoTo(5,14.5,-2);
    px4->GoTo(5,15.5,-2);
    px4->GoTo(5,16.5,-2);

    px4->GoTo(-5,17.5,-2);
    px4->GoTo(-5,18.5,-2);
    px4->GoTo(-5,19.5,-2);





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
    px4->StopLogger();

//    vector<bool> mask = {true,true,true};
//    px4->Logs2CSV("traj.csv",mask);

    while(true){
       usleep(5000);
    }

}

