cmake_minimum_required(VERSION 3.0)
project(drona)

#include the cmake functions and macros
include(CMakeFunAndMacros.txt)

## Projects
subdirs(Src/TestProjects)
subdirs(Src/Lib)
subdirs(Src/Experiments)
subdirs(Submodule/OMPL)

#Global Include Directories
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Includes/MavlinkHeaders/common)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Includes/MavlinkHeaders)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Includes/PMavlinkHeaders)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/Communication/Includes)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/Logger/Includes)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/PX4Driver/Includes)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/PX4Driver/Generated)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/PFloat32/Src)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/PFloat32/Generated)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/GazeboWorldGenerator/Includes)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/STLMonitor/Includes)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/WorkspaceParser/Includes)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/STLLib/Includes)

