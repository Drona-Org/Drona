#include <iostream>
#include <vector>

#include "PX4API.h"
#include "GazeboWorldGenerator.h"

using namespace std;

#define SIMULATOR_PORT 14550

int main()
{

    char* robFileName = "/home/tommaso/DronaForPX4/Src/Lib/STLMonitor/Src/rob.txt";

    PX4API *px4 = new PX4API(SIMULATOR_PORT);
    vector< bool > log_mask = {true,true,true};



    usleep(2500000);

    px4->StartLogger();
    px4->Arm();

    usleep(2500000);
    px4->StartAutopilot(0,0,-3);
    usleep(5000000);

    vector< WS_Coord > goals = {WS_Coord(3,3,-3),WS_Coord(-3,7,-3),WS_Coord(0,10,-3),WS_Coord(3,7,-3),WS_Coord(-3,3,-3),WS_Coord(0,0,-3)};
    vector< double > robs;

    double delta = 0.3;

    // Execute mission
    px4->StartLogger();

    for(int i=0; i<500; i++){

        cout<<"LOOP"<<i<<"\n";

        px4->ResetLogger();

        double x,y,z;
        ofstream myfile;
        myfile.open ("/home/tommaso/DronaForPX4/Src/Lib/STLMonitor/Src/rob.txt",std::ios_base::app);

        for(int j=0; j<goals.size(); j++){
            x = goals[j].x + (((double) rand() / (RAND_MAX))*delta);
            y = goals[j].y + (((double) rand() / (RAND_MAX))*delta);
            z = goals[j].z + (((double) rand() / (RAND_MAX))*delta);
            myfile <<x<<","<<y<<","<<z<<",";
            px4->GoTo(x,y,z,1);
        }
        myfile.close();


        px4->StopLogger();

        char buff[100];
        sprintf(buff,"traj_%i.csv", i);
        px4->Logs2CSV("traj.csv",log_mask);
        px4->Logs2CSV(buff,log_mask);

        usleep(5000000);




//        ifstream f;
//        do{
//            f.open(robFileName, std::ios::in);
//        }while(!f.good());


//        double rob = 0.0;
//        f >> rob;
//        cout<<"ROB: "<<rob<<"\n";
//        robs.push_back(rob);

    }


    px4->StopLogger();

//    int max_rob_i = 0;
//    double max_rob = -1000;

//    for(int i=0; i<robs.size(); i++){
//        if( robs[i] > max_rob ){
//            max_rob = robs[i];
//            max_rob_i = i;
//        }
//    }

//    cout<<"BEST ROB: "<<max_rob<<","<<max_rob_i<<"\n";



    while(true){
       usleep(5000);
    }

}

