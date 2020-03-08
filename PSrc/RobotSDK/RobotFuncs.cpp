#include "../SoftwareStack/MailDeliveryTaskPlanner.h"
#include "RobotFuncs.h"
#include <math.h>
#include <unistd.h>
#include <cmath> 
#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
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
std::map<int, float> id_robot_theta;
std::map<int, bool> id_advancedLocation; // rtaModuleID = 0
std::map<int, bool> id_advancedBattery;  // rtaModuleID = 1
bool collisionFree;                      // rtaModuleID = 2
std::map<int, int> id_currBatteryPercentage;
std::map<int, float> id_global_goal_x;
std::map<int, float> id_global_goal_y;


WS_Coord GazeboToPlanner(WS_Coord coord) {
    return WS_Coord(coord.x + WS_Coord(0, 0, 0).x, coord.y + WS_Coord(0, 0, 0).y, coord.z + WS_Coord(0, 0, 0).z);
}

WS_Coord PlannerToGazebo(WS_Coord coord) {
    return WS_Coord(coord.x - WS_Coord(0, 0, 0).x, coord.y - WS_Coord(0, 0, 0).y, coord.z - WS_Coord(0, 0, 0).z);
}

double getDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow((x2-x1), 2)+pow((y2-y1), 2));
}

void gazeboCallBack(const nav_msgs::Odometry::ConstPtr& odom_msg) {
    id_robot_x[1] = odom_msg->pose.pose.position.x;
    id_robot_y[1] = odom_msg->pose.pose.position.y;
    tf::Quaternion quat;
    tf::quaternionMsgToTF(odom_msg->pose.pose.orientation, quat);
    double roll, pitch, yaw;
    tf::Matrix3x3(quat).getRPY(roll, pitch, yaw);
    geometry_msgs::Vector3 rpy;
    rpy.x = roll;
    rpy.y = pitch;
    rpy.z = yaw;
    id_robot_theta[1] = yaw;
}

void gazeboCallBack2(const nav_msgs::Odometry::ConstPtr& odom_msg) {
    id_robot_x[2] = odom_msg->pose.pose.position.x;
    id_robot_y[2] = odom_msg->pose.pose.position.y;
    tf::Quaternion quat;
    tf::quaternionMsgToTF(odom_msg->pose.pose.orientation, quat);
    double roll, pitch, yaw;
    tf::Matrix3x3(quat).getRPY(roll, pitch, yaw);
    geometry_msgs::Vector3 rpy;
    rpy.x = roll;
    rpy.y = pitch;
    rpy.z = yaw; 
    id_robot_theta[2] = yaw;
}

