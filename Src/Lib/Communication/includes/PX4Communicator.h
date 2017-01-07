#ifndef PX4COMMUNICATOR_H
#define PX4COMMUNICATOR_H

#include "UdpSocketPort.h"

#include "mavlink.h"
#include "mavlink_helpers.h"
#include "mavlink_types.h"
#include <pthread.h>
#include <iostream>

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
    int Arm();
    int TakeoffLocal(float altitude);

};
#endif // !PX4COMMUNICATOR_H
