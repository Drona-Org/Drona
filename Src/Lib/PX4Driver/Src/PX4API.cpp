#include "PX4API.h"

PX4API::PX4API(int simulatorPort){

    this->px4com = new PX4Communicator(simulatorPort);

    this->systemId = 255;
    this->autopilotId = 1;
    this->companionId = 1;

    this->armed = false;
    this->autopilot = false;

}

bool PX4API::Arm(){

    if(this->armed){
        LOG("PX4API::Arm already armed");
        return false;
    }

    mavlink_command_long_t cmd = {0};
    cmd.confirmation = 1;
    cmd.target_system = this->companionId;
    cmd.target_component = this->autopilotId;

    cmd.command = MAV_CMD_COMPONENT_ARM_DISARM;
    cmd.param1 = 1;

    mavlink_message_t msg;
    mavlink_msg_command_long_encode(this->systemId, this->autopilotId, &msg, &cmd);

    this->px4com->WriteMessage(msg);
    this->armed = true;

    LOG("PX4API::Arm armed");
    return true;

}


void PX4API::TakeoffGlobal(float alt){

    mavlink_command_long_t cmd = {0};
    cmd.confirmation = 1;
    cmd.target_system = this->companionId;
    cmd.target_component = this->autopilotId;

    cmd.command = MAV_CMD_NAV_TAKEOFF;
    cmd.param4 = NAN;
    cmd.param5 = NAN;
    cmd.param6 = NAN;
    cmd.param7 = alt;

    mavlink_message_t msg;
    mavlink_msg_command_long_encode(this->systemId, this->autopilotId, &msg, &cmd);

    this->px4com->WriteMessage(msg);

    // Print log
    char buff[100];
    sprintf(buff,"PX4API::Takeoff altitude %f", alt);
    LOG(buff);
}


bool PX4API::StartAutopilot(float x, float y, float z){

    if(this->autopilot){
        LOG("PX4API::StartAutopilot autopilot already on");
        return false;
    }

    this->SetTargetLocalPosition(x,y,z);
    this->px4com->WriteSetpoint();

    if( !this->ToggleOffBoard(true) ){
        return false;
    }

    this->autopilot = true;

    LOG("PX4API::StartAutopilot Autopilot on");
    this->px4com->StartAutoPilot();

    return true;
}

bool PX4API::StopAutopilot(){

    if(!this->autopilot){
        LOG("PX4API::StartAutopilot autopilot already off");
        return false;
    }

    this->px4com->StopAutoPilot();
    this->ToggleOffBoard(false);
    this->autopilot = false;

    LOG("PX4API::StopAutopilot Autopilot off");
    return true;
}

bool PX4API::ToggleOffBoard(bool on){

    mavlink_command_long_t cmd = {0};
    cmd.confirmation = 1;
    cmd.target_system = this->companionId;
    cmd.target_component = this->autopilotId;

    cmd.param1 = (float) on;
    cmd.command = MAV_CMD_NAV_GUIDED_ENABLE;

    mavlink_message_t msg;
    mavlink_msg_command_long_encode(this->systemId, this->autopilotId, &msg, &cmd);

    int len = this->px4com->WriteMessage(msg);

    if( len > 0 ){
        // Print log
        char buff[100];
        strcpy(buff,"PX4API::ToggleOffBoard Offboard control ");
        if(on){
            strcat(buff,"on");
        }else{
            strcat(buff,"off");
        }
        //LOG(buff);
        return true;
    }

    ERROR("PX4API::ToggleOffBoard Couldn't toggle offboard control");
    return false;
}

/*
void PX4API::FollowTrajectory(vector< vector< float > > traj, int rounds, float eps){

    if( rounds <= 0 ){
        ERROR("FollowTrajectory: rounds must be nonnegative");
    }

    if( traj.size() <= 0 ){
        ERROR("FollowTrajectory: provide at least one way point");
        if( traj[0].size() != 3 ){
            ERROR("FollowTrajectory: waypoints must be 3d arrays");
        }
    }

    LOG("Command: Follow trajectory");

    int currentTarget = 0;
    int currentRound = 0;

    this->px4com->SetLocalPosition(traj[currentTarget][0],traj[currentTarget][1],traj[currentTarget][2]);

    while(true){
        if( this->CloseTo(traj[currentTarget][0],traj[currentTarget][1],traj[currentTarget][2],eps) ){
            currentTarget = currentTarget + 1;
            if(currentTarget >=  traj.size()){
                currentTarget = 0;
                currentRound = currentRound + 1;
                LOG("Round complete");
                if(currentRound >=  rounds){
                    return;
                }
            }
            this->px4com->SetLocalPosition(traj[currentTarget][0],traj[currentTarget][1],traj[currentTarget][2]);
        }
    }
}

void PX4API::Loiter(vector< float > center, float radius, int rounds, float eps, float loitStep){

    if( center.size() != 3 ){
        ERROR("Loiter: center must be 3d array");
    }

    char buf[100];
    sprintf(buf, "Loiter: center %f,%f,%f, radius %f", center[0],center[1],center[2],radius);
    LOG(buf);

    vector< vector<float> > waypoints;

    for(double angle=0; angle <= 2*M_PI; angle += loitStep){

        vector<float> waypoint;
        waypoint.push_back(center[0] + radius*cos(angle));
        waypoint.push_back(center[1] + radius*sin(angle));
        waypoint.push_back(center[2]);

        waypoints.push_back(waypoint);
    }

    this->FollowTrajectory(waypoints, rounds, eps);
}

void PX4API::Square(vector< float > corner, float edge, int rounds, float eps){

    if( corner.size() != 3 ){
        ERROR("Square: corner must be 3d array");
    }

    char buf[100];
    sprintf(buf, "Square: start %f,%f,%f, edge %f", corner[0],corner[1],corner[2],edge);
    LOG(buf);

    vector<float> loRight = corner;
    loRight[0] = corner[0] + edge;
    vector<float> upRight = loRight;
    upRight[1] = loRight[1] + edge;
    vector<float> upLeft = corner;
    upLeft[1] = corner[1] + edge;

    vector< vector<float> > waypoints;
    waypoints.push_back(corner);
    waypoints.push_back(loRight);
    waypoints.push_back(upRight);
    waypoints.push_back(upLeft);
    waypoints.push_back(corner);

    this->FollowTrajectory(waypoints,rounds,eps);

}

// Check if drone is eps-close to (x,y,x)
bool PX4API::CloseTo(float x, float y, float z, float eps){

    mavlink_local_position_ned_t currentLocalPosition = this->px4com->getLocalPosition();

    float dx = x - currentLocalPosition.x;
    float dy = y - currentLocalPosition.y;
    float dz = z - currentLocalPosition.z;
    float dist = sqrt( pow(dx,2) + pow(dy,2) + pow(dz,2) );

    return (dist < eps);
}
*/



