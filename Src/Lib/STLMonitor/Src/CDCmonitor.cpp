#include "Monitor.h"

int main(){

    char* fileName = "/home/tommaso/build-DronaForPX4-Desktop_Qt_5_8_0_GCC_64bit-Default/Src/TestProjects/CDC/traj.csv";
    //char* STLSpec = "not ( ( ev_[0,60] ( 1 < x2[t] and x2[t] < 5 and 1 < x1[t] and x1[t] < 5 ) ) or ( ev_[0,40] ( -6 < x2[t] and x2[t] < -3 and -4 < x1[t] and x1[t] < -2 ) ) )";
    //char* STLSpec = "alw ( -5 < x1[t] and x1[t] < 5 and -2 < x2[t] and x2[t] < 12 )";




    char* STLSpec1 = "ev ( -1 < x1[t] and x1[t] < 1 and -1 < x2[t] and x2[t] < 1  ) and ev ( 2 < x1[t] and x1[t] < 4 and 2 < x2[t] and x2[t] < 4 ) and ev ( -4 < x1[t] and x1[t] < -2 and 6 < x2[t] and x2[t] < 8 )";
    char* STLSpec2 = "ev ( -1 < x1[t] and x1[t] < 1 and 9 < x2[t] and x2[t] < 11 ) and ev ( 2 < x1[t] and x1[t] < 4 and 6 < x2[t] and x2[t] < 8 ) and ev ( -4 < x1[t] and x1[t] < -2 and 2 < x2[t] and x2[t] < 4 )";
    char* STLSpec3 = "alw ( -4 < x1[t] and x1[t] < 4 and -1 < x2[t] and x2[t] < 11 )";
    char* STLSpec4 = "not ( ev ( 0 < x1[t] and x1[t] < 1 and 2 < x2[t] and x2[t] < 3 ) )";
    char* STLSpec5 = "not ( ev ( 0 < x1[t] and x1[t] < 1 and 8 < x2[t] and x2[t] < 9 ) )";

    //"  and ev ( -4 < x1[t] and x1[t] < -2 and 2 < x2[t] and x2[t] < 4 )";

    //and (ev ( -1 < x1[t] and x1[t] < 1 and 9 < x2[t] and x2[t] < 11 ))

    Monitor *monitor = new Monitor();


    while(true){
        ifstream f;
        double robust = DBL_MAX;

        do{
            f.open(fileName);
        }while(!f.good());
        double *robBouns = monitor->breach->STLEvalOnLine(STLSpec1,fileName);

        //cout<<"ROB1: "<<robBouns[1]<<","<<robBouns[0]<<"\n";
        robust = min(robust,robBouns[1]);

        robBouns = monitor->breach->STLEvalOnLine(STLSpec2,fileName);
        //cout<<"ROB2: "<<robBouns[1]<<","<<robBouns[0]<<"\n";
        robust = min(robust,robBouns[1]);


        robBouns = monitor->breach->STLEvalOnLine(STLSpec3,fileName);
        //cout<<"ROB3: "<<robBouns[1]<<","<<robBouns[0]<<"\n";
        robust = min(robust,robBouns[0]);

        robBouns = monitor->breach->STLEvalOnLine(STLSpec4,fileName);
        //cout<<"ROB4: "<<robBouns[1]<<","<<robBouns[0]<<"\n";
        robust = min(robust,robBouns[0]);

        robBouns = monitor->breach->STLEvalOnLine(STLSpec5,fileName);
        //cout<<"ROB5: "<<robBouns[1]<<","<<robBouns[0]<<"\n";
        robust = min(robust,robBouns[0]);

        cout<<"ROB: "<<robust;


        ofstream myfile;
        myfile.open ("rob.txt",std::ios_base::app);
        myfile <<robust<<"\n";
        myfile.close();

        remove(fileName);

    }




}

