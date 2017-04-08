#include <iostream>
#include "PlanGenerator.h"
#include "PX4API.h"
#include "WorkspaceParser.h"
using namespace std;

#define SIMULATOR_PORT 14550


WS_Coord shiftBy = WS_Coord(25, 25, 0);

WS_Coord PlannerToGazebo(WS_Coord coord) {
    return WS_Coord(coord.x - shiftBy.x, coord.y - shiftBy.y, coord.z - shiftBy.z);
}

WS_Coord GazeboToPlanner(WS_Coord coord) {
    return WS_Coord(coord.x + shiftBy.x, coord.y + shiftBy.y, coord.z + shiftBy.z);
}

int main(int argc, char const *argv[])
{
    PX4API *px4 = new PX4API(SIMULATOR_PORT);
    char filename[] = "traj.csv";
    PX4Logger *px4logger = new PX4Logger(10, filename, true, vector<bool>{true, true, true});
    double eps = 1;


    usleep(2500000);
    px4->Arm();
    usleep(2500000);
    px4->StartAutopilot(0,0,-3); //takeoff
    usleep(5000000);


    WorkspaceInfo* WSInfo = ParseWorkspaceConfig(argv[1]);	//char* pathToWorkspace = "../../Src/Workspaces/Exp2";
	int count;
    int* output_seq_of_locations = (int*)malloc(100 * sizeof(int));
	int output_size = 0;
    int* gotos = (int*)malloc(100 * sizeof(int));
    int gotosSize = 0;
	// Testcase: Only static obstacles.
    vector<vector<WS_Coord>> avoidsArr;

    //Goto (1, 1, 2)
    WS_Coord destination = WS_Coord(1, 1, 2);
    WS_Coord currentLocation = GazeboToPlanner(WS_Coord(0, 0, 3));

    GenerateMotionPlanFor(0, WSInfo, WSInfo->ConvertCoordToGridLocation(currentLocation), WSInfo->ConvertCoordToGridLocation(destination), WSInfo->GetObstaclesLocations(), avoidsArr, output_seq_of_locations, &output_size);

    cout << "Trajectory Length = " << output_size << endl;
    cout << "Trajectory: " << endl;
    for (count = 0; count < output_size; count++)
    {
        cout << output_seq_of_locations[count] << endl;
    }

    ConvertToGotos(output_seq_of_locations, output_size, gotos, &gotosSize);
    cout << "Gotos: " << endl;
    for (count = 0; count < gotosSize; count++)
    {
        cout << gotos[count] << endl;
    }

    for (count = 0; count < gotosSize; count++)
    {
        WS_Coord go = PlannerToGazebo(WSInfo->ConvertGridLocationToCoord(gotos[count]));
        px4->GoTo(go.x,go.y,-go.z,0.5);
    }

	return 0;
}
