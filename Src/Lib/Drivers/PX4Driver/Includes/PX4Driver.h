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
#include "WorkspaceParser.h"

using namespace std;

extern class PX4API* PX4Driv;
extern PRT_PROCESS* MAIN_P_PROCESS;

class PX4API
{
private:


    int systemId;
    int autopilotId;
    int companionId;

    bool armed;
    bool autopilot;

    bool ToggleOffBoard(bool on);

public:
    PX4Communicator *px4com;
    PX4API(int simulatorPort);
    bool exitGoto;
    void SetTargetLocalPosition(float x, float y, float z){ this->px4com->SetTargetLocalPosition(x,y,z); };
    void SetTargetGlobalPosition(int lat, int lon, int alt){ this->px4com->SetTargetGlobalPosition(lat,lon,alt); };
    bool SendFakePosition();
    bool Arm();
    void TakeoffGlobal(float alt);

    bool StartAutopilot(float x, float y, float z);
    bool StopAutopilot();

    // High level APIs
    void MotionPrimitive(char motion, int steps);
    void GoTo(WS_Coord goal, double eps);
    void GoTo(float x, float y, float z, double eps);

    void FollowTrajectory(vector< WS_Coord > traj, float eps);

    //void FollowTrajectory(vector< vector< float > > traj, int rounds, float eps);
    //void Loiter(vector< float > center, float radius, int rounds, float eps, float loitStep);
    //void Square(vector< float > corner, float edge, int rounds, float eps);
    bool CloseTo(float x, float y, float z, float eps);

};
#endif // !PX4API_H