void safe_controller(int robot_id) {
    geometry_msgs::Twist vel_msg = id_vel_msgs[robot_id];
    ros::Rate loop_rate(1000000);
    usleep(500000);
    ros::spinOnce();

    // Location Monitor: Collision Avoidance SC
    while (!collisionFree) {
        vel_msg.angular.x = 0;
        vel_msg.angular.z = 0;
        id_vel_pubs[robot_id].publish(vel_msg);
        ros::spinOnce();
        loop_rate.sleep();
        vel_msg.angular.z = 0;
        vel_msg.linear.x = -0.2;
        id_vel_pubs[robot_id].publish(vel_msg);
    }

    // Location Monitor: Geo Fence SC
    double safe_point_x = 1.5;
    double safe_point_y = 1.5;

    while (!id_advancedLocation[robot_id]) {
        printf("UNSAFE!!!!\n");
        while ((getDistance(safe_point_x, safe_point_y, id_robot_x[robot_id], id_robot_y[robot_id]) >= 0.1)) {
            if (id_advancedLocation[robot_id]) {
                printf("IM SAFE AGAIN!!!!\n");
                break;
            }

            double inc_x = safe_point_x - id_robot_x[robot_id];
            double inc_y = safe_point_y - id_robot_y[robot_id];
            double angle_to_goal = atan2(inc_y, inc_x);
            
            double tmp_linear_x = 0.2*getDistance(id_robot_x[robot_id], id_robot_y[robot_id], safe_point_x, safe_point_y);
            double tmp_angular_z = 1.0*std::abs((atan2(safe_point_y-id_robot_y[robot_id], safe_point_x - id_robot_x[robot_id])) - (id_robot_theta[robot_id]));
            
            if (tmp_linear_x < 0) {
                tmp_linear_x = max(-0.3, tmp_linear_x);
            } else {
                tmp_linear_x = min(0.3, tmp_linear_x);
            }
            
            if (tmp_angular_z < 0) {
                tmp_angular_z = max(-1.0, tmp_angular_z);
            } else {
                tmp_angular_z = min(1.0, tmp_angular_z);
            }

            vel_msg.linear.x = tmp_linear_x;
            vel_msg.linear.y = 0;
            vel_msg.linear.z = 0;
            vel_msg.angular.x = 0;
            vel_msg.angular.y = 0;
            vel_msg.angular.z = tmp_angular_z;

            id_vel_pubs[robot_id].publish(vel_msg);
            ros::spinOnce();
            loop_rate.sleep();
        }
        id_advancedBattery[robot_id] = true;
        id_currBatteryPercentage[robot_id] = 100;
    }

    // Battery Monitor SC
    std::map<int, float> id_charging_station_x; 
    std::map<int, float> id_charging_station_y;
    id_charging_station_x[1] = 1.0;
    id_charging_station_y[1] = 1.0;
    id_charging_station_x[2] = 2.0;
    id_charging_station_y[2] = 2.0;

    while (!id_advancedBattery[robot_id]) {
        while ((getDistance(id_charging_station_x[robot_id], id_charging_station_y[robot_id], id_robot_x[robot_id], id_robot_y[robot_id]) >= 0.1)) {
            double inc_x = id_charging_station_x[robot_id] - id_robot_x[robot_id];
            double inc_y = id_charging_station_y[robot_id] - id_robot_y[robot_id];
            double angle_to_goal = atan2(inc_y, inc_x);
            
            double tmp_linear_x = 0.2*getDistance(id_robot_x[robot_id], id_robot_y[robot_id], id_charging_station_x[robot_id], id_charging_station_y[robot_id]);
            double tmp_angular_z = 1.0*std::abs((atan2(id_charging_station_y[robot_id]-id_robot_y[robot_id], id_charging_station_x[robot_id] - id_robot_x[robot_id])) - (id_robot_theta[robot_id]));
            
            if (tmp_linear_x < 0) {
                tmp_linear_x = max(-0.3, tmp_linear_x);
            } else {
                tmp_linear_x = min(0.3, tmp_linear_x);
            }
            
            if (tmp_angular_z < 0) {
                tmp_angular_z = max(-1.0, tmp_angular_z);
            } else {
                tmp_angular_z = min(1.0, tmp_angular_z);
            }

            vel_msg.linear.x = tmp_linear_x;
            vel_msg.linear.y = 0;
            vel_msg.linear.z = 0;
            vel_msg.angular.x = 0;
            vel_msg.angular.y = 0;
            vel_msg.angular.z = tmp_angular_z;

            id_vel_pubs[robot_id].publish(vel_msg);
            ros::spinOnce();
            loop_rate.sleep();
        }
        id_advancedBattery[robot_id] = true;
        id_currBatteryPercentage[robot_id] = 100;
    }
}

