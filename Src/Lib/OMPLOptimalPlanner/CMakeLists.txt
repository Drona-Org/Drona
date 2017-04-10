project(dronaSrcLibOMPLPlanner)

# Search .cpp in ./src
file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)

# Include path
INCLUDE_DIRECTORIES(Includes)
# Build exectuable
add_library(omplplanner ${sources} ${includes})

target_link_libraries(omplplanner
      ${OMPL_LINK_LIBRARIES}
    ${Boost_FILESYSTEM_LIBRARY}
    ${Boost_SYSTEM_LIBRARY}
    ${Boost_PROGRAM_OPTIONS_LIBRARY}
ompl
)

