/*
This file contains the Cpp modules used for connect the P program with ROS.
This includes all the foreign function implementations, state information about the robots,
and controller implementations.
*/

#include "../Applications/MainRobotSurveillanceTaskPlanner.h"
#include "../Applications/MainDroneTaskPlanner.h"
#include "RobotFuncs.h"
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
std::map<int, float> id_robot_velocity_linear;
std::map<int, float> id_robot_velocity_theta;
std::map<int, bool> id_advancedLocation; // rtaModuleID = 0
std::map<int, bool> id_advancedBattery;  // rtaModuleID = 1
bool collisionFree;                      // rtaModuleID = 2
std::map<int, int> id_currBatteryPercentage;
std::map<int, float> id_global_goal_x;
std::map<int, float> id_global_goal_y;
std::map<int, float> id_global_goal_z;
std::map<int, float> id_charging_station_x; 
std::map<int, float> id_charging_station_y;
ros::Publisher pubTakeOff;
ros::Publisher pubLand;
ros::Publisher pubPosCtrl;

WorkspaceInfo *WSInfo;
OMPLPLanner* planner;

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

void safe_battery_move_to_goal(int robot_id, double goal_x, double goal_y) {
    geometry_msgs::Twist vel_msg = id_vel_msgs[robot_id];
    ros::Rate loop_rate(1000000);
    usleep(500000);
    ros::spinOnce();

    while ((getDistance(goal_x, goal_y, id_robot_x[robot_id], id_robot_y[robot_id]) >= 0.1)) {
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
        // if (!id_advancedLocation[robot_id]) {
        //     safe_controller(robot_id);
        //     break;
        // }
        // if (!id_advancedBattery[robot_id]) {
        //     safe_controller(robot_id);
        // }
        // if (!collisionFree) {
        //     safe_controller(robot_id);
        // }

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
            tmp_angular_z = max(-2.0, tmp_angular_z);
        } else {
            tmp_angular_z = min(2.0, tmp_angular_z);
        }

        vel_msg.linear.x = tmp_linear_x;
        id_robot_velocity_linear[robot_id] = tmp_linear_x;
        id_robot_velocity_theta[robot_id] = tmp_angular_z;
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

void safe_controller(float x, float y, int robot_id) {
    geometry_msgs::Twist vel_msg = id_vel_msgs[robot_id];
    ros::Rate loop_rate(1000000);
    usleep(500000);
    ros::spinOnce();

    // Location Monitor: Collision Avoidance SC
    while (!collisionFree) {
        // while (getDistance(id_robot_x[1], id_robot_y[1], id_robot_x[2], id_robot_y[2]) <= 0.5) {
        //     vel_msg.angular.x = 0;
        //     vel_msg.angular.z = 0;
        //     id_vel_pubs[robot_id].publish(vel_msg);
        //     ros::spinOnce();
        //     loop_rate.sleep();
        //     vel_msg.angular.z = 0;
        //     vel_msg.linear.x = -0.3;
        //     id_vel_pubs[robot_id].publish(vel_msg);
        //     usleep(1000000);
        // }

        // Collision avoidance pausing 
        if (robot_id == 1) {
            printf("SLEEPING\n");
            vel_msg.angular.x = 0;
            vel_msg.angular.z = 0;
            id_vel_pubs[robot_id].publish(vel_msg);
            ros::spinOnce();
            loop_rate.sleep();
            vel_msg.angular.z = 0;
            vel_msg.linear.x = -0.3;
            id_vel_pubs[robot_id].publish(vel_msg);
            
            vel_msg.angular.x = 0;
            vel_msg.angular.z = 0;
            id_vel_pubs[robot_id].publish(vel_msg);
            ros::spinOnce();
            loop_rate.sleep();
            vel_msg.angular.z = 0;
            vel_msg.linear.x = 0;
            id_vel_pubs[robot_id].publish(vel_msg);
            usleep(14000000);
            printf("DONE SLEEPING\n");
        }

        if (robot_id == 2) {
            printf("SLEEPINGONLY A LITTLE\n");
            vel_msg.angular.x = 0;
            vel_msg.angular.z = 0;
            id_vel_pubs[robot_id].publish(vel_msg);
            ros::spinOnce();
            loop_rate.sleep();
            vel_msg.angular.z = 0;
            vel_msg.linear.x = -0.3;
            id_vel_pubs[robot_id].publish(vel_msg);
            
            vel_msg.angular.x = 0;
            vel_msg.angular.z = 0;
            id_vel_pubs[robot_id].publish(vel_msg);
            ros::spinOnce();
            loop_rate.sleep();
            vel_msg.angular.z = 0;
            vel_msg.linear.x = 0;
            id_vel_pubs[robot_id].publish(vel_msg);
            usleep(7000000);
            printf("DONE SLEEPING\n");
        }
        gazebo_move_goal(x, y, robot_id);
        collisionFree = true;
    }
    
    // Location Monitor: Geo Fence SC
    while (!id_advancedLocation[robot_id]) {
        // while (!(((id_robot_x[robot_id] >= 0.5 && id_robot_x[robot_id] <= 4.5)) && (id_robot_y[robot_id] >= 0.5 && id_robot_y[robot_id] <= 4.5))) {
        //     vel_msg.angular.x = 0; 
        //     vel_msg.angular.z = 0;
        //     id_vel_pubs[robot_id].publish(vel_msg);
        //     ros::spinOnce();
        //     loop_rate.sleep();
        //     usleep(1500000);
        //     vel_msg.angular.z = 0;
        //     vel_msg.linear.x = -0.1;
        //     id_vel_pubs[robot_id].publish(vel_msg);
        //     ros::spinOnce();
        //     loop_rate.sleep();
        // }
        printf("OK IM SAFE");
        id_advancedLocation[robot_id] = true;
    }

    // Battery Monitor SC
    while (!id_advancedBattery[robot_id]) {
        WS_Coord current_location = WS_Coord(id_robot_x[robot_id], id_robot_y[robot_id], 0.0);
        WS_Coord charging_station = WS_Coord(id_charging_station_x[robot_id], id_charging_station_y[robot_id], 0.0);
        vector<WS_Coord> path = planner->GeneratePlan(1, GazeboToPlanner(current_location), GazeboToPlanner(charging_station));
        vector<WS_Coord> pathNew = path;

        // Using way points to get to the charging station
        // for (int count = 0; count < pathNew.size(); count++) {
        //     WS_Coord shifted = PlannerToGazebo(pathNew.at(count));
        //     double x = shifted.x;
        //     double y = shifted.y;
        //     double z = shifted.z;
        //     printf("%f %f %f\n",x,y,z);
        //     safe_battery_move_to_goal(robot_id, x, y);
        // }

        // Going directly to the charging station
        while (getDistance(id_charging_station_x[robot_id], id_charging_station_y[robot_id], id_robot_x[robot_id], id_robot_y[robot_id]) >= 0.1) {
            double inc_x = id_charging_station_x[robot_id] - id_robot_x[robot_id];
            double inc_y = id_charging_station_y[robot_id] - id_robot_y[robot_id];
            double angle_to_goal = atan2(inc_y, inc_x);
            
            double tmp_linear_x = 0.2*getDistance(id_robot_x[robot_id], id_robot_y[robot_id], id_charging_station_x[robot_id], id_charging_station_y[robot_id]);
            double tmp_angular_z = 1.0*std::abs((atan2(id_charging_station_y[robot_id]-id_robot_y[robot_id], (id_charging_station_x[robot_id] - id_robot_x[robot_id])) - (id_robot_theta[robot_id])));
            
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
            id_robot_velocity_linear[robot_id] = tmp_linear_x;
            id_robot_velocity_theta[robot_id] = tmp_angular_z;
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

        id_advancedBattery[robot_id] = true;
        id_currBatteryPercentage[robot_id] = 100;
    }
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
    PRT_VALUE** P_VAR_experiment_id = argRefs[1];
    int experiment_id = PrtPrimGetInt(*P_VAR_experiment_id);

    if (experiment_id == 1) {
        for (int i = 0; i < num_robots; i++) {
            id_odom_subs[i+1].shutdown();
        }
    }

    if (experiment_id == 2) {
        ros::Rate loop_rate(10);
        int count = 0;
        while (count < 10) {
            pubLand.publish(std_msgs::Empty());
            ros::spinOnce();
            loop_rate.sleep();
            ++count;
        }
    }
    return PrtMkIntValue((PRT_UINT32)1);
}

PRT_VALUE* P_RobotROSSetup_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    std::srand(std::time(nullptr));

    PRT_VALUE** P_VAR_robot_id = argRefs[0];
    int robot_id = PrtPrimGetInt(*P_VAR_robot_id);

    PRT_VALUE** P_VAR_experiment_id = argRefs[1];
    int experiment_id = PrtPrimGetInt(*P_VAR_experiment_id);

    printf("EXPERIMENT ID!!!!!!!!: %d\n", experiment_id);

    if (experiment_id == 1) {
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

        if (robot_id == 1) {
            id_robot_x[robot_id] = 1.0;
            id_robot_y[robot_id] = 1.0;
        }

        if (robot_id == 2) {
            id_robot_x[robot_id] = 2.0;
            id_robot_y[robot_id] = 2.0;
        }
    }

    if (experiment_id == 2) {
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
        id_advancedLocation[robot_id] = true;

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
    }
    
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

	for (int i = 0; i < mainPRT->valueUnion.seq->size; i++) {
		double x = mainPRT->valueUnion.seq->values[i]->valueUnion.tuple->values[0]->valueUnion.ft;
        double y = mainPRT->valueUnion.seq->values[i]->valueUnion.tuple->values[1]->valueUnion.ft;
        double z = mainPRT->valueUnion.seq->values[i]->valueUnion.tuple->values[2]->valueUnion.ft;
		destinationPoints[i][0] = x;
        destinationPoints[i][1] = y;
        destinationPoints[i][2] = z;
        printf("%f, %f, %f\n", x,y,z);
        id_global_goal_x[robot_id] = x;
        id_global_goal_y[robot_id] = y;
        gazebo_move_goal(x, y, robot_id);

	}
    return PrtMkIntValue((PRT_UINT32)1);
}

bool pointInObstacle(double my_x, double my_y, double obs_low_x, double obs_low_y, double obs_high_x, double obs_high_y) {
    if ((my_x >= obs_low_x) && (my_x <= obs_high_x) && (my_y >= obs_low_y) && (my_y <= obs_high_y)) {
        return true;
    } else {
        return false;
    }

}
PRT_VALUE* P_randomLocation_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    srand(time(NULL));
    float random_x = (float) (rand() % (int)round(WSInfo->dimension.x_dim));
    float random_y = (float) (rand() % (int)round(WSInfo->dimension.y_dim));
    bool found = false;
    int obs_free_count = 0;

    while(!found) {
        for (int i=0; i < WSInfo->obstacles.size(); i++) {
            WS_Box my_obs = WSInfo->obstacles.at(i);
            if (pointInObstacle(random_x, random_y, my_obs.low.x, my_obs.low.y, my_obs.high.x, my_obs.high.y)) {
                found = false;
                random_x = (float) (rand() % 6);
                random_y = (float) (rand() % 6);
                obs_free_count = 0;
                break;
            } else {
                obs_free_count += 1;
            }
        }

        if (obs_free_count == WSInfo->obstacles.size()) {
            found = true;
        }
    }
    
    PRT_TUPVALUE* tupPtr = (PRT_TUPVALUE*) PrtMalloc(sizeof(PRT_TUPVALUE));
    PRT_VALUE* value2 = (PRT_VALUE*)PrtMalloc(sizeof(PRT_VALUE));
    value2->discriminator = PRT_VALUE_KIND_TUPLE;
    value2->valueUnion.tuple = tupPtr;            
    tupPtr->size = 3;
    tupPtr->values = (PRT_VALUE**)PrtCalloc(3, sizeof(PRT_VALUE));

    tupPtr->values[0] = PrtMkFloatValue(random_x);
    tupPtr->values[1] = PrtMkFloatValue(random_y);
    tupPtr->values[2] = PrtMkFloatValue(0.0);

    return value2;

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
    
    printf("Robot %d Location: (%f, %f)\n", robot_id, id_robot_x[robot_id], id_robot_y[robot_id]);

    // GEOFENCE DECISION MODULE
    if (id_robot_x[robot_id]-(0.3*0.5) <= 0 || id_robot_x[robot_id]+(0.3*0.5) >= 5.0 || id_robot_y[robot_id]-(0.3*0.5) <= 0|| id_robot_y[robot_id]+(0.3*0.5) >= 5.0) {
        printf("Robot %d UNSAFE\n", robot_id);
        return PrtMkIntValue((PRT_UINT32)0);
    } else {
        printf("Robot %d SAFE\n", robot_id);
        return PrtMkIntValue((PRT_UINT32)1);
    }
}

