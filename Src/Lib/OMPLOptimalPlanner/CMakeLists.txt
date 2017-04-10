project(dronaSrcLibOMPLPlanner)

# Search .cpp in ./src
file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)

# Include path
INCLUDE_DIRECTORIES(Includes)
# Build exectuable
add_library(omplplanner STATIC ${sources} ${includes})

target_link_libraries(omplplanner
ompl
)

