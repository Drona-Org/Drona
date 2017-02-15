#include "PathSearchNode.h"
#include "DijkstraPrecomputation.h"

bool PathSearchNode::IsSameState( PathSearchNode &rhs , void* context)
{
  return CoordAreEqual(coord, rhs.coord) && timestamp == rhs.timestamp;
}

float PathSearchNode::GoalDistanceEstimate( PathSearchNode &nodeGoal , void* _context)
{
#ifdef USE_DIJKSTRA_PRECOMPUTATION
  CAstar* context = (CAstar*)_context;
  int goal_loc = ConvertCoordToGridLocation(nodeGoal.coord, context->GetDimension());
  int curr_loc = ConvertCoordToGridLocation(coord, context->GetDimension());
  return precomputed_dists[goal_loc][curr_loc];
#else
  int cost_hX = abs(coord.x - nodeGoal.coord.x);
  int cost_hY = abs(coord.y - nodeGoal.coord.y);
  int cost_hZ = abs(coord.z - nodeGoal.coord.z);
  float cost_h = cost_hX + cost_hY + cost_hZ;
  return cost_h;
#endif
}

bool PathSearchNode::IsGoal( PathSearchNode &nodeGoal , void* _context)
{
  CAstar* context = (CAstar*)_context;
  if(CoordAreEqual(coord, nodeGoal.coord)) {
    vector< vector<WS_Coord> > avoidTrajs = context->GetAvoidTrajs();
    for(int i=0; i < avoidTrajs.size(); i++)
    {
      for(int t=timestamp; t < avoidTrajs[i].size(); t++)
      {
        if(CoordAreEqual(avoidTrajs[i][t], nodeGoal.coord)) {
          return false;
        }
      }
    }
    return true;
  }
  return false;
}

bool isBlocked(WS_Coord pos, int timestep, int ***obsmap, vector< vector<WS_Coord> > avoidTrajs)
{
  if(obsmap[pos.x][pos.y][pos.z] == 1) {
    return true;
  }
  for(int i=0; i < avoidTrajs.size(); i++)
  {
    for(int t = timestep - Delta; t <= timestep + Delta; t++)
    {
      if(t >= 0) {
        if(t < avoidTrajs[i].size()) {
          if(CoordAreEqual(pos, avoidTrajs[i][t])) {
            return true;
          } 
        } else {
          if(CoordAreEqual(pos, avoidTrajs[i][avoidTrajs[i].size() - 1])) {
            return true;
          }
        }
      }
    }
  }
  return false;  
}

bool PathSearchNode::GetSuccessors( AStarSearch<PathSearchNode> *astarsearch, PathSearchNode *parent_node, void* _context) 
{
  CAstar* context = (CAstar*)_context;
  #define add_if_not_blocked(side, step) {                                                          \
    WS_Coord neighbor = coord;                                                                      \
    neighbor.side += (step);                                                                        \
    if(neighbor.side >= 0 && neighbor.side < context->GetDimension().side##_dim &&                  \
      !isBlocked(neighbor, timestamp + 1, context->GetObstacleMap(), context->GetAvoidTrajs())) {   \
      PathSearchNode newNode(neighbor, timestamp + 1);                                              \
      astarsearch->AddSuccessor(newNode);                                                           \
    }                                                                                               \
  }

  add_if_not_blocked(x, -1);
  add_if_not_blocked(x, +1);
  add_if_not_blocked(y, -1);
  add_if_not_blocked(y, +1);
  add_if_not_blocked(z, -1);
  add_if_not_blocked(z, +1);
  add_if_not_blocked(x, 0); // hovering action

  return true;
}

float PathSearchNode::GetCost( PathSearchNode &successor , void* context)
{
  if(CoordAreEqual(coord, successor.coord)) {
    return HOVERING_COST;
  } else {
    return STEP_COST;
  }
}

void PathSearchNode::PrintNodeInfo()
{
  printf("(%d, %d %d)@t=%d\n", coord.x, coord.y, coord.z, timestamp);
}