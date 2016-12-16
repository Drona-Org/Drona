cmake_minimum_required(VERSION 3.0)
project(CommunicationTest)

# Search .cpp in ./src
file(GLOB_RECURSE sources src/*.cpp)
FILE(GLOB_RECURSE includes include/*.h /home/ankush/Workspace/DronaForPX4/Src/Lib/Communication/*.h)

# Include path
INCLUDE_DIRECTORIES(include)
INCLUDE_DIRECTORIES(/home/ankush/Workspace/DronaForPX4/Src/Lib/Communication/includes)
INCLUDE_DIRECTORIES(/home/ankush/Workspace/DronaForPX4/Src/include/mavlink/common)
INCLUDE_DIRECTORIES(/home/ankush/Workspace/DronaForPX4/Src/include/mavlink)

# Build exectuable
add_executable(client src/client.cpp ${includes})
add_executable(server src/server.cpp ${includes})

TARGET_LINK_LIBRARIES(client /home/ankush/Workspace/DronaForPX4/Src/Lib/Communication-build/libcommunication.a)
TARGET_LINK_LIBRARIES(server /home/ankush/Workspace/DronaForPX4/Src/Lib/Communication-build/libcommunication.a)

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