PRT_VALUE* P_collisionSafe_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    usleep(500000);
    ros::spinOnce();

    // COLLISION AVOIDANCE DECISION MODULE
    double robotDistance = getDistance(id_robot_x[1]+(id_robot_velocity_linear[1]*0.5), id_robot_y[1]+(id_robot_velocity_linear[1]*0.5), id_robot_x[2]+(id_robot_velocity_linear[1]*0.5), id_robot_y[2]+(id_robot_velocity_linear[1]*0.5));
    if (robotDistance <= 0.25) {
        printf("Robot UNSAFE\n");
        return PrtMkIntValue((PRT_UINT32)0);
    }

    if (robotDistance > 0.25) {
        printf("Robot SAFE\n");
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
    int randomNumber = (rand() % 6);
    return PrtMkFloatValue(randomNumber);
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

PRT_VALUE* P_workspaceSetup_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    PRT_VALUE** P_VAR_experiment_id = argRefs[0];
    int experiment_id = PrtPrimGetInt(*P_VAR_experiment_id);

    if (experiment_id == 1) {
        WSInfo = ParseWorkspaceConfig("/home/sumukh/catkin_ws/src/Drona/PSrc/SoftwareStack/Exp1.xml");
        planner = new OMPLPLanner("/home/sumukh/catkin_ws/src/Drona/PSrc/SoftwareStack/Exp1.xml", PLANNER_RRTSTAR, OBJECTIVE_PATHLENGTH);

        id_charging_station_x[1] = (double) WSInfo->charging_stations.at(0).low.x;
        id_charging_station_y[1] = (double) WSInfo->charging_stations.at(0).low.y;
        id_charging_station_x[2] = (double) WSInfo->charging_stations.at(1).low.x;
        id_charging_station_y[2] = (double) WSInfo->charging_stations.at(1).low.y;
    }

    if (experiment_id == 2) {
        WSInfo = ParseWorkspaceConfig("/home/sumukh/catkin_ws/src/Drona/PSrc/SoftwareStack/Exp2.xml");
        planner = new OMPLPLanner("/home/sumukh/catkin_ws/src/Drona/PSrc/SoftwareStack/Exp2.xml", PLANNER_RRTSTAR, OBJECTIVE_PATHLENGTH);
    }
    return PrtMkIntValue((PRT_UINT32)WSInfo->robots.size());
}

