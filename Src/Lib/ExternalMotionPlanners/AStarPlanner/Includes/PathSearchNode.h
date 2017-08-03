#include "stlastar.h"
#include "Workspace.h"
#include "Astar.h"

#define STEP_COST 1.0
#define HOVERING_COST 1.0

class PathSearchNode
{
public:
	WS_Coord coord;
	int timestamp;
	
	PathSearchNode() { };
	PathSearchNode(WS_Coord _coord, int _timestamp) : coord(_coord), timestamp(_timestamp) { };

	float GoalDistanceEstimate( PathSearchNode &nodeGoal , void* context);
	bool IsGoal( PathSearchNode &nodeGoal , void* context);
	bool GetSuccessors( AStarSearch<PathSearchNode> *astarsearch, PathSearchNode *parent_node , void* context);
	float GetCost( PathSearchNode &successor , void* context);
	bool IsSameState( PathSearchNode &rhs , void* context);

	void PrintNodeInfo();
};