cmake_minimum_required(VERSION 3.0)
project(PX4Driver)

# Search .cpp in ./src
file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)

# Include path
INCLUDE_DIRECTORIES(includes)


# Build exectuable
add_library(px4driver STATIC ${sources} ${includes})

TARGET_LINK_LIBRARIES(px4driver communication)
TARGET_LINK_LIBRARIES(px4driver pthread)
TARGET_LINK_LIBRARIES(px4driver logger)

