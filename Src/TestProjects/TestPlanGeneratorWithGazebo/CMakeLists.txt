cmake_minimum_required(VERSION 3.10)
project(dronaSrcTestProjectsTestPlanGeneratorWithGazebo)

# Search .cpp in ./src
file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)



# add_definitions(-DPRT_PLAT_LINUXUSER )
find_package (Eigen3 3.3 REQUIRED NO_MODULE)
find_package(ompl)

# Build exectuable
add_executable(testplangazebo ${sources} ${includes})
# Include path
target_include_directories(testplangazebo PUBLIC ${OMPL_INCLUDE_DIRS}
Includes
~/Documents/Drona/Src/Lib/ExternalMotionPlanners/OMPLOptimalPlanner/Includes
${dronaSrcLibOMPLPlanner_SOURCE_DIR}/Includes
~/Documents/Drona/Src/Lib/WorkspaceRelated/WorkspaceParser/Includes
~/Documents/Drona/Src/Lib/Drivers/PX4Driver/Includes
~/Documents/Drona/Src/Includes/MavlinkHeaders/common
~/Documents/Drona/Src/Includes/MavlinkHeaders
~/Documents/Drona/Src/Lib/Drivers/CommunicationDriver/Includes
~/Documents/Drona/Src/Lib/Loggers/ConsoleLogger/Includes
~/Documents/Drona/Src/Lib/Drivers/PX4Driver/PGenerated
~/Documents/Drona/Submodule/P/Bld/Drops/PrtUser/include
~/Documents/Drona/Src/Includes/PMavlinkHeaders
)

# Target Communication Libraries
TARGET_LINK_LIBRARIES(testplangazebo ${OMPL_LIBRARIES} ${OMPLAPP_LIBRARIES} Eigen3::Eigen /home/sumukh/Documents/Drona/Src/Lib/ExternalMotionPlanners/OMPLOptimalPlanner/libomplplanner.so /home/sumukh/Documents/Drona/Src/Lib/ExternalMotionPlanners/OMPLOptimalPlanner/libomplplanner.a /home/sumukh/Documents/Drona/Src/Lib/WorkspaceRelated/WorkspaceParser/libworkspaceparser.a)
