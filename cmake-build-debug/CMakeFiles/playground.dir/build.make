# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Juno/Documents/GitHub/comp2012

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Juno/Documents/GitHub/comp2012/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/playground.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/playground.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/playground.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/playground.dir/flags.make

CMakeFiles/playground.dir/playground.cpp.o: CMakeFiles/playground.dir/flags.make
CMakeFiles/playground.dir/playground.cpp.o: /Users/Juno/Documents/GitHub/comp2012/playground.cpp
CMakeFiles/playground.dir/playground.cpp.o: CMakeFiles/playground.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Juno/Documents/GitHub/comp2012/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/playground.dir/playground.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/playground.dir/playground.cpp.o -MF CMakeFiles/playground.dir/playground.cpp.o.d -o CMakeFiles/playground.dir/playground.cpp.o -c /Users/Juno/Documents/GitHub/comp2012/playground.cpp

CMakeFiles/playground.dir/playground.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/playground.dir/playground.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Juno/Documents/GitHub/comp2012/playground.cpp > CMakeFiles/playground.dir/playground.cpp.i

CMakeFiles/playground.dir/playground.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/playground.dir/playground.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Juno/Documents/GitHub/comp2012/playground.cpp -o CMakeFiles/playground.dir/playground.cpp.s

# Object files for target playground
playground_OBJECTS = \
"CMakeFiles/playground.dir/playground.cpp.o"

# External object files for target playground
playground_EXTERNAL_OBJECTS =

playground: CMakeFiles/playground.dir/playground.cpp.o
playground: CMakeFiles/playground.dir/build.make
playground: CMakeFiles/playground.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Juno/Documents/GitHub/comp2012/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable playground"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/playground.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/playground.dir/build: playground
.PHONY : CMakeFiles/playground.dir/build

CMakeFiles/playground.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/playground.dir/cmake_clean.cmake
.PHONY : CMakeFiles/playground.dir/clean

CMakeFiles/playground.dir/depend:
	cd /Users/Juno/Documents/GitHub/comp2012/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Juno/Documents/GitHub/comp2012 /Users/Juno/Documents/GitHub/comp2012 /Users/Juno/Documents/GitHub/comp2012/cmake-build-debug /Users/Juno/Documents/GitHub/comp2012/cmake-build-debug /Users/Juno/Documents/GitHub/comp2012/cmake-build-debug/CMakeFiles/playground.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/playground.dir/depend
