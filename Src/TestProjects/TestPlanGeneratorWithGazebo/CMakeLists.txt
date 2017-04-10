project(dronaSrcTestProjectsTestPlanGeneratorWithGazebo)

# Search .cpp in ./src
file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)

# Include path
INCLUDE_DIRECTORIES(Includes)
INCLUDE_DIRECTORIES(${P_LIB_INCLUDE_PATH})
add_definitions( -DPRT_PLAT_LINUXUSER )

INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/WorkspaceParser/Includes)
#INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/AStarPlanner/Includes)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/OMPLOptimalPlanner/Includes)
# Build exectuable
add_executable(testplangazebo ${sources} ${includes})

# Target Communication Libraries
TARGET_LINK_LIBRARIES(testplangazebo workspaceparser px4driver omplplanner ompl)