void gazebo_move_goal(double goal_x, double goal_y, int robot_id) {
    ros::Publisher velocity_publisher;
    geometry_msgs::Twist vel_msg = id_vel_msgs[robot_id];
    ros::Rate loop_rate(1000000);
    usleep(500000);
    ros::spinOnce();
    velocity_publisher = id_vel_pubs[robot_id];

    while ((getDistance(goal_x, goal_y, id_robot_x[robot_id], id_robot_y[robot_id]) >= 0.1)) {
        
        // Checking if robot is in an unsafe state
        if (!id_advancedLocation[robot_id]) {
            safe_controller(robot_id);
            break;
        }
        if (!id_advancedBattery[robot_id]) {
            safe_controller(robot_id);
        }
        if (!collisionFree) {
            safe_controller(robot_id);
        }

        double inc_x = goal_x - id_robot_x[robot_id];
        double inc_y = goal_y - id_robot_y[robot_id];
        double angle_to_goal = atan2(inc_y, inc_x);
        
        double tmp_linear_x = 0.2*getDistance(id_robot_x[robot_id], id_robot_y[robot_id], goal_x, goal_y);
        double tmp_angular_z = 1.0*std::abs((atan2(goal_y-id_robot_y[robot_id], goal_x - id_robot_x[robot_id])) - (id_robot_theta[robot_id]));
        
        if (tmp_linear_x < 0) {
            tmp_linear_x = max(-0.3, tmp_linear_x);
        } else {
            tmp_linear_x = min(0.3, tmp_linear_x);
        }
        
        if (tmp_angular_z < 0) {
            tmp_angular_z = max(-1.0, tmp_angular_z);
        } else {
            tmp_angular_z = min(1.0, tmp_angular_z);
        }

        vel_msg.linear.x = tmp_linear_x;
        vel_msg.linear.y = 0;
        vel_msg.linear.z = 0;
        vel_msg.angular.x = 0;
        vel_msg.angular.y = 0;
        vel_msg.angular.z = tmp_angular_z;

        id_vel_pubs[robot_id].publish(vel_msg);
        ros::spinOnce();
        loop_rate.sleep();
    }    

    vel_msg.angular.x = 0;
    vel_msg.angular.z = 0;
    id_vel_pubs[robot_id].publish(vel_msg);
    ros::spinOnce();
    loop_rate.sleep();
    vel_msg.angular.z = 0;
    vel_msg.linear.x = 0;
    id_vel_pubs[robot_id].publish(vel_msg);
}

PRT_VALUE* P_switchACtoSC_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    PRT_VALUE** P_VAR_rtaModuleID = argRefs[0];
    PRT_VALUE** P_VAR_robotID = argRefs[1];
    int rtaModuleID = PrtPrimGetInt(*P_VAR_rtaModuleID);
    int robotID = PrtPrimGetInt(*P_VAR_robotID);

    if (rtaModuleID == 0) {
        id_advancedLocation[robotID] = false;
    } else if (rtaModuleID == 1) {
        id_advancedBattery[robotID] = false;
    } else if (rtaModuleID == 2) {
        collisionFree = false;
    }

    return PrtMkIntValue((PRT_UINT32)1);
}

PRT_VALUE* P_switchSCtoAC_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    PRT_VALUE** P_VAR_rtaModuleID = argRefs[0];
    PRT_VALUE** P_VAR_robotID = argRefs[1];
    int rtaModuleID = PrtPrimGetInt(*P_VAR_rtaModuleID);
    int robotID = PrtPrimGetInt(*P_VAR_robotID);
    
    if (rtaModuleID == 0) {
        id_advancedLocation[robotID] = true;
    } else if (rtaModuleID == 1) {
        id_advancedBattery[robotID] = true;
    } else if (rtaModuleID == 2) {
        collisionFree = true;
    }
    return PrtMkIntValue((PRT_UINT32)1);
}

PRT_VALUE* P_ShutdownROSSubscribers_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    PRT_VALUE** P_VAR_num_robots = argRefs[0];
    int num_robots = PrtPrimGetInt(*P_VAR_num_robots);
    for (int i = 0; i < num_robots; i++) {
        id_odom_subs[i+1].shutdown();
    }
    return PrtMkIntValue((PRT_UINT32)1);
}

