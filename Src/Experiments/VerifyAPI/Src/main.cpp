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

    WS_Coord start = WS_Coord(0, 0, 5);
    WS_Box box;
    box.low = WS_Coord(0, 0, 0);
    box.high = WS_Coord(50, 50, 50);

    int i = 0;

    while(i<numOfExperiments)
    {

        cout<<"\n\n EXPER "<<i<<"\n\n";

        WS_Coord gotoLocation = start;
        srand(time(NULL));

        gotoLocation.x = rand() % 50;
        gotoLocation.y = rand() % 50;
        gotoLocation.z = rand() % 50;
        //check if the gotolocation is valid
        if(!box.IsInBox(gotoLocation))
            continue;

        char fileName[1000];
        sprintf(fileName, "traj_%d.csv", i);
        PX4Logger *px4logger = new PX4Logger(10, fileName, false, vector<bool>{true, true, true});
        px4logger->Start();
        px4->GoTo(gotoLocation.x, gotoLocation.y, -gotoLocation.z, 0.5);

        px4logger->Stop();
        //dump logs
        px4logger->ToCSV();

        //compute the length
        float trajLen = sqrt((start.x - gotoLocation.x)*(start.x - gotoLocation.x) + (start.y - gotoLocation.y)*(start.y - gotoLocation.y) + (start.z - gotoLocation.z)*(start.z - gotoLocation.z));
        //dump the positions
        sprintf(fileName, "coord_%d.csv",i);
        ofstream textFile;
        textFile.open (fileName);
        textFile << trajLen << "," << start.x << "," << start.y << "," << start.z<<",";
        textFile << gotoLocation.x << "," << gotoLocation.y << "," << gotoLocation.z <<endl;
        textFile.close();

        px4logger->logs.clear();
        px4logger->ResetClock();
        i = i + 1;
        start = gotoLocation;
    }

}

