cmake_minimum_required(VERSION 3.0)
project(drona)

#include the helper functions and decls
include(HelperScripts/CMakeLists.txt)


#include Src directory
subdirs(Src)
subdirs(Submodule/OMPL)

##########################################################################
# Common header files used across project
##########################################################################

INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Includes/MavlinkHeaders/common)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Includes/MavlinkHeaders)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Includes/PMavlinkHeaders)
INCLUDE_DIRECTORIES(${dronaSrcLibDriversCommunicationDriver_SOURCE_DIR}/Includes)
INCLUDE_DIRECTORIES(${dronaSrcLibLoggersConsoleLogger_SOURCE_DIR}/Includes)
INCLUDE_DIRECTORIES(${dronaSrcLibWorkSpaceRelatedWorkspaceParser_SOURCE_DIR}/Includes)
INCLUDE_DIRECTORIES(${dronaSrcLibDriversPX4Driver_SOURCE_DIR}/Includes)
INCLUDE_DIRECTORIES(${dronaSrcLibDriversPX4Driver_SOURCE_DIR}/PGenerated)
INCLUDE_DIRECTORIES(${P_LIB_INCLUDE_PATH})
