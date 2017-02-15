//////////////////////////////////////////////////////////////////////
// Astar.cpp: implementation of the CAstar class.
//////////////////////////////////////////////////////////////////////


#include "Astar.h"
#include "PathSearchNode.h"
#include "stlastar.h"
#include <time.h>

int Delta = 1;

CAstar::CAstar()
{
  	obsmap = NULL;
}

CAstar::~CAstar()
{
  	unsigned int count;
 
  	if(obsmap != NULL)
  	{
		for (count = 0; count < dimension.x_dim; count++)
		{
			delete[] obsmap[count];
		}
    	delete[] obsmap;
    	obsmap = NULL;
  	}
}


void CAstar::SetSEpoint(WS_Coord start, WS_Coord end)
{
  	this->start = start;
    this->end = end;
}

void CAstar::SetDimension(WS_Dimension dimension)
{
  	this->dimension = dimension;
}

WS_Dimension CAstar::GetDimension()
{
    return this->dimension;
}


void CAstar::SetObstacleMap(WS_Dimension dimension, RobotPosition_Vector obstacles)
{
	unsigned int count, count1, count2, count3;

	obsmap = new int**[dimension.x_dim];

	for (count = 0; count < dimension.x_dim; count++)
	{
		obsmap[count] = new int*[dimension.y_dim];
		for (count1 = 0; count1 < dimension.y_dim; count1++)
		{
			obsmap[count][count1] = new int[dimension.z_dim];
		}
	}

	for (count1 = 0; count1 < dimension.x_dim; count1++)
	{
		for (count2 = 0; count2 < dimension.y_dim; count2++)
		{
			for (count3 = 0; count3 < dimension.z_dim; count3++)
			{
				obsmap[count1][count2][count3] = 0;
			}
		}
	}

	for (count = 0; count < obstacles.size(); count++)
	{
		obsmap[obstacles[count].x][obstacles[count].y][obstacles[count].z] = 1;
	}
}

int ***CAstar::GetObstacleMap()
{
    return obsmap;
}

void CAstar::SetAvoidPositions(WS_Dimension dimension, vector< vector<WS_Coord> > avoidPositions)
{
	avoidTrajs = avoidPositions;
}

vector< vector<WS_Coord> > CAstar::GetAvoidTrajs()
{
  return avoidTrajs;
}

void CAstar::PrintAvoidPositions()
{
	unsigned int count1, count2;
	cout << "Avoids Trajectories:" << endl;
	for (count1 = 0; count1 < avoidTrajs.size(); count1++)
	{
		cout << "Robot : " << count1 << endl;
		for (count2 = 0; count2 < avoidTrajs[count1].size(); count2++)
		{
			cout << ConvertCoordToGridLocation(avoidTrajs[count1][count2], dimension) << " ";
		}
		cout << endl;
	}
}

bool CAstar::FindCollisionFreePath(RobotPosition_Vector& ret)
{
    AStarSearch<PathSearchNode> astarsearch(1000000, this);
    
    PathSearchNode nodeStart(this->start, 0);
    PathSearchNode nodeEnd(this->end, this->dimension.x_dim * this->dimension.y_dim * this->dimension.z_dim);

    astarsearch.SetStartAndGoalStates( nodeStart, nodeEnd );

    unsigned int SearchState;
    unsigned int SearchSteps = 0;

    bool timeout = false;
    clock_t begin = clock();
    do
    {
      SearchState = astarsearch.SearchStep();
      SearchSteps++;
      if(SearchSteps % 32 == 0) {
			double elapsed_secs = double(clock() - begin) / CLOCKS_PER_SEC;
			if(elapsed_secs > 1.9) {
				printf("%f\n", elapsed_secs);
				timeout = true;
				break;
			}
      }  
    }
    while( SearchState == AStarSearch<PathSearchNode>::SEARCH_STATE_SEARCHING );
    if(timeout) {
    	cout << "Search timeout" << endl;
    	return false;
    }
    else if( SearchState == AStarSearch<PathSearchNode>::SEARCH_STATE_SUCCEEDED )
    {
      for(PathSearchNode *node = astarsearch.GetSolutionStart(); node != NULL; node = astarsearch.GetSolutionNext())
      {
        ret.push_back(node->coord);
      }
      astarsearch.FreeSolutionNodes();
      astarsearch.EnsureMemoryFreed();
    }
    else if( SearchState == AStarSearch<PathSearchNode>::SEARCH_STATE_FAILED ) 
    {
      cout << "Failed to search. No solution\n";
      return false;
    }
    else if( SearchState == AStarSearch<PathSearchNode>::SEARCH_STATE_OUT_OF_MEMORY ) 
    {
      cout << "Search terminated. Out of memory\n";
      return false;
    }

    return true;
}


//void CAstar::printTrajectory(dimension_t dimension, int **map, position start, position end, vector< pair<int, int > > path)
void CAstar::printTrajectory(int ***map,  RobotPosition_Vector path)
{
	int count1, count2, count3;

	cout << "Path Size = " << path.size() << endl;
	for (count1 = 0; count1 < path.size(); count1++)
	{
		map[path[count1].x][path[count1].y][path[count1].z] = 2;
	}

	/* exporting robot path on file */
	ofstream ofp;
	ofp.open("plan_output");

	for (count3 = 0; count3 < dimension.z_dim; count3++)
	{
		ofp << "z = " << count3 << endl;
		for (count2 = 0; count2 < dimension.y_dim; count2++)
		{
			for (count1 = 0; count1 < dimension.x_dim; count1++)
			{
				if (map[count1][count2][count3] == 0)
					ofp << "  ";
				else if (map[count1][count2][count3] == 1)
					ofp << "$ ";
				else if (count1 == start.x && count2 == start.y && count3 == start.z)
					ofp << "S ";
				else if (count1 == end.x && count2 == end.y && count3 == end.z)
					ofp << "G ";
				else if (map[count1][count2][count3] == 2)
					ofp << "* ";
			}
			ofp << endl;
		}
		ofp << endl << endl;
	}
	ofp.close();
}
