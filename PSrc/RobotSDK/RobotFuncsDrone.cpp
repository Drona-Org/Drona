/*
This file contains the Cpp modules used for connect the P program with ROS.
This includes all the foreign function implementations, state information about the robots,
and controller implementations.
*/

#include "../Applications/DroneExploration/MainDroneTaskPlanner.h"
#include "RobotFuncsDrone.h"
#include <math.h>
#include <unistd.h>
#include <cmath> 
#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <std_msgs/Empty.h>
#include <std_msgs/Bool.h>
#include <ros/console.h>
#include <nav_msgs/Odometry.h>
#include "geometry_msgs/Vector3.h"
#include "geometry_msgs/Quaternion.h"
#include "tf/transform_datatypes.h"
#include <tf/LinearMath/Matrix3x3.h>
#include "PlanGenerator.h"
#include "WorkspaceParser.h"
#include <cstring>
#include <map>
#include <stdlib.h> 
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

std::map<int, geometry_msgs::Twist> id_vel_msgs; 
std::map<int, ros::Publisher> id_vel_pubs;
std::map<int, ros::Subscriber> id_odom_subs;
std::map<int, float> id_robot_x; 
std::map<int, float> id_robot_y;
std::map<int, float> id_robot_z;  
std::map<int, float> id_robot_theta;
std::map<int, float> id_global_goal_x;
std::map<int, float> id_global_goal_y;
std::map<int, float> id_global_goal_z;
ros::Publisher pubTakeOff;
ros::Publisher pubLand;
ros::Publisher pubPosCtrl;

WorkspaceInfo *WSInfo;
OMPLPLanner* planner;
vector<vector<double> > currRobot1Plan;
int currRobot1_i;


WS_Coord GazeboToPlanner(WS_Coord coord) {
    return WS_Coord(coord.x + WS_Coord(0, 0, 0).x, coord.y + WS_Coord(0, 0, 0).y, coord.z + WS_Coord(0, 0, 0).z);
}

WS_Coord PlannerToGazebo(WS_Coord coord) {
    return WS_Coord(coord.x - WS_Coord(0, 0, 0).x, coord.y - WS_Coord(0, 0, 0).y, coord.z - WS_Coord(0, 0, 0).z);
}

void droneCallBack(const geometry_msgs::Pose::ConstPtr& odom_msg) {
    id_robot_x[1] = odom_msg->position.x;
    id_robot_y[1] = odom_msg->position.y;
    id_robot_z[1] = odom_msg->position.z;
    tf::Quaternion quat;
    tf::quaternionMsgToTF(odom_msg->orientation, quat);
    double roll, pitch, yaw;
    tf::Matrix3x3(quat).getRPY(roll, pitch, yaw);
    geometry_msgs::Vector3 rpy;
    rpy.x = roll;
    rpy.y = pitch;
    rpy.z = yaw;
    id_robot_theta[1] = yaw;
}

PRT_VALUE* P_ShutdownROSSubscribersDrone_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    PRT_VALUE** P_VAR_num_robots = argRefs[0];
    int num_robots = PrtPrimGetInt(*P_VAR_num_robots);
    
    ros::Rate loop_rate(10);
    int count = 0;
    while (count < 10) {
        pubLand.publish(std_msgs::Empty());
        ros::spinOnce();
        loop_rate.sleep();
        ++count;
    }
    
    return PrtMkIntValue((PRT_UINT32)1);
}

