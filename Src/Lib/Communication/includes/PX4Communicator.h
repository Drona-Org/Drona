#ifndef PX4COMMUNICATOR_H
#define PX4COMMUNICATOR_H

#include "UdpSocketPort.h"

#include "mavlink.h"
#include "mavlink_helpers.h"
#include "mavlink_types.h"
#include <pthread.h>
#include <iostream>

#define MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_VELOCITY 0b0000110111000111
#define MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_YAW_RATE 0b0000010111111111
#define MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_POSITION 0b0000110111111000

using namespace std;

class PX4Communicator
{
private:
    UdpCommunicationSocket *server;
    static bool isInitialized;
    mavlink_command_long_t InitMavLinkCommandLongT();
    void SendCommand(mavlink_command_long_t cmd);
    static void *DispatchMavLinkMessages(void* ptr);

public:
    PX4Communicator(int simulatorPort);

    void Arm();
    void Takeoff(float alt);
    void Land(float lat, float lon);
    void ReturnToLaunch();
    void GoTo(float lat, float lon, float alt);



    static void HeartBeat(UdpCommunicationSocket* server);

};
#endif // !PX4COMMUNICATOR_H
