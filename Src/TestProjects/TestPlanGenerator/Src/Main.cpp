#include <iostream>
#include "PlanGenerator.h"
#include "WorkspaceParser.h"
using namespace std;

int main(int argc, char const *argv[])
{
    WorkspaceInfo* WSInfo = ParseWorkspaceConfig(argv[1]);	//char* pathToWorkspace = "../../Src/Workspaces/Exp2";
	int count;
    int* output_seq_of_locations = (int*)malloc(100 * sizeof(int));
	int output_size = 0;
    int* gotos = (int*)malloc(100 * sizeof(int));
    int gotosSize = 0;
	// Testcase: Only static obstacles.
    vector<vector<WS_Coord>> avoidsArr;
	//GenerateMotionPlanFor(*WSInfo, 4, 113, WSInfo->obstacles.locations, WSInfo->obstacles.size, avoidsArr, 0, output_seq_of_locations, output_size);

	// Testcase: Two other robots are present in the workspace, but they do not block the trajectory 
	// of the current robot.
        //AvoidPositions avoidsArr[] = { { { 10, 11, 10 }, 3 }, { { 11, 14 }, 2 } };
	//GenerateMotionPlanFor(4, 113, obs, 34, avoidsArr, 2, output_seq_of_locations, output_size);

	// Testcase: The end location of one robot block the end location of the current robot. No trajectory exists.         
        //AvoidPositions avoidsArr[] = { { { 30, 29, 36, 61 }, 4 } };
	//GenerateMotionPlanFor(4, 61, obs, 34, avoidsArr, 1, output_seq_of_locations, output_size);

	// Testcase: The location of the other robot at timestep 2 blocks the shortest path of the current robot.
	// We find an alternative path that avoid collision.
	//AvoidPositions avoidsArr[] = { { { 19, 35, 51, 52 }, 4 } };
        //GenerateMotionPlanFor(*WSInfo, 3, 53, WSInfo->obstacles.locations, WSInfo->obstacles.size, avoidsArr, 1, output_seq_of_locations, output_size);

    GenerateMotionPlanFor(0, WSInfo, 1, 2345, WSInfo->GetObstaclesLocations(), avoidsArr, output_seq_of_locations, &output_size);

    cout << "Trajectory Length = " << output_size << endl;
    cout << "Trajectory: " << endl;
    for (count = 0; count < output_size; count++)
    {
        cout << output_seq_of_locations[count] << endl;
    }

    ConvertToGotos(output_seq_of_locations, output_size, gotos, &gotosSize);
    for (count = 0; count < gotosSize; count++)
    {
        cout << gotos[count] << endl;
    }
	return 0;
}
