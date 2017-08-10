#ifndef DRONA_WORKSPACE_H
#define DRONA_WORKSPACE_H
#include <stdio.h>
#include <vector>
#include <math.h>
#include <string>
using namespace std;

typedef struct WS_Dimension {
    double x_dim;
    double y_dim;
    double z_dim;
} WS_Dimension;

typedef struct WS_Coord {
    double x;
    double y;
    double z;

    double DistanceFrom(WS_Coord other) {
        return sqrt((x - other.x)*(x - other.x) + (y - other.y)*(y - other.y) + (z - other.z)*(z - other.z));
    }

    bool operator==(const WS_Coord& rhs) const {
          return rhs.x == this->x && rhs.y == this->y && rhs.z == this->z;
      }

    bool operator>(const WS_Coord& rhs) const {
          return rhs.x < this->x && rhs.y < this->y && rhs.z < this->z;
      }

    bool operator<(const WS_Coord& rhs) const {
          return rhs.x > this->x && rhs.y > this->y && rhs.z > this->z;
      }

    bool operator>=(const WS_Coord& rhs) const {
          return rhs.x <= this->x && rhs.y <= this->y && rhs.z <= this->z;
      }

    bool operator<=(const WS_Coord& rhs) const {
          return rhs.x >= this->x && rhs.y >= this->y && rhs.z >= this->z;
      }

    WS_Coord(double xv, double yv, double zv): x(xv), y(yv), z(zv){}
    WS_Coord(): x(0), y(0), z(0){}
    string ToString()
    {
        char buff[1000];
        string ret = "";
        sprintf(buff, "(%f, %f, %f)", x,y,z);
        ret.append(buff);
        return ret;
    }
    vector<double> ToDouble()
    {
        vector<double> v;
        v.push_back(x);
        v.push_back(y);
        v.push_back(z);
        return v;
    }
} WS_Coord;

typedef struct WS_Box {
    WS_Coord low;
    WS_Coord high;

    bool IsInBox(WS_Coord point) {
        return low <= point && high >= point;
    }
    WS_Box(WS_Coord l, WS_Coord h): low(l), high(h){}
    WS_Box(): low(WS_Coord(0, 0, 0)), high(WS_Coord(0, 0, 0)) {}
    string ToString(){
        char buff[1000];
        string ret = "";
        sprintf(buff, "Box: (%s, %s)", low.ToString().c_str(), high.ToString().c_str());
        ret.append(buff);
        return ret;
    }
} WS_Box;


typedef struct WS_RobotInfo {
	int id;
    WS_Coord startingLocation;
    string ToString() {
        char buff[1000];
        string ret = "";
        sprintf(buff, "(id : %d, start: %s)", id, startingLocation.ToString().c_str());
        ret.append(buff);
        return ret;
    }
} WS_RobotInfo;


typedef struct WorkspaceInfo {
	WS_Dimension dimension;
    vector<WS_Box> obstacles;
    vector<WS_Box> charging_stations;
    vector<WS_RobotInfo> robots;

    /*
    int ConvertCoordToGridLocation(WS_Coord coord)
    {
        int g_loc;
        if (coord.x < 0 || coord.x >= dimension.x_dim ||
            coord.y < 0 || coord.y >= dimension.y_dim ||
            coord.z < 0 || coord.z >= dimension.z_dim)
        {
            printf("Error: Invalid coordinate\n");
        }

        g_loc = coord.x + coord.y * dimension.x_dim + coord.z * dimension.x_dim* dimension.y_dim;
        return g_loc;
    }

    WS_Coord ConvertGridLocationToCoord(int loc)
    {
        if (loc < 0 || loc >= (dimension.x_dim * dimension.y_dim *dimension.z_dim))
        {
            printf("Error: Invalid location\n");
        }

        return WS_Coord((loc % (dimension.x_dim * dimension.y_dim)) % dimension.x_dim,
                    (loc % (dimension.y_dim * dimension.x_dim)) / dimension.x_dim,
                     loc / (dimension.y_dim * dimension.x_dim));
    }

    // Generate list of obstacle indexes
    vector<int> GetObstaclesLocations(){

        vector<int> locations;
        for(int obs = 0; obs< obstacles.size(); obs++) {
            WS_Box box = obstacles.at(obs);
            for(int i= box.low.x; i<=box.high.x; i++){
                for( int j= box.low.y; j<=box.high.y; j++ ){
                    for( int k=box.low.z; k<=box.high.z; k++ ){
                        locations.push_back(this->ConvertCoordToGridLocation(WS_Coord(i,j,k)));
                    }
                }
            }
        }
        return locations;
    }
    */
    string ToString()
    {
        char buff[1000];
        string ret = "";
        sprintf(buff, "Workspace Dimensions (%f, %f, %f)\n", dimension.x_dim, dimension.y_dim, dimension.z_dim);
        ret.append(buff);
        sprintf(buff, "Workspace Obstacles ::\n");
        ret.append(buff);
        //add obstacles
        for(int i = 0; i< obstacles.size(); i++)
        {
            sprintf(buff, "Obstable %d: %s\n", i, obstacles.at(i).ToString().c_str());
            ret.append(buff);
        }
        sprintf(buff, "Workspace Charging Point ::\n");
        ret.append(buff);
        for(int i = 0; i< charging_stations.size(); i++)
        {
            sprintf(buff, "Charging Point %d: %s\n", i, charging_stations.at(i).ToString().c_str());
            ret.append(buff);
        }
        //add robots info
        sprintf(buff, "Workspace Robot Info ::\n");
        ret.append(buff);
        for(int i = 0; i< robots.size(); i++)
        {
            sprintf(buff, "Robot %d: %s\n", i, robots.at(i).ToString().c_str());
            ret.append(buff);
        }

        return ret;
    }
} WorkspaceInfo;



extern WorkspaceInfo* WORKSPACE_INFO;
#endif
