project(VerifyAPI)

# Search .cpp in ./src
FILE(GLOB_RECURSE sources Src/*.cpp)
FILE(GLOB_RECURSE includes Include/*.h ${drona_SOURCE_DIR}/Src/Lib/Communication/*.h)

# Include path
INCLUDE_DIRECTORIES(includes)
INCLUDE_DIRECTORIES(${P_LIB_INCLUDE_PATH})

# Build exectuable
add_executable(verifyapi Src/main.cpp ${includes})

add_definitions( -DPRT_PLAT_LINUXUSER )
# Target Communication Libraries
TARGET_LINK_LIBRARIES(verifyapi px4driver workspaceparser)



