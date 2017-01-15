cmake_minimum_required(VERSION 3.0)
project(CommunicationTest)

# Search .cpp in ./src
file(GLOB_RECURSE sources Src/*.cpp)
FILE(GLOB_RECURSE includes Include/*.h ${drona_SOURCE_DIR}/Src/Lib/Communication/*.h)

# Include path
INCLUDE_DIRECTORIES(includes)


# Build exectuable
add_executable(server Src/server.cpp ${includes})

# Target Communication Libraries
TARGET_LINK_LIBRARIES(server px4driver)



