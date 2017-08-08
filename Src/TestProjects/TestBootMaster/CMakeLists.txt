project(dronaSrcTestProjectsTestBootMaster)

# Search .cpp in ./src
file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)



add_definitions(-DPRT_PLAT_LINUXUSER)


# Build exectuable
add_executable(testbootmaster ${sources} ${includes})
# Include path
target_include_directories(testbootmaster PRIVATE
Includes
)

# Target Communication Libraries
TARGET_LINK_LIBRARIES(testbootmaster trustedsoftwarestack)



