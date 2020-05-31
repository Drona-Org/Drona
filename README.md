# Drona

## Setup
- Install ROS and create a catkin workspace for your ROS packages: http://wiki.ros.org/catkin/Tutorials/create_a_workspace
- Clone the `multi_robot` ROS package into the `src` directory of your `catkin_ws`. 
    - `cd ~/catkin_ws/src`
    - `git clone git@github.com:sumukhshiv/multi_robot.git`
- Clone this Drona branch (`Drona-ROS`)  into the `src` directory
    - `git clone --single-branch --branch Drona-ROS git@github.com:Drona-Org/Drona.git`
- Initialize the P submodule
    - `git submodule init`
- To run the Drona ROS Sample run the following commands:
    - New terminal window: 
    ```
        roscore
    ```
    - New terminal window
    ``` 
        cd ~/catkin_ws
        catkin_make
        . devel/setup.sh
        roslaunch multi_robot main.launch
    ```
    - New terminal window
    ``` 
        cd ~/catkin_ws/src/Drona/PSrc
        pc *.p
    ```
    - New Terminal Window
    ``` 
        cd ~/catkin_ws
        catkin_make
        . devel/setup.sh
        rosrun Drona drona_test
    ```