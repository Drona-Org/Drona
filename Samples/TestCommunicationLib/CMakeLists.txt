cmake_minimum_required(VERSION 3.0)
project(CommunicationTest)

# Search .cpp in ./src
FILE(GLOB_RECURSE sources Src/*.cpp)
FILE(GLOB_RECURSE includes Include/*.h ${drona_SOURCE_DIR}/Src/Lib/Communication/*.h)

# Include path
INCLUDE_DIRECTORIES(includes)
INCLUDE_DIRECTORIES(${P_LIB_INCLUDE_PATH})

# Build exectuable
add_executable(server Src/server.cpp ${includes})

add_definitions( -DPRT_PLAT_LINUXUSER )
# Target Communication Libraries
TARGET_LINK_LIBRARIES(server px4driver)



