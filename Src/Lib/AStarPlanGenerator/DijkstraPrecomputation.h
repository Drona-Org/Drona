#include "Workspace.h"

#ifdef __cplusplus
#include <unordered_map>
#include <vector>

typedef std::unordered_map<int, std::vector<int>> precomputed_distance_map;

extern precomputed_distance_map precomputed_dists;

extern "C" {
#endif

void PreComputeObstacleDistanceH(WS_Dimension dim, WS_LocationsList obs, WS_LocationsList ends);

#ifdef __cplusplus
}
#endif