PRT_VALUE* P_RobotROSSetupDrone_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    std::srand(std::time(nullptr));

    PRT_VALUE** P_VAR_robot_id = argRefs[0];
    int robot_id = PrtPrimGetInt(*P_VAR_robot_id);

    ros::NodeHandle n;
    ros::Subscriber gazebo_odom_subscriber;
    ros::Publisher velocity_publisher;
    geometry_msgs::Twist vel_msg;

    pubTakeOff = n.advertise<std_msgs::Empty>("/drone/takeoff", 1024);

    ros::Rate loop_rate(10);
    int count = 0;
    while (count < 10) {
        pubTakeOff.publish(std_msgs::Empty());
        ros::spinOnce();
        loop_rate.sleep();
        ++count;
    }
    pubLand = n.advertise<std_msgs::Empty>("/drone/land",1024);
    ros::Publisher pubReset = n.advertise<std_msgs::Empty>("/drone/reset",1024);
    pubPosCtrl = n.advertise<std_msgs::Bool>("/drone/posctrl", 1024);
    ros::Publisher pubVelMode = n.advertise<std_msgs::Bool>("/drone/vel_mode",1024);

    velocity_publisher = n.advertise<geometry_msgs::Twist>("/cmd_vel",1024);
    gazebo_odom_subscriber = n.subscribe("drone/gt_pose", 1000000000, droneCallBack);


    id_vel_pubs[robot_id] = velocity_publisher;
    id_odom_subs[robot_id] = gazebo_odom_subscriber;
    id_vel_msgs[robot_id] = vel_msg;

    std_msgs::Bool bool_msg;
    bool_msg.data = 1;

    count = 0;
    while (count < 10) {
        pubPosCtrl.publish(bool_msg);
        ros::spinOnce();
        loop_rate.sleep();
        ++count;
    }

    id_robot_x[robot_id] = 0.0;
    id_robot_y[robot_id] = 0.0;
    id_robot_z[robot_id] = 0.0;
    
    return PrtMkIntValue((PRT_UINT32)1);
}

PRT_VALUE* P_OmplMotionPlanExternal_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    PRT_VALUE** P_VAR_destinations = argRefs[0];
    PRT_VALUE** P_VAR_robot_id = argRefs[1];
    int robot_id = PrtPrimGetInt(*P_VAR_robot_id);

    currRobot1Plan.clear();

    ros::NodeHandle n;
    ros::Subscriber gazebo_odom_subscriber;
    ros::Publisher velocity_publisher;
    gazebo_odom_subscriber = id_odom_subs[robot_id];
    velocity_publisher = id_vel_pubs[robot_id];

    double arrOfPoints[PrtSeqSizeOf(*P_VAR_destinations)][3];

    for (int i=0; i < (sizeof(arrOfPoints)/sizeof(*arrOfPoints)); i++) {
        double x = (*P_VAR_destinations)->valueUnion.seq->values[i]->valueUnion.tuple->values[0]->valueUnion.ft;
        double y = (*P_VAR_destinations)->valueUnion.seq->values[i]->valueUnion.tuple->values[1]->valueUnion.ft;
        double z = (*P_VAR_destinations)->valueUnion.seq->values[i]->valueUnion.tuple->values[2]->valueUnion.ft;

        arrOfPoints[i][0] = x;
        arrOfPoints[i][1] = y;
        arrOfPoints[i][2] = z;

        vector<double> v1;
        v1.push_back(x);
        v1.push_back(y);
        v1.push_back(z);

        currRobot1Plan.push_back(v1);
        printf("%f %f %f\n",x,y,z);
    }

    vector<WS_Coord> destinations;
    for (int i=0; i < PrtSeqSizeOf(*P_VAR_destinations); i++){
        destinations.push_back(WS_Coord(arrOfPoints[i][0], arrOfPoints[i][1], arrOfPoints[i][2]));
    }
    
    double arrOfPoints2[destinations.size()*2-2][3];
    int j = 0;

    for (int i = 0; i < destinations.size() - 1; i++) {
        WS_Coord gazToPlan = GazeboToPlanner(destinations.at(i));
        WS_Coord gazToPlan2 = GazeboToPlanner(destinations.at(i+1));
        vector<WS_Coord> path = planner->GeneratePlan(1, GazeboToPlanner(destinations.at(i)), GazeboToPlanner(destinations.at(i+1)));
        vector<WS_Coord> pathNew = path;

        for (int count = 0; count < pathNew.size(); count++)
        {
            WS_Coord shifted = PlannerToGazebo(pathNew.at(count));
            cout << shifted.ToString() << endl;
            double x = shifted.x;
            double y = shifted.y;
            double z = shifted.z;
            printf("%f %f %f\n",x,y,z);
            arrOfPoints2[j][0] = x;
            arrOfPoints2[j][1] = y;
            arrOfPoints2[j][2] = z;
            j++;
        }
    }

    PRT_VALUE* value = (PRT_VALUE*)PrtMalloc(sizeof(PRT_VALUE));
    PRT_TYPE* seqType = PrtMkSeqType(PrtMkPrimitiveType(PRT_KIND_FLOAT));
    value = PrtMkDefaultValue(seqType);

    for (int i = 0; i < j; i++) {
        PRT_TUPVALUE* tupPtr = (PRT_TUPVALUE*) PrtMalloc(sizeof(PRT_TUPVALUE));
        PRT_VALUE* value2 = (PRT_VALUE*)PrtMalloc(sizeof(PRT_VALUE));
        value2->discriminator = PRT_VALUE_KIND_TUPLE;
        value2->valueUnion.tuple = tupPtr;            
        tupPtr->size = 3;
        tupPtr->values = (PRT_VALUE**)PrtCalloc(3, sizeof(PRT_VALUE));

        for (int a = 0; a < 3; a++) {
            tupPtr->values[a] = PrtMkFloatValue(arrOfPoints2[i][a]);
        }

        PrtSeqInsert(value, PrtMkIntValue(i), value2);
    }

    return value;
}

