cmake_minimum_required (VERSION 3.1)
project (drona)
set(projectName DronaTest)
find_package (Threads)
include_directories(
    ${CMAKE_SOURCE_DIR}/../../../../../sumukh/Documents/P/Bld/Drops/Prt/include
    ${CMAKE_SOURCE_DIR}/Drona/Src/Lib/ExternalMotionPlanners/OMPLOptimalPlanner/Includes
    ${CMAKE_SOURCE_DIR}/Drona/Src/Lib/WorkspaceRelated/WorkspaceParser/Includes)
add_executable(drona_test 
    Test.c
    Test.h
    Main.cpp
    RobotFuncs.h
    RobotFuncs.cpp
    Exp1.xml
    ${CMAKE_SOURCE_DIR}/Drona/PSrc/Exp1.xml
    ${CMAKE_SOURCE_DIR}/Drona/Src/Lib/WorkspaceRelated/WorkspaceParser/Includes/Workspace.h
    ${CMAKE_SOURCE_DIR}/Drona/Src/Lib/WorkspaceRelated/WorkspaceParser/Includes/tinyxml2.h
    ${CMAKE_SOURCE_DIR}/Drona/Src/Lib/WorkspaceRelated/WorkspaceParser/Includes/WorkspaceParser.h
    ${CMAKE_SOURCE_DIR}/Drona/P/Bld/Drops/Prt/include/ext_compat.h
    ${CMAKE_SOURCE_DIR}/Drona/P/Bld/Drops/Prt/include/libhandler.h
    ${CMAKE_SOURCE_DIR}/Drona/P/Bld/Drops/Prt/include/libhandler-internal.h
    ${CMAKE_SOURCE_DIR}/Drona/P/Bld/Drops/Prt/include/Prt.h
    ${CMAKE_SOURCE_DIR}/Drona/P/Bld/Drops/Prt/include/PrtConfig.h
    ${CMAKE_SOURCE_DIR}/Drona/P/Bld/Drops/Prt/include/PrtExecution.h
    ${CMAKE_SOURCE_DIR}/Drona/P/Bld/Drops/Prt/include/PrtLinuxUserConfig.h
    ${CMAKE_SOURCE_DIR}/Drona/P/Bld/Drops/Prt/include/PrtProgram.h
    ${CMAKE_SOURCE_DIR}/Drona/P/Bld/Drops/Prt/include/PrtTypes.h
    ${CMAKE_SOURCE_DIR}/Drona/P/Bld/Drops/Prt/include/PrtValues.h
    ${CMAKE_SOURCE_DIR}/Drona/P/Bld/Drops/Prt/include/sal.h)

target_link_libraries(drona_test ${OMPL_LIBRARIES} ${OMPLAPP_LIBRARIES} ${CMAKE_SOURCE_DIR}/Drona/P/Bld/Drops/Prt/lib/libPrt_static.a ${CMAKE_SOURCE_DIR}/Drona/P/Ext/libhandler/out/gcc-amd64-linux-gnu/debug/libhandler.a ${CMAKE_THREAD_LIBS_INIT} ${CMAKE_SOURCE_DIR}/Drona/Src/Lib/ExternalMotionPlanners/OMPLOptimalPlanner/libomplplanner.so ${CMAKE_SOURCE_DIR}/Drona/Src/Lib/ExternalMotionPlanners/OMPLOptimalPlanner/libomplplanner.a ${CMAKE_SOURCE_DIR}/Drona/Src/Lib/WorkspaceRelated/WorkspaceParser/libworkspaceparser.a)
