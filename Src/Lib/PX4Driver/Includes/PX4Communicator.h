#ifndef PX4COMMUNICATOR_H
#define PX4COMMUNICATOR_H

#include "UdpSocketPort.h"

#include "mavlink.h"
#include "mavlink_helpers.h"
#include "mavlink_types.h"
#include <pthread.h>
#include <iostream>

#include <vector>

#include <signal.h>
#include <time.h>
#include <sys/time.h>

#define MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_POSITION     0b0000110111111000
#define MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_VELOCITY     0b0000110111000111
#define MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_ACCELERATION 0b0000110000111111
#define MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_FORCE        0b0000111000111111
#define MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_YAW_ANGLE    0b0000100111111111
#define MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_YAW_RATE 0b0000010111111111

using namespace std;

void* StartWriteSetPointThread(void *args);
void* StartReadThread(void *args);

class PX4Communicator
{
private:

    static PX4Communicator px4;
    static bool isInitialized;

    // Ids for Mav messages
    int systemId;
    int autopilotId;
    int companionId;

    // Current status
    mavlink_local_position_ned_t currentLocalPosition;
    mavlink_global_position_int_t currentGlobalPosition;
    mavlink_set_position_target_local_ned_t targetSetpoint;
    mavlink_battery_status_t batteryStatus;
    mavlink_radio_status_t radioStatus;

    void UpdateCurrentLocalPosition(mavlink_local_position_ned_t curLocPos);
    void UpdateCurrentGlobalPosition(mavlink_global_position_int_t curGlobPos);
    void UpdateBatteryStatus(mavlink_battery_status_t batteryStatus);
    void UpdateRadioStatus(mavlink_radio_status_t radioStatus);

    // Offboard control routines
    void OffBoard(bool on);
    void StartOffBoard();
    void WriteSetpoint();

    int WriteMessage(mavlink_message_t msg);
    static void *DispatchMavLinkMessages(void* ptr);

    void PrintStatus();


public:

    UdpCommunicationSocket *server;

    PX4Communicator(int simulatorPort);

    void StartAutopilot();
    void StopAutopilot();

    // Setpoint routines
    void SetPosition(float x, float y, float z);
    void SetVelocity(float vx, float vy, float vz);
    void SetYaw(float yaw);
    void SetYawRate(float yawRate);


    // Maneuvers
    void Arm();
    void Takeoff(float alt);
    void ReturnToLaunch();
    void FollowTrajectory(vector< vector< float > > traj, int rounds, float eps);
    void Loiter(vector< float > center, float radius, int rounds, float eps, float loitStep);
    void Square(vector< float > corner, float edge, int rounds, float eps);

    bool CloseTo(float x, float y, float z, float eps);

    static void HeartBeat(UdpCommunicationSocket* server);
    void WriteSetPointThread(void);

};
#endif // !PX4COMMUNICATOR_H
