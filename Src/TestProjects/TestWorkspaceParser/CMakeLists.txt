project(dronaSrcTestProjectsTestWorkspaceParser)

# Search .cpp in ./src
file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)

# Include path
INCLUDE_DIRECTORIES(Includes)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/WorkspaceParser/Includes)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/GazeboWorldGenerator/Includes)
# Build exectuable
add_executable(testworkspaceparser ${sources} ${includes})

# Target Communication Libraries
TARGET_LINK_LIBRARIES(testworkspaceparser workspaceparser gazeboworldgenerator)



