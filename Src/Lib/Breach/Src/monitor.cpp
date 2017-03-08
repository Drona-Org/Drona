#include "BreachAPI.h"

#include <unistd.h>
#include <ctime>

int main(){

    BreachAPI *breach = new BreachAPI();
    breach->StartMatlabEngine();

    breach->InitBreach("./breach");

    char* fileName = "/home/tommaso/build-DronaForPX4-Desktop_Qt_5_8_0_GCC_64bit-Default/Samples/TestCommunicationLib/traj.csv";

    while(true){
        double *rob_bouns = breach->STLEvalOnLine("alw_[0,60] ( -10 < x1[t] and x1[t] < 10 and -10 < x2[t] and x2[t] < 10 and -10 < x3[t] and x3[t] < 10)",fileName);
        //double *rob_bouns = breach->STLEvalOnLine("not ( ( ev_[0,60] ( 1 < x2[t] and x2[t] < 5 and 1 < x1[t] and x1[t] < 5 ) ) or ( ev_[0,40] ( -6 < x2[t] and x2[t] < -3 and -4 < x1[t] and x1[t] < -2 ) ) )",fileName);
        cout<<"Robustness ["<<rob_bouns[1]<<","<<rob_bouns[0]<<"]\n";
        usleep(50000);
    }

    breach->StopMatlabEngine();

}