PRT_VALUE* P_Sleep_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
	PRT_VALUE** P_VAR_time = argRefs[0];
	float secs = PrtPrimGetFloat(*P_VAR_time);
	usleep(secs*500000);
    return PrtMkIntValue((PRT_UINT32)1);
}

PRT_VALUE* P_getRobotLocationX_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    PRT_VALUE** P_VAR_robot_id = argRefs[0];
    int robot_id = PrtPrimGetInt(*P_VAR_robot_id);

    double robot_x_location = id_robot_x[robot_id];
    return PrtMkFloatValue(robot_x_location);
}

PRT_VALUE* P_getRobotLocationY_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    PRT_VALUE** P_VAR_robot_id = argRefs[0];
    int robot_id = PrtPrimGetInt(*P_VAR_robot_id);

    double robot_y_location = id_robot_y[robot_id];
    return PrtMkFloatValue(robot_y_location);
}

PRT_VALUE* P_getRobotLocationZ_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    PRT_VALUE** P_VAR_robot_id = argRefs[0];
    int robot_id = PrtPrimGetInt(*P_VAR_robot_id);

    double robot_z_location = id_robot_z[robot_id];
    return PrtMkFloatValue(robot_z_location);
}

PRT_VALUE* P_workspaceSetupDrone_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    WSInfo = ParseWorkspaceConfig("/home/sumukh/catkin_ws/src/Drona/PSrc/Applications/DroneExploration/Exp2.xml");
    planner = new OMPLPLanner("/home/sumukh/catkin_ws/src/Drona/PSrc/Applications/DroneExploration/Exp2.xml", PLANNER_RRTSTAR, OBJECTIVE_PATHLENGTH);
    return PrtMkIntValue((PRT_UINT32)WSInfo->robots.size());
}

float my_round(float var) {
    float value = (int)(var * 100 + .5); 
    return (float)value / 100; 
}

PRT_VALUE* P_decisionModuleDrone_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    struct PRT_VALUE* mainPRT = *(argRefs[0]);
    PRT_VALUE** P_VAR_robot_id = argRefs[1];
    int robot_id = PrtPrimGetInt(*P_VAR_robot_id);
    PRT_VALUE** P_VAR_delta = argRefs[2];
    int delta = PrtPrimGetInt(*P_VAR_delta);
    PRT_VALUE** P_VAR_curr_index = argRefs[3];
    int i = PrtPrimGetInt(*P_VAR_curr_index);
    int plan_size = mainPRT->valueUnion.seq->size;
    bool safe = true;
    int idx = 0;

    while (idx < delta) {
        if (i + idx < plan_size) {
            double x = mainPRT->valueUnion.seq->values[i+idx]->valueUnion.tuple->values[0]->valueUnion.ft;
            double y = mainPRT->valueUnion.seq->values[i+idx]->valueUnion.tuple->values[1]->valueUnion.ft;
            double z = mainPRT->valueUnion.seq->values[i+idx]->valueUnion.tuple->values[2]->valueUnion.ft;

            if ((x <= 0.2 && y >= 0.5 && y <= 4.5) || (x >= 4.8 && y >= 0.5 && y <= 4.5) || (y <= 0.2 && x >= 0.5 && x <= 4.5)|| (y >= 4.8 && x >= 0.5 && x <= 4.5)) {
                printf("Robot %d is exiting geofence: (%f, %f)\n", robot_id, x, y);
                safe = false;
            }
        }

        idx = idx + 1;
    }

    // double x = mainPRT->valueUnion.tuple->values[0]->valueUnion.ft;
    // double y = mainPRT->valueUnion.tuple->values[1]->valueUnion.ft;
    // double z = mainPRT->valueUnion.tuple->values[2]->valueUnion.ft;

    //TODO: CHANGE TO BE INSIDE THE CONTROLLERS
    // id_global_goal_x[robot_id] = x;
    // id_global_goal_y[robot_id] = y;
    // id_global_goal_z[robot_id] = z;
    
    // if ((x <= 0.3 && y >= 0.5 && y <= 4.5) || (x >= 4.7 && y >= 0.5 && y <= 4.5) || (y <= 0.3 && x >= 0.5 && x <= 4.5)|| (y >= 4.7 && x >= 0.5 && x <= 4.5)) {
    // // if (x <= -0.1 || x >= 10.1 || y <= -0.1|| y >= 10.1) {
    //     id_advancedLocation[robot_id] = false;
    //     printf("Robot %d is exiting geofence: (%f, %f)\n", robot_id, x, y);
    //     safe = false;
    // }

    if (!safe) {
        return PrtMkIntValue((PRT_UINT32)0);
    } else {
        return PrtMkIntValue((PRT_UINT32)1);
    }
}

