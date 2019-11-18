project(dronaSrcLibWorkSpaceRelatedWorkspaceParser)

# Search .cpp in ./src
file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)



# Build exectuable
add_library(workspaceparser STATIC ${sources} ${includes})

target_include_directories(workspaceparser PRIVATE Includes)