PRT_VALUE* P_RobotROSSetup_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    std::srand(std::time(nullptr));

    PRT_VALUE** P_VAR_robot_id = argRefs[0];
    int robot_id = PrtPrimGetInt(*P_VAR_robot_id);
    char robot_id_string[32];

    sprintf(robot_id_string, "%d", robot_id);
    
    char sub_beginning[512] = "robot";
    char sub_ending[128] = "/odom";
    strcat(sub_beginning, robot_id_string);
    strcat(sub_beginning, sub_ending);

    char pub_beginning[512] = "robot";
    char pub_ending2[128] = "/cmd_vel";
    strcat(pub_beginning, robot_id_string);
    strcat(pub_beginning, pub_ending2);

    ros::NodeHandle n;
    ros::Subscriber gazebo_odom_subscriber;
    ros::Publisher velocity_publisher;
    geometry_msgs::Twist vel_msg;
    if (robot_id == 1) {
        gazebo_odom_subscriber = n.subscribe(sub_beginning, 1000000000, gazeboCallBack);
    } else {
        gazebo_odom_subscriber = n.subscribe(sub_beginning, 1000000000, gazeboCallBack2);
    }

    velocity_publisher = n.advertise<geometry_msgs::Twist>(pub_beginning, 1000000);
    id_vel_pubs[robot_id] = velocity_publisher;
    id_odom_subs[robot_id] = gazebo_odom_subscriber;
    id_vel_msgs[robot_id] = vel_msg;
    id_advancedLocation[robot_id] = true;
    id_advancedBattery[robot_id] = true;
    id_currBatteryPercentage[1] = 100;
    id_currBatteryPercentage[2] = 100;
    collisionFree = true;
    return PrtMkIntValue((PRT_UINT32)1);
}

PRT_VALUE* P_OmplMotionPlanExternal_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    PRT_VALUE** P_VAR_destinations = argRefs[0];
    PRT_VALUE** P_VAR_robot_id = argRefs[1];
    int robot_id = PrtPrimGetInt(*P_VAR_robot_id);

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
    }

    vector<WS_Coord> destinations;
    for (int i=0; i < PrtSeqSizeOf(*P_VAR_destinations); i++){
        destinations.push_back(WS_Coord(arrOfPoints[i][0], arrOfPoints[i][1], arrOfPoints[i][2]));
    }
    
    OMPLPLanner* planner = new OMPLPLanner("/home/sumukh/catkin_ws/src/Drona/PSrc/SoftwareStack/Exp1.xml", PLANNER_RRTSTAR, OBJECTIVE_PATHLENGTH);
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
    
    PRT_VALUE* mainPRT = (PRT_VALUE*)PrtMalloc(sizeof(PRT_VALUE));
	mainPRT->discriminator = (PRT_VALUE_KIND)2;
    PRT_SEQVALUE* motionplan = (PRT_SEQVALUE*)PrtMalloc(sizeof(PRT_SEQVALUE));
	mainPRT->valueUnion.seq = motionplan;

	motionplan->size = j;
	motionplan->capacity = (PRT_UINT32)100;
	PRT_VALUE** tupArray = (PRT_VALUE**)PrtMalloc(sizeof(PRT_VALUE*) * motionplan->size);
	motionplan->values = tupArray;

	for (int i = 0; i < motionplan->size; i++) {
		*(tupArray+i) = (PRT_VALUE*)PrtMalloc(sizeof(PRT_VALUE));
		(*(tupArray+i))->discriminator = PRT_VALUE_KIND_TUPLE;
		PRT_TUPVALUE* tuple = (PRT_TUPVALUE*)PrtMalloc(sizeof(PRT_TUPVALUE));
		(*(tupArray+i))->valueUnion.tuple = tuple;

		tuple->size = 3;
		PRT_VALUE** floatArray = (PRT_VALUE**)PrtMalloc(sizeof(PRT_VALUE*) * 3);
		tuple->values = floatArray;

		for (int j = 0; j < 3; j++) {
			*(floatArray+j) = (PRT_VALUE*)PrtMalloc(sizeof(PRT_VALUE));
			(*(floatArray+j))->discriminator = PRT_VALUE_KIND_FLOAT;
			(*(floatArray+j))->valueUnion.ft = arrOfPoints2[i][j];
		}
	}
    return mainPRT;
}

