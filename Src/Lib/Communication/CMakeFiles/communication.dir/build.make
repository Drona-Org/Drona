# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Produce verbose output by default.
VERBOSE = 1

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/drona/Workspace/DronaForPX4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/drona/Workspace/DronaForPX4

# Include any dependencies generated for this target.
include Src/Lib/Communication/CMakeFiles/communication.dir/depend.make

# Include the progress variables for this target.
include Src/Lib/Communication/CMakeFiles/communication.dir/progress.make

# Include the compile flags for this target's objects.
include Src/Lib/Communication/CMakeFiles/communication.dir/flags.make

Src/Lib/Communication/CMakeFiles/communication.dir/src/UdpSocketPort.cpp.o: Src/Lib/Communication/CMakeFiles/communication.dir/flags.make
Src/Lib/Communication/CMakeFiles/communication.dir/src/UdpSocketPort.cpp.o: Src/Lib/Communication/src/UdpSocketPort.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/drona/Workspace/DronaForPX4/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Src/Lib/Communication/CMakeFiles/communication.dir/src/UdpSocketPort.cpp.o"
	cd /home/drona/Workspace/DronaForPX4/Src/Lib/Communication && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/communication.dir/src/UdpSocketPort.cpp.o -c /home/drona/Workspace/DronaForPX4/Src/Lib/Communication/src/UdpSocketPort.cpp

Src/Lib/Communication/CMakeFiles/communication.dir/src/UdpSocketPort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/communication.dir/src/UdpSocketPort.cpp.i"
	cd /home/drona/Workspace/DronaForPX4/Src/Lib/Communication && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/drona/Workspace/DronaForPX4/Src/Lib/Communication/src/UdpSocketPort.cpp > CMakeFiles/communication.dir/src/UdpSocketPort.cpp.i

Src/Lib/Communication/CMakeFiles/communication.dir/src/UdpSocketPort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/communication.dir/src/UdpSocketPort.cpp.s"
	cd /home/drona/Workspace/DronaForPX4/Src/Lib/Communication && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/drona/Workspace/DronaForPX4/Src/Lib/Communication/src/UdpSocketPort.cpp -o CMakeFiles/communication.dir/src/UdpSocketPort.cpp.s

Src/Lib/Communication/CMakeFiles/communication.dir/src/UdpSocketPort.cpp.o.requires:
.PHONY : Src/Lib/Communication/CMakeFiles/communication.dir/src/UdpSocketPort.cpp.o.requires

Src/Lib/Communication/CMakeFiles/communication.dir/src/UdpSocketPort.cpp.o.provides: Src/Lib/Communication/CMakeFiles/communication.dir/src/UdpSocketPort.cpp.o.requires
	$(MAKE) -f Src/Lib/Communication/CMakeFiles/communication.dir/build.make Src/Lib/Communication/CMakeFiles/communication.dir/src/UdpSocketPort.cpp.o.provides.build
.PHONY : Src/Lib/Communication/CMakeFiles/communication.dir/src/UdpSocketPort.cpp.o.provides

Src/Lib/Communication/CMakeFiles/communication.dir/src/UdpSocketPort.cpp.o.provides.build: Src/Lib/Communication/CMakeFiles/communication.dir/src/UdpSocketPort.cpp.o

Src/Lib/Communication/CMakeFiles/communication.dir/src/PX4Communicator.cpp.o: Src/Lib/Communication/CMakeFiles/communication.dir/flags.make
Src/Lib/Communication/CMakeFiles/communication.dir/src/PX4Communicator.cpp.o: Src/Lib/Communication/src/PX4Communicator.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/drona/Workspace/DronaForPX4/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Src/Lib/Communication/CMakeFiles/communication.dir/src/PX4Communicator.cpp.o"
	cd /home/drona/Workspace/DronaForPX4/Src/Lib/Communication && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/communication.dir/src/PX4Communicator.cpp.o -c /home/drona/Workspace/DronaForPX4/Src/Lib/Communication/src/PX4Communicator.cpp

Src/Lib/Communication/CMakeFiles/communication.dir/src/PX4Communicator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/communication.dir/src/PX4Communicator.cpp.i"
	cd /home/drona/Workspace/DronaForPX4/Src/Lib/Communication && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/drona/Workspace/DronaForPX4/Src/Lib/Communication/src/PX4Communicator.cpp > CMakeFiles/communication.dir/src/PX4Communicator.cpp.i

