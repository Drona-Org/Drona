cmake_minimum_required(VERSION 3.10)
project(dronaSrcLibOMPLPlanner)

# Search .cpp in ./src
file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)


# Build exectuable
add_library(omplplanner ${sources} ${includes} ~/Documents/Drona/Src/Lib/ExternalMotionPlanners/OMPLOptimalPlanner/Includes/PlanGenerator.h)

find_package (Eigen3 3.3 REQUIRED NO_MODULE)

target_include_directories(omplplanner PUBLIC Includes ${OMPL_INCLUDE_DIRS} ~/Documents/Drona/Src/Lib/WorkspaceRelated/WorkspaceParser/Includes ~/Documents/Drona/Src/Lib/ExternalMotionPlanners/OMPLOptimalPlanner/Includes)

target_link_libraries(omplplanner
ompl
Eigen3::Eigen
)

