project(dronaSrcLibAStarPlanner)

# Search .cpp in ./src
file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)

# Include path
INCLUDE_DIRECTORIES(Includes)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/WorkspaceParser/Includes)
# Build exectuable
add_library(astarplanner STATIC ${sources} ${includes})
