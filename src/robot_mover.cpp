#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <ros/console.h>
#include "api.h"

void api_move(double speed, double distance, bool isForward);
void api_rotate(double angular_speed, double angle, bool clockwise);

ros::Publisher velocity_publisher;

int main(int argc, char **argv) {
    ros::init(argc, argv, "updated_robot_mover_node");
    ros::NodeHandle n;
    velocity_publisher = n.advertise<geometry_msgs::Twist>("turtle1/cmd_vel", 100);
        
    api_move(5, 5, true);
    api_rotate(1, 1.5608, false);
    api_move(5, 5, true);
    api_rotate(1, 1.5608, false);
    api_move(5, 5, true);
    api_rotate(1, 1.5608, false);
    api_move(5, 5, true);
    api_rotate(1, 1.5608, true);

}

void api_move(double speed, double distance, bool isForward) {
    geometry_msgs::Twist vel_msg;

    if (isForward) {
        vel_msg.linear.x = abs(speed);
    } else {
        vel_msg.linear.x = -abs(speed);
    }

    vel_msg.linear.y = 0;
    vel_msg.linear.z = 0;

    vel_msg.angular.x = 0;
    vel_msg.angular.y = 0;
    vel_msg.angular.z = 0;

    double t0 = ros::Time::now().toSec();
    double current_distance = 0;
    ros::Rate loop_rate(100);

    while(current_distance < distance) {
        velocity_publisher.publish(vel_msg);
        double t1 = ros::Time::now().toSec();
        current_distance = speed*(t1 - t0);
        ros::spinOnce();
        loop_rate.sleep();
    }

    vel_msg.linear.x = 0;
    velocity_publisher.publish(vel_msg);

}

void api_rotate(double angular_speed, double angle, bool clockwise) {
    geometry_msgs::Twist vel_msg;
    vel_msg.linear.x = 0;
    vel_msg.linear.y = 0;
    vel_msg.linear.z = 0;

    vel_msg.angular.x = 0;
    vel_msg.angular.y = 0;

    if (clockwise) {
        vel_msg.angular.z = -abs(angular_speed);
    } else {
        vel_msg.angular.z = abs(angular_speed);
    }

    double t0 = ros::Time::now().toSec();
    double current_angle = 0.0;
    ros::Rate loop_rate(100);

    while (current_angle < angle) {
        velocity_publisher.publish(vel_msg);
        double t1 = ros::Time::now().toSec();
        current_angle = angular_speed*(t1-t0);
        ros::spinOnce();
        loop_rate.sleep();
    }

    vel_msg.angular.z = 0;
    velocity_publisher.publish(vel_msg);
}