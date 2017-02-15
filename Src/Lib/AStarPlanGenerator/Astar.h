#ifndef DRONA_ASTAR_H
#define DRONA_ASTAR_H

#include "../WorkspaceParser/Workspace.h"

#ifdef __cplusplus
#include <memory>
#include <vector>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

extern int Delta;

const int Max_Traj_Length = 1000;

struct A {
        int PositionsOccupied[1000];
        int size;
};

typedef struct A AvoidPositions;

typedef vector<WS_Coord> RobotPosition_Vector;

class CAstar  
{
  private:
  	WS_Dimension dimension;
  	int ***obsmap;
  	WS_Coord start, end;
    vector< vector<WS_Coord> > avoidTrajs;
  	  
  public:
  	CAstar();
  	void SetDimension(WS_Dimension);
    WS_Dimension GetDimension();
  	void SetObstacleMap(WS_Dimension , RobotPosition_Vector );
  	void SetSEpoint(WS_Coord , WS_Coord );
    void SetAvoidPositions(WS_Dimension, vector< vector<WS_Coord> >);
    vector< vector<WS_Coord> > GetAvoidTrajs();
    void PrintAvoidPositions();
    int*** GetObstacleMap();
    bool FindCollisionFreePath(RobotPosition_Vector&);
    void printTrajectory(int *** , RobotPosition_Vector );
  	virtual ~CAstar();
};
#endif

#endif