float my_round(float var) {
    float value = (int)(var * 100 + .5); 
    return (float)value / 100; 
} 

PRT_VALUE* P_decisionModule_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    struct PRT_VALUE* mainPRT = *(argRefs[0]);
    PRT_VALUE** P_VAR_robot_id = argRefs[1];
    int robot_id = PrtPrimGetInt(*P_VAR_robot_id);

    bool safe = true;

    double x = mainPRT->valueUnion.tuple->values[0]->valueUnion.ft;
    double y = mainPRT->valueUnion.tuple->values[1]->valueUnion.ft;
    double z = mainPRT->valueUnion.tuple->values[2]->valueUnion.ft;

    printf("ROBOT ID: %d\n", robot_id);
    printf("MY X Y Z: %f %f %f\n", x, y, z);
    printf("Robot %d: Battery - %d\n", robot_id, id_currBatteryPercentage[robot_id]);

    
    id_global_goal_x[robot_id] = x;
    id_global_goal_y[robot_id] = y;


    if (id_currBatteryPercentage[robot_id] < 20) {
        id_advancedBattery[robot_id] = false;
        printf("Robot %d: Low Battery - %f\n", robot_id, id_currBatteryPercentage[robot_id]);
        safe = false;
    }
    if (x <= 0 || x >= 5.0 || y <= 0|| y >= 5.0) {
        id_advancedLocation[robot_id] = false;
        printf("Robot %d is exiting geofence: (%f, %f)\n", robot_id, x, y);
        safe = false;
    }
    if ((id_global_goal_x[1] == id_global_goal_x[2]) && (id_global_goal_y[1] == id_global_goal_y[2])) {
        collisionFree = false;
        safe = false;
    }

    if (!safe) {
        return PrtMkIntValue((PRT_UINT32)0);
    } else {
        return PrtMkIntValue((PRT_UINT32)1);
    }
}

