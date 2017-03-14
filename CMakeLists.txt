cmake_minimum_required(VERSION 3.0)
project(drona)


include(CMakeFunAndMacros.txt)

INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Includes/MavlinkHeaders/common)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Includes/MavlinkHeaders)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Includes/PMavlinkHeaders)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/Communication/Includes)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/Logger/Includes)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/PX4Driver/Includes)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/PX4Driver/Generated)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/PFloat32/Src)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/PFloat32/Generated)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/World/Includes)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/Breach/Includes)

## Projects
subdirs(Src/TestProjects)
subdirs(Src/Lib)



