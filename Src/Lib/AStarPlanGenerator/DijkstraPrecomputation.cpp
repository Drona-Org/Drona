#include "DijkstraPrecomputation.h"
#include <limits.h>
#include <set>
#include <cstring>
#include <iostream>

using namespace std;

struct edge { int to, length; };

typedef vector<edge> adjacency_list;  
typedef vector<adjacency_list> graph;   

precomputed_distance_map precomputed_dists;

vector<int> dijkstra(const vector< vector<edge> > &graph, int source) {
    vector<int> min_distance( graph.size(), INT_MAX );
    min_distance[ source ] = 0;
    set< pair<int,int> > active_vertices;
    active_vertices.insert( {0,source} );
        
    while (!active_vertices.empty()) {
        int where = active_vertices.begin()->second;
        active_vertices.erase( active_vertices.begin() );
        for (auto ed : graph[where]) 
            if (min_distance[ed.to] > min_distance[where] + ed.length) {
                active_vertices.erase( { min_distance[ed.to], ed.to } );
                min_distance[ed.to] = min_distance[where] + ed.length;
                active_vertices.insert( { min_distance[ed.to], ed.to } );
            }
    }
    return min_distance;
}

void PreComputeObstacleDistanceH(WS_Dimension dim, WS_LocationsList obs, WS_LocationsList ends)
{
	int total_grid_size = dim.x_dim * dim.y_dim * dim.z_dim;
	bool *obstacles_map = new bool[total_grid_size];
	std::memset(obstacles_map, 0, sizeof(bool) * total_grid_size);
	
	graph g;
	for(int i=0; i < total_grid_size; i++)
	{
		g.push_back(adjacency_list());
	}

	for(int i=0; i < obs.size; i++)
	{
		obstacles_map[obs.locations[i]] = true;
	}
	for(int i=0; i < total_grid_size; i++)
	{	
		#define add_neighbor_if_not_obs(side, step) { 								\
			if(!obstacles_map[i]) {													\
				WS_Coord neighbor = ExtractCoordFromGridLocation(i, dim);			\
				neighbor.side += (step);											\
				if(neighbor.side >=0 && neighbor.side < dim.side##_dim) {			\
					int neighbor_loc = ConvertCoordToGridLocation(neighbor, dim);	\
					if(!obstacles_map[neighbor_loc]) {								\
						struct edge e = {neighbor_loc, 1};							\
						g[i].push_back(e);											\
					}																\
				}																	\
			}																		\
		}																			\

		add_neighbor_if_not_obs(x, -1);
		add_neighbor_if_not_obs(x, +1);
		add_neighbor_if_not_obs(y, -1);
		add_neighbor_if_not_obs(y, +1);
		add_neighbor_if_not_obs(z, -1);
		add_neighbor_if_not_obs(z, +1);
	}

	for(int i=0; i < ends.size; i++)
	{
		precomputed_dists[ends.locations[i]] = dijkstra(g, ends.locations[i]);
		cout << ends.locations[i] << ":" << endl;
		for(int j=0; j < precomputed_dists[ends.locations[i]].size(); j++) {
			cout << precomputed_dists[ends.locations[i]][j] << ", ";
		}
		cout << endl;
	}

	delete obstacles_map;
}