PRT_VALUE* P_safeControllerDrone_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    struct PRT_VALUE* mainPRT = *(argRefs[0]);
    PRT_VALUE** P_VAR_robot_id = argRefs[1];
    int robot_id = PrtPrimGetInt(*P_VAR_robot_id);
    geometry_msgs::Twist vel_msg = id_vel_msgs[robot_id];
    
    ros::Rate loop_rate(1000000);
    usleep(500000);
    ros::spinOnce();

    while (((my_round(id_robot_x[robot_id])) != my_round(2.5)) || ((my_round(id_robot_y[robot_id])) != my_round(2.5))) {
        printf("INSIDE SAFE CONTROLLER\n");
        vel_msg.linear.x = 2.5;
        vel_msg.linear.y = 2.5;
        vel_msg.linear.z = 1.0;
        vel_msg.angular.x = 0;
        vel_msg.angular.y = 0;
        vel_msg.angular.z = 0;
        id_vel_pubs[robot_id].publish(vel_msg);

        ros::spinOnce();
        loop_rate.sleep();
        printf("curr x y z: %f, %f, %f\n", my_round(id_robot_x[robot_id]), my_round(id_robot_y[robot_id]), my_round(id_robot_z[robot_id]));
    }
    return PrtMkIntValue((PRT_UINT32)1);
}

PRT_VALUE* P_advancedControllerDrone_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    struct PRT_VALUE* mainPRT = *(argRefs[0]);
    PRT_VALUE** P_VAR_robot_id = argRefs[1];
    int robot_id = PrtPrimGetInt(*P_VAR_robot_id);

    geometry_msgs::Twist vel_msg = id_vel_msgs[robot_id];

    double x = mainPRT->valueUnion.tuple->values[0]->valueUnion.ft;
    double y = mainPRT->valueUnion.tuple->values[1]->valueUnion.ft;
    double z = mainPRT->valueUnion.tuple->values[2]->valueUnion.ft;

    printf("INSIDE ADVANCED CONTROLLER!!!!!!");
    ros::Rate loop_rate(1000000);
    usleep(500000);
    ros::spinOnce();

    while (((my_round(id_robot_x[robot_id])) != my_round(x)) || ((my_round(id_robot_y[robot_id])) != my_round(y))) {
        vel_msg.linear.x = x;
        vel_msg.linear.y = y;
        vel_msg.linear.z = z;
        vel_msg.angular.x = 0;
        vel_msg.angular.y = 0;
        vel_msg.angular.z = 0;

        id_vel_pubs[robot_id].publish(vel_msg);
        ros::spinOnce();
        loop_rate.sleep();

        printf("Goal:  %f, %f, %f\n", x, y, z);
        printf("Curr:  %f, %f, %f\n", id_robot_x[robot_id], id_robot_y[robot_id], id_robot_z[robot_id]);
        printf("Rounded Goal:  %f, %f, %f\n", my_round(x), my_round(y), my_round(z));
        printf("Rounded Curr:  %f, %f, %f\n", my_round(id_robot_x[robot_id]), my_round(id_robot_y[robot_id]), my_round(id_robot_z[robot_id]));
    }

    // vel_msg.linear.x = x;
    // vel_msg.linear.y = y;
    // vel_msg.linear.z = z;
    // vel_msg.angular.x = 0;
    // vel_msg.angular.y = 0;
    // vel_msg.angular.z = 0;

    // id_vel_pubs[robot_id].publish(vel_msg);
    // usleep(500000);
    return PrtMkIntValue((PRT_UINT32)1);
}
