cmake_minimum_required(VERSION 3.0)
project(BreachTest)

# Search .cpp in ./src
FILE(GLOB_RECURSE sources Src/*.cpp)
FILE(GLOB_RECURSE includes Include/*.h ${drona_SOURCE_DIR}/Src/Lib/World/*.h)

# Include path
INCLUDE_DIRECTORIES(includes)

# Build exectuable
add_executable(monitor Src/monitor.cpp ${includes})

#add_definitions( -DPRT_PLAT_LINUXUSER )
# Target Communication Libraries
TARGET_LINK_LIBRARIES(monitor breach)