PRT_VALUE* P_ROSGoTo_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    struct PRT_VALUE* mainPRT = *(argRefs[0]);
    PRT_VALUE** P_VAR_robot_id = argRefs[1];
    int robot_id = PrtPrimGetInt(*P_VAR_robot_id);

    ros::NodeHandle n;
    ros::Subscriber gazebo_odom_subscriber;
    ros::Publisher velocity_publisher;
    gazebo_odom_subscriber = id_odom_subs[robot_id];
    velocity_publisher = id_vel_pubs[robot_id];

	double destinationPoints[mainPRT->valueUnion.seq->size][3];
	double prev_x = -10.0;
    double prev_y = -10.0;
    double prev_z = -10.0;

	for (int i = 0; i < mainPRT->valueUnion.seq->size; i++) {
		double x = mainPRT->valueUnion.seq->values[i]->valueUnion.tuple->values[0]->valueUnion.ft;
        double y = mainPRT->valueUnion.seq->values[i]->valueUnion.tuple->values[1]->valueUnion.ft;
        double z = mainPRT->valueUnion.seq->values[i]->valueUnion.tuple->values[2]->valueUnion.ft;
		destinationPoints[i][0] = x;
        destinationPoints[i][1] = y;
        destinationPoints[i][2] = z;
        if ((x != prev_x) && (y != prev_y) && (z != prev_z)) {
            printf("%f, %f, %f\n", x,y,z);
            id_global_goal_x[robot_id] = x;
            id_global_goal_y[robot_id] = y;
            gazebo_move_goal(x, y, robot_id);
        }

        prev_x = x;
        prev_y = y;
        prev_z = z;
	}
    return PrtMkIntValue((PRT_UINT32)1);
}

PRT_VALUE* P_Sleep_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
	PRT_VALUE** P_VAR_time = argRefs[0];
	float secs = PrtPrimGetFloat(*P_VAR_time);
	usleep(secs*500000);
    return PrtMkIntValue((PRT_UINT32)1);
}

PRT_VALUE* P_MonitorLocation_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
	PRT_VALUE** P_VAR_robotId = argRefs[0];
    int robot_id = PrtPrimGetInt(*P_VAR_robotId);
    usleep(500000);
    ros::spinOnce();
    
    printf("Robot1 GOAL: (%f, %f)\n", id_global_goal_x[1], id_global_goal_y[1]);
    printf("Robot2 GOAL: (%f, %f)\n", id_global_goal_x[2], id_global_goal_y[2]);

    // GEOFENCE DECISION MODULE
    if (id_robot_x[robot_id] <= 0.5 || id_robot_x[robot_id] >= 2.5 || id_robot_y[robot_id] <= 0.5|| id_robot_y[robot_id] >= 2.5) {
        return PrtMkIntValue((PRT_UINT32)0);
    } else {
        return PrtMkIntValue((PRT_UINT32)1);
    }
}

PRT_VALUE* P_collisionSafe_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    usleep(500000);
    ros::spinOnce();

    // COLLISION AVOIDANCE DECISION MODULE
    double robotDistance = getDistance(id_robot_x[1], id_robot_y[1], id_robot_x[2], id_robot_y[2]);

    if (robotDistance <= 0.25) {
        return PrtMkIntValue((PRT_UINT32)0);
    }

    if (robotDistance > 0.25) {
        return PrtMkIntValue((PRT_UINT32)1);
    }
}

PRT_VALUE* P_getCurrentPercentage_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    PRT_VALUE** P_VAR_robot_id = argRefs[0];
    int robot_id = PrtPrimGetInt(*P_VAR_robot_id);
    id_currBatteryPercentage[robot_id] = id_currBatteryPercentage[robot_id] - 1;
    return PrtMkIntValue((PRT_UINT32)id_currBatteryPercentage[robot_id]);
}

PRT_VALUE* P_randomFloat_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    PRT_VALUE** P_VAR_robot_id = argRefs[0];
    int randomNumber = (rand() % 4);
    return PrtMkFloatValue(randomNumber);
}