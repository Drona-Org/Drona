project(dronaSrcLibAStarPlanner)

# Search .cpp in ./src
file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)

# Include path
INCLUDE_DIRECTORIES(Includes)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/WorkspaceRelated/WorkspaceParser/Includes ~/Documents/Drona/Src/Lib/WorkspaceRelated/WorkspaceParser/Includes)
# Build exectuable
add_library(astarplanner STATIC ${sources} ${includes} ~/Documents/Drona/Src/Lib/WorkspaceRelated/WorkspaceParser/Includes/Workspace.h)
