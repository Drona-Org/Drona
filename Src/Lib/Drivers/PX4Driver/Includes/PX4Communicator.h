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
#include "RobotState.h"
#include "PMavlinkMessages.h"
#include "P_common_MessageTypeFunctions.h"
//#include "POrb.h"
//#include "PX4API.h"
using namespace std;

#define MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_POSITION     0b0000110111111000
#define MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_VELOCITY     0b0000110111000111
#define MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_ACCELERATION 0b0000110000111111
#define MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_FORCE        0b0000111000111111
#define MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_YAW_ANGLE    0b0000100111111111
#define MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_YAW_RATE     0b0000010111111111




class PX4Communicator
{
private:
    // Ids for Mav messages
    int systemId;
    int autopilotId;
    int companionId;
    bool isAutoPilot;

    mavlink_set_position_target_local_ned_t targetSetpoint;

    static void* DispatchMavLinkMessages(void* ptr);
    static void SendToPOrb(PRT_INT32 topic, PRT_INT32 px4_event, PRT_VALUE* px4_payload);
    static void* WriteSetPointThread(void *args);

    static void SendHeartBeat(Port* server);

public:

    //UdpCommunicationSocket *udpcomm;

    Port *comm;
    static PRT_MACHINEINST* POrbMachine;
    PX4Communicator(int simulatorPort);

    // Setpoint routines
    void SetTargetLocalPosition(float x, float y, float z);
    void SetTargetGlobalPosition(int lat, int lon, int alt);

    int WriteMessage(mavlink_message_t msg);

    void WriteSetpoint();
    bool StartAutoPilot();
    bool StopAutoPilot();



};


#endif // !PX4COMMUNICATOR_H
