# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /snap/clion/44/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/44/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/ortegajosant/CLionProjects/Tarea 5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/ortegajosant/CLionProjects/Tarea 5/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Tarea_5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Tarea_5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Tarea_5.dir/flags.make

CMakeFiles/Tarea_5.dir/main.cpp.o: CMakeFiles/Tarea_5.dir/flags.make
CMakeFiles/Tarea_5.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ortegajosant/CLionProjects/Tarea 5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Tarea_5.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tarea_5.dir/main.cpp.o -c "/home/ortegajosant/CLionProjects/Tarea 5/main.cpp"

CMakeFiles/Tarea_5.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tarea_5.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ortegajosant/CLionProjects/Tarea 5/main.cpp" > CMakeFiles/Tarea_5.dir/main.cpp.i

CMakeFiles/Tarea_5.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tarea_5.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ortegajosant/CLionProjects/Tarea 5/main.cpp" -o CMakeFiles/Tarea_5.dir/main.cpp.s

CMakeFiles/Tarea_5.dir/src/Backtracking.cpp.o: CMakeFiles/Tarea_5.dir/flags.make
CMakeFiles/Tarea_5.dir/src/Backtracking.cpp.o: ../src/Backtracking.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ortegajosant/CLionProjects/Tarea 5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Tarea_5.dir/src/Backtracking.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tarea_5.dir/src/Backtracking.cpp.o -c "/home/ortegajosant/CLionProjects/Tarea 5/src/Backtracking.cpp"

CMakeFiles/Tarea_5.dir/src/Backtracking.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tarea_5.dir/src/Backtracking.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ortegajosant/CLionProjects/Tarea 5/src/Backtracking.cpp" > CMakeFiles/Tarea_5.dir/src/Backtracking.cpp.i

CMakeFiles/Tarea_5.dir/src/Backtracking.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tarea_5.dir/src/Backtracking.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ortegajosant/CLionProjects/Tarea 5/src/Backtracking.cpp" -o CMakeFiles/Tarea_5.dir/src/Backtracking.cpp.s

# Object files for target Tarea_5
Tarea_5_OBJECTS = \
"CMakeFiles/Tarea_5.dir/main.cpp.o" \
"CMakeFiles/Tarea_5.dir/src/Backtracking.cpp.o"

# External object files for target Tarea_5
Tarea_5_EXTERNAL_OBJECTS =

Tarea_5: CMakeFiles/Tarea_5.dir/main.cpp.o
Tarea_5: CMakeFiles/Tarea_5.dir/src/Backtracking.cpp.o
Tarea_5: CMakeFiles/Tarea_5.dir/build.make
Tarea_5: CMakeFiles/Tarea_5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/ortegajosant/CLionProjects/Tarea 5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Tarea_5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Tarea_5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Tarea_5.dir/build: Tarea_5

.PHONY : CMakeFiles/Tarea_5.dir/build

CMakeFiles/Tarea_5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Tarea_5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Tarea_5.dir/clean

CMakeFiles/Tarea_5.dir/depend:
	cd "/home/ortegajosant/CLionProjects/Tarea 5/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/ortegajosant/CLionProjects/Tarea 5" "/home/ortegajosant/CLionProjects/Tarea 5" "/home/ortegajosant/CLionProjects/Tarea 5/cmake-build-debug" "/home/ortegajosant/CLionProjects/Tarea 5/cmake-build-debug" "/home/ortegajosant/CLionProjects/Tarea 5/cmake-build-debug/CMakeFiles/Tarea_5.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Tarea_5.dir/depend
