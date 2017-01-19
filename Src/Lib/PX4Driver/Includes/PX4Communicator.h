#ifndef PX4COMMUNICATOR_H
#define PX4COMMUNICATOR_H

#include "UdpSocketPort.h"

#include "mavlink.h"
#include "mavlink_helpers.h"
#include "mavlink_types.h"
#include <pthread.h>
#include <iostream>

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

    static bool isInitialized;

    // Ids for Mav messages
    int systemId;
    int autopilotId;
    int companionId;

    // Current target setpoint
    mavlink_set_position_target_local_ned_t targetSetpoint;

    // Offboard control routines
    void OffBoard(bool on);
    void StartOffBoard();

    void WriteSetpoint();
    int WriteMessage(mavlink_message_t msg);

    static void *DispatchMavLinkMessages(void* ptr);


public:

    PX4Communicator(int simulatorPort);

    UdpCommunicationSocket *server;

    static void HeartBeat(UdpCommunicationSocket* server);

    void Arm();
    void Takeoff(float alt);
    void Land(float lat, float lon);
    void ReturnToLaunch();

    // Setpoint routines
    void SetPosition(float x, float y, float z);
    void SetVelocity(float vx, float vy, float vz);
    void SetYaw(float yaw);
    void SetYawRate(float yawRate);

    void StartAutopilot();
    void StopAutopilot();

    void WriteSetPointThread(void);

};
#endif // !PX4COMMUNICATOR_H