Src/Lib/Communication/CMakeFiles/communication.dir/src/PX4Communicator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/communication.dir/src/PX4Communicator.cpp.s"
	cd /home/drona/Workspace/DronaForPX4/Src/Lib/Communication && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/drona/Workspace/DronaForPX4/Src/Lib/Communication/src/PX4Communicator.cpp -o CMakeFiles/communication.dir/src/PX4Communicator.cpp.s

Src/Lib/Communication/CMakeFiles/communication.dir/src/PX4Communicator.cpp.o.requires:
.PHONY : Src/Lib/Communication/CMakeFiles/communication.dir/src/PX4Communicator.cpp.o.requires

Src/Lib/Communication/CMakeFiles/communication.dir/src/PX4Communicator.cpp.o.provides: Src/Lib/Communication/CMakeFiles/communication.dir/src/PX4Communicator.cpp.o.requires
	$(MAKE) -f Src/Lib/Communication/CMakeFiles/communication.dir/build.make Src/Lib/Communication/CMakeFiles/communication.dir/src/PX4Communicator.cpp.o.provides.build
.PHONY : Src/Lib/Communication/CMakeFiles/communication.dir/src/PX4Communicator.cpp.o.provides

Src/Lib/Communication/CMakeFiles/communication.dir/src/PX4Communicator.cpp.o.provides.build: Src/Lib/Communication/CMakeFiles/communication.dir/src/PX4Communicator.cpp.o

# Object files for target communication
communication_OBJECTS = \
"CMakeFiles/communication.dir/src/UdpSocketPort.cpp.o" \
"CMakeFiles/communication.dir/src/PX4Communicator.cpp.o"

# External object files for target communication
communication_EXTERNAL_OBJECTS =

Src/Lib/Communication/libcommunication.a: Src/Lib/Communication/CMakeFiles/communication.dir/src/UdpSocketPort.cpp.o
Src/Lib/Communication/libcommunication.a: Src/Lib/Communication/CMakeFiles/communication.dir/src/PX4Communicator.cpp.o
Src/Lib/Communication/libcommunication.a: Src/Lib/Communication/CMakeFiles/communication.dir/build.make
Src/Lib/Communication/libcommunication.a: Src/Lib/Communication/CMakeFiles/communication.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libcommunication.a"
	cd /home/drona/Workspace/DronaForPX4/Src/Lib/Communication && $(CMAKE_COMMAND) -P CMakeFiles/communication.dir/cmake_clean_target.cmake
	cd /home/drona/Workspace/DronaForPX4/Src/Lib/Communication && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/communication.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Src/Lib/Communication/CMakeFiles/communication.dir/build: Src/Lib/Communication/libcommunication.a
.PHONY : Src/Lib/Communication/CMakeFiles/communication.dir/build

Src/Lib/Communication/CMakeFiles/communication.dir/requires: Src/Lib/Communication/CMakeFiles/communication.dir/src/UdpSocketPort.cpp.o.requires
Src/Lib/Communication/CMakeFiles/communication.dir/requires: Src/Lib/Communication/CMakeFiles/communication.dir/src/PX4Communicator.cpp.o.requires
.PHONY : Src/Lib/Communication/CMakeFiles/communication.dir/requires

Src/Lib/Communication/CMakeFiles/communication.dir/clean:
	cd /home/drona/Workspace/DronaForPX4/Src/Lib/Communication && $(CMAKE_COMMAND) -P CMakeFiles/communication.dir/cmake_clean.cmake
.PHONY : Src/Lib/Communication/CMakeFiles/communication.dir/clean

Src/Lib/Communication/CMakeFiles/communication.dir/depend:
	cd /home/drona/Workspace/DronaForPX4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/drona/Workspace/DronaForPX4 /home/drona/Workspace/DronaForPX4/Src/Lib/Communication /home/drona/Workspace/DronaForPX4 /home/drona/Workspace/DronaForPX4/Src/Lib/Communication /home/drona/Workspace/DronaForPX4/Src/Lib/Communication/CMakeFiles/communication.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Src/Lib/Communication/CMakeFiles/communication.dir/depend

