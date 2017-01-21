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

    static void *DispatchMavLinkMessages(void* ptr);

    void PrintStatus();

    bool writing;
    bool reading;

public:

    UdpCommunicationSocket *server;
    PX4Communicator(int simulatorPort);

    // Setpoint routines
    void SetTargetLocalPosition(float x, float y, float z);
    void SetTargetGlobalPosition(int lat, int lon, int alt);

    static void HeartBeat(UdpCommunicationSocket* server);
    void WriteSetPointThread(void);

    int WriteMessage(mavlink_message_t msg);

    void WriteSetpoint();
    bool StartWrite();
    bool StopWrite();

    mavlink_local_position_ned_t getLocalPosition(){ return this->currentLocalPosition; };
    mavlink_global_position_int_t getGlobalPosition(){ return this->currentGlobalPosition; };

};
#endif // !PX4COMMUNICATOR_H
