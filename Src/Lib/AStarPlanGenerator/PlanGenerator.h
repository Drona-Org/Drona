/*
File: Semplan.h
Authors:
Indranil Saha (isaha@cse.iitk.ac.in)
Ankush Desai(ankush@eecs.berkeley.edu)

The grid locations are assinged integer values as follows for a 4x4 grid

--------------------
4 | 5 | 12   | 13 |
--------------------
3  | 6  | 11  |14 |
--------------------
2  | 7  | 10 | 	15 |
--------------------
1  |  8  | 9 | 16  |
--------------------
*/

/** Provides an interface function for generating motion plans with rest to a sequence of obstacles.
* @param[in] startLocation Starting location of the robot.
* @param[in] endLocation Starting location of the robot.
* @param[in] sequenceOfObstacles Integer sequence of obstacle locations, that identify the grid location the robot should avoid.
* @param[in] obsSize Size of the sequenceOfObstacles list.
* @param[out] sequenceOfSteps Integer sequence of locations, path from start to end.
* @param[out] Size of sequenceOfSteps.
* @returns An instance of a primitive. Caller is responsible for freeing.
* @see PrtFreeType
*/

#ifndef SEMPLAN_H
#define SEMPLAN_H

#include "Astar.h"
#include <vector>
#include <time.h>
#include "../WorkspaceParser/Workspace.h"

using namespace std;

bool GenerateMotionPlanFor(
	int robotid,
	WorkspaceInfo WSInfo,
	int startLocation,
	int endLocation,
	int* sequenceOfObstacles,
	int obsSize,
	vector< vector<WS_Coord> > avoidPositions,
	int sequenceOfSteps[1000],
	int* stepsSize
);

extern clock_t total_elapsed_clock;
extern clock_t total_elapsed_clock_ext;
extern int total_num_calculations;
extern int total_num_calculations_ext;
extern int total_length_of_path;

#endif
