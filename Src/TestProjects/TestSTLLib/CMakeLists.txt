project(dronaSrcTestProjectsTestSTLLib)

# Search .cpp in ./src
file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)

# Include path
INCLUDE_DIRECTORIES(Includes)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/STLLib/Includes)
# Build exectuable
add_executable(testSTLLib ${sources} ${includes})

TARGET_LINK_LIBRARIES(testSTLLib STLLib)


