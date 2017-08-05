project(dronaSrcTestProjectsTestPlanGeneratorWithGazebo)

# Search .cpp in ./src
file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)



add_definitions(-DPRT_PLAT_LINUXUSER )


# Build exectuable
add_executable(testplangazebo ${sources} ${includes})
# Include path
target_include_directories(testplangazebo PRIVATE
Includes
${drona_SOURCE_DIR}/Src/Lib/OMPLOptimalPlanner/Includes
${dronaSrcLibOMPLPlanner_SOURCE_DIR}/Includes
)

# Target Communication Libraries
TARGET_LINK_LIBRARIES(testplangazebo workspaceparser px4driver omplplanner)



