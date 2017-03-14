#ifndef SEMPLAN_H
#define SEMPLAN_H

#include "Astar.h"
#include <vector>
#include <time.h>
#include "Workspace.h"

using namespace std;

bool GenerateMotionPlanFor(int robotid,
    WorkspaceInfo *WSInfo,
    int startLocation,
    int endLocation,
    vector<int> obstacleLocations,
    vector<vector<WS_Coord>> avoidPositions,
    int sequenceOfSteps[1000],
    int* stepsSize
);

extern clock_t total_elapsed_clock;
extern clock_t total_elapsed_clock_ext;
extern int total_num_calculations;
extern int total_num_calculations_ext;
extern int total_length_of_path;

#endif
