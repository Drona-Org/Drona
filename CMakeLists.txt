cmake_minimum_required(VERSION 3.0)
project(drona)

#SET(CMAKE_BUILD_TYPE Debug)
SET(CMAKE_VERBOSE_MAKEFILE true)

INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Includes/MavlinkHeaders/common)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Includes/MavlinkHeaders)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/Communication/Includes)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/Logger/Includes)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/PX4Driver/Includes)

subdirs(Samples/TestCommunicationLib)
subdirs(Src/Lib/Logger)
subdirs(Src/Lib/Communication)
subdirs(Src/Lib/PX4Driver)


include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
        message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()
