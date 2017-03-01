#ifndef PX4API_H
#define PX4API_H

#include "mavlink.h"
#include "mavlink_helpers.h"
#include "mavlink_types.h"

#include <pthread.h>
#include <iostream>
#include <ctime>

#include "PX4Communicator.h"
#include "PX4Logger.h"

using namespace std;

class PX4API
{
private:

    PX4Communicator *px4com;
    PX4Logger *px4logger;

    int systemId;
    int autopilotId;
    int companionId;

    bool armed;
    bool autopilot;

    bool ToggleOffBoard(bool on);

public:

    PX4API(int simulatorPort);

    void SetTargetLocalPosition(float x, float y, float z){ this->px4com->SetTargetLocalPosition(x,y,z); };
    void SetTargetGlobalPosition(int lat, int lon, int alt){ this->px4com->SetTargetGlobalPosition(lat,lon,alt); };

    bool Arm();
    void TakeoffGlobal(float alt);

    bool StartAutopilot(float x, float y, float z);
    bool StopAutopilot();

    bool StartLogger();
    bool StopLogger();
    void Logs2CSV(const char* filename, vector<bool> mask);

    //void FollowTrajectory(vector< vector< float > > traj, int rounds, float eps);
    //void Loiter(vector< float > center, float radius, int rounds, float eps, float loitStep);
    //void Square(vector< float > corner, float edge, int rounds, float eps);
    //bool CloseTo(float x, float y, float z, float eps);

};
#endif // !PX4API_H
