#include <iostream>
#include <vector>

#include "PX4API.h"
#include "WorkspaceParser.h"

using namespace std;

#define SIMULATOR_PORT 14550

int main(int argc, char const *argv[])
{
    PX4API *px4 = new PX4API(SIMULATOR_PORT);

    usleep(2500000);
    px4->Arm();
    usleep(2500000);
    px4->TakeoffGlobal(5);
    usleep(5000000);
    px4->StartAutopilot(0,0,-5);
    usleep(5000000);

    int numOfExperiments = 1000;
    //sscanf(argv[2], "%d", &numOfExperiments);

    WS_Coord start = WS_Coord(0, 0, -5);
    WS_Box box;
    box.low = WS_Coord(0, 0, -50);
    box.high = WS_Coord(50, 50, 0);

    //set up the experiment
    for(int lenOfGoto=1; lenOfGoto<3; lenOfGoto++){

        //int lenOfGoto;
        //sscanf(argv[1], "%d", &lenOfGoto);

        int i = 0;

        while(i<numOfExperiments)
        {

            cout<<"\n\n EXPER "<<i<<"\n\n";

            WS_Coord gotoLocation = start;
            srand(time(NULL));
            int direction = rand() % 6;
            switch (direction) {
            case 0:
                gotoLocation.x += lenOfGoto;
                break;
            case 1:
                gotoLocation.y += lenOfGoto;
                break;
            case 2:
                gotoLocation.z += lenOfGoto;
                break;
            case 3:
                gotoLocation.x -= lenOfGoto;
                break;
            case 4:
                gotoLocation.y -= lenOfGoto;
                break;
            case 5:
                gotoLocation.z -= lenOfGoto;
                break;
            default:
                printf("Blah");
                break;
            }

            //check if the gotolocation is valid
            if(!box.IsInBox(gotoLocation))
                continue;

            char fileName[1000];
//            //sprintf(fileName, "traj_%d_(%d-%d-%d)_(%d-%d-%d).csv", lenOfGoto, start.x, start.y, start.z, gotoLocation.x, gotoLocation.y, gotoLocation.z);
            sprintf(fileName, "traj_%d_%d.csv", lenOfGoto,i);
            PX4Logger *px4logger = new PX4Logger(10, fileName, false, vector<bool>{true, true, true});
            px4logger->Start();
            px4->GoTo(gotoLocation.x, gotoLocation.y, gotoLocation.z, 0.5);

            px4logger->Stop();
            //dump logs
            px4logger->ToCSV();
            //dump the positions
            //sprintf(fileName, "traj_%d_(%d-%d-%d)_(%d-%d-%d).text", lenOfGoto, start.x, start.y, start.z, gotoLocation.x, gotoLocation.y, gotoLocation.z);
            sprintf(fileName, "coord_%d_%d.csv",lenOfGoto,i);
            ofstream textFile;
            textFile.open (fileName);
            textFile << start.x << "," << start.y << "," << start.z<<",";
            textFile << gotoLocation.x << "," << gotoLocation.y << "," << gotoLocation.z <<endl;
            textFile.close();

            px4logger->logs.clear();
            px4logger->ResetClock();
//            free(px4logger);
//            //usleep(500000);
            i = i + 1;
            start = gotoLocation;
        }
    }
}

