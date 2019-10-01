cmake_minimum_required(VERSION 3.10)
project(dronaSrcLibOMPLPlanner)

# Search .cpp in ./src
file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)


# Build exectuable
add_library(omplplanner STATIC ${sources} ${includes})

find_package(catkin REQUIRED COMPONENTS
  eigen_conversions
)
find_package (Eigen3 3.3 REQUIRED NO_MODULE)

target_include_directories(omplplanner PRIVATE Includes ${OMPL_INCLUDE_DIRS} ~/Documents/Drona/Src/Lib/WorkspaceRelated/WorkspaceParser/Includes)

target_link_libraries(omplplanner
ompl
Eigen3::Eigen
)

