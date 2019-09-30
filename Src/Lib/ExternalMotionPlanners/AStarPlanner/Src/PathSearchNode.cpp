#include "PathSearchNode.h"

bool PathSearchNode::IsSameState( PathSearchNode &rhs , void* context)
{
  return coord == rhs.coord && timestamp == rhs.timestamp;
}

float PathSearchNode::GoalDistanceEstimate( PathSearchNode &nodeGoal , void* _context)
{
  int cost_hX = abs(coord.x - nodeGoal.coord.x);
  int cost_hY = abs(coord.y - nodeGoal.coord.y);
  int cost_hZ = abs(coord.z - nodeGoal.coord.z);
  float cost_h = cost_hX + cost_hY + cost_hZ;
  return cost_h;
}

bool PathSearchNode::IsGoal( PathSearchNode &nodeGoal , void* _context)
{
  CAstar* context = (CAstar*)_context;
  if(coord == nodeGoal.coord) {
    vector< vector<WS_Coord> > avoidTrajs = context->GetAvoidTrajs();
    for(int i=0; i < avoidTrajs.size(); i++)
    {
      for(int t=timestamp; t < avoidTrajs[i].size(); t++)
      {
        if(avoidTrajs[i][t] == nodeGoal.coord) {
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
  if(obsmap[(int)pos.x][(int)pos.y][(int)pos.z] == 1) {
    return true;
  }
  for(int i=0; i < avoidTrajs.size(); i++)
  {
    for(int t = timestep - Delta; t <= timestep + Delta; t++)
    {
      if(t >= 0) {
        if(t < avoidTrajs[i].size()) {
          if(pos == avoidTrajs[i][t]) {
            return true;
          } 
        } else {
          if(pos == avoidTrajs[i][avoidTrajs[i].size() - 1]) {
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
  if(coord == successor.coord) {
    return HOVERING_COST;
  } else {
    return STEP_COST;
  }
}

void PathSearchNode::PrintNodeInfo()
{
  printf("(%d, %d %d)@t=%d\n", coord.x, coord.y, coord.z, timestamp);
}