PRT_VALUE* P_advancedController_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    struct PRT_VALUE* mainPRT = *(argRefs[0]);
    PRT_VALUE** P_VAR_robot_id = argRefs[1];
    int robot_id = PrtPrimGetInt(*P_VAR_robot_id);

    ros::NodeHandle n;
    ros::Subscriber gazebo_odom_subscriber;
    ros::Publisher velocity_publisher;
    gazebo_odom_subscriber = id_odom_subs[robot_id];
    velocity_publisher = id_vel_pubs[robot_id];


    double x = mainPRT->valueUnion.tuple->values[0]->valueUnion.ft;
    double y = mainPRT->valueUnion.tuple->values[1]->valueUnion.ft;
    double z = mainPRT->valueUnion.tuple->values[2]->valueUnion.ft;
    printf("%f, %f, %f\n", x,y,z);
    gazebo_move_goal(x, y, robot_id);

    return PrtMkIntValue((PRT_UINT32)1);
}

PRT_VALUE* P_safeController_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs) {
    struct PRT_VALUE* mainPRT = *(argRefs[0]);
    PRT_VALUE** P_VAR_robot_id = argRefs[1];
    int robot_id = PrtPrimGetInt(*P_VAR_robot_id);

    ros::NodeHandle n;
    ros::Subscriber gazebo_odom_subscriber;
    ros::Publisher velocity_publisher;
    gazebo_odom_subscriber = id_odom_subs[robot_id];
    velocity_publisher = id_vel_pubs[robot_id];
    double x = mainPRT->valueUnion.tuple->values[0]->valueUnion.ft;
    double y = mainPRT->valueUnion.tuple->values[1]->valueUnion.ft;
    double z = mainPRT->valueUnion.tuple->values[2]->valueUnion.ft;

    safe_controller(x, y, robot_id);

    return PrtMkIntValue((PRT_UINT32)1);
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
                id_advancedLocation[robot_id] = false;
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
        printf("INSIDE SAFE CONTROLLER!!!!!!");
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