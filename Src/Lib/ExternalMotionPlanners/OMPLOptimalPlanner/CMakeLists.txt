project(dronaSrcLibOMPLPlanner)

find_package(OMPL)
if(OMPL_FOUND)
    Message(STATUS ">|> Found OMPL installed")
else()
    Message(SEND_ERROR ">|> Not Found OMPL. Please install")
endif()

# Search .cpp in ./src
file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)


# Build exectuable
add_library(omplplanner STATIC ${sources} ${includes})

target_include_directories(omplplanner PRIVATE Includes ${OMPL_INCLUDE_DIRS})
target_link_libraries(omplplanner
${OMPL_LIBRARIES}
)

