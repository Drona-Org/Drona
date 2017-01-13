cmake_minimum_required(VERSION 3.0)
project(drona)

#SET(CMAKE_BUILD_TYPE Debug)
SET(CMAKE_VERBOSE_MAKEFILE true)

INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/includes/mavlink/common)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/includes/mavlink)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/Communication/includes)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/Logger/includes)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/PX4Driver/includes)

subdirs(Samples/TestCommunicationLib)
subdirs(Src/Lib/Logger)
subdirs(Src/Lib/Communication)
subdirs(Src/Lib/PX4Driver)


