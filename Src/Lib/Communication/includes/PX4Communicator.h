#ifndef PX4COMMUNICATOR_H
#define PX4COMMUNICATOR_H

#include "UdpSocketPort.h"

#include "mavlink.h"
#include "mavlink_helpers.h"
#include "mavlink_types.h"

class PX4Communicator
{
private:
    UdpCommunicationSocket *server;
    mavlink_command_long_t InitMavLinkCommandLongT();
    void SendCommand(mavlink_command_long_t cmd);

public:
    PX4Communicator(int simulatorPort);
    int Arm();
    int TakeoffLocal(float altitude);

};
#endif // !PX4COMMUNICATOR_H
