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


void* StartWriteThread(void *args);

class PX4Communicator
{
private:

    UdpCommunicationSocket *server;
    static bool isInitialized;

    int systemId;
    int autopilotId;
    int companionId;

    bool stopWriteReadThreads;

    mavlink_command_long_t InitMavLinkCommandLongT();
    void SendCommand(mavlink_command_long_t cmd);
    static void *DispatchMavLinkMessages(void* ptr);


    mavlink_set_position_target_local_ned_t targetSetpoint;


    void OffBoard(bool on);

public:
    PX4Communicator(int simulatorPort);

    static void HeartBeat(UdpCommunicationSocket* server);

    void Arm();
    void Takeoff(float alt);
    void Land(float lat, float lon);
    void ReturnToLaunch();

    void SetPosition(float x, float y, float z);
    void SetVelocity(float vx, float vy, float vz);
    void SetYaw(float yaw);
    void SetYawRate(float yawRate);

    void WriteSetpoint();
    void WriteThread(void);

    int WriteMessage(mavlink_message_t msg);

    void StartOffBoard();
    void StopOffBoard(){ this->OffBoard(false); };

    void StartAutopilot();
    void StopAutopilot();

};
#endif // !PX4COMMUNICATOR_H
