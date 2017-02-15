add_subdirectory(../astar-algorithm-cpp ${CMAKE_BINARY_DIR}/astar-algorithm-cpp)

set(SRC Astar.cpp PathSearchNode.cpp PlanGenerator.cpp DijkstraPrecomputation.cpp)

add_library(plan_generator SHARED ${SRC})

target_include_directories(plan_generator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_compile_features(plan_generator PRIVATE cxx_range_for)

target_link_libraries(plan_generator workspace_parser stlastar)