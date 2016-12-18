cmake_minimum_required(VERSION 3.0)
project(drona)

INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/include/mavlink/common)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/include/mavlink)

subdirs(Samples/TestCommunicationLib)
subdirs(Src/Lib/Communication)

