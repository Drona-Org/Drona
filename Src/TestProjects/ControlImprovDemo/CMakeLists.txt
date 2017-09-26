project(dronaSrcTestProjectsControlImprov)

# Search .cpp in ./src
file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)



add_definitions(-DPRT_PLAT_LINUXUSER )


# Build exectuable
add_executable(controlimprov ${sources} ${includes})
# Include path
target_include_directories(controlimprov PRIVATE
Includes
${drona_SOURCE_DIR}/Src/Lib/OMPLOptimalPlanner/Includes
${dronaSrcLibOMPLPlanner_SOURCE_DIR}/Includes
${dronaSrcTrustedSoftwareStack_SOURCE_DIR}/Includes
${dronaSrcTrustedSoftwareStack_SOURCE_DIR}/PGenerated
)

# Target Communication Libraries
TARGET_LINK_LIBRARIES(controlimprov workspaceparser trustedsoftwarestack omplplanner)



