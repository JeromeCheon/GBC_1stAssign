# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/genius/1st_Assign/ASD/Bye

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/genius/1st_Assign/ASD/Bye

# Include any dependencies generated for this target.
include CMakeFiles/bye.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bye.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bye.dir/flags.make

CMakeFiles/bye.dir/Bye.cpp.o: CMakeFiles/bye.dir/flags.make
CMakeFiles/bye.dir/Bye.cpp.o: Bye.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/genius/1st_Assign/ASD/Bye/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bye.dir/Bye.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bye.dir/Bye.cpp.o -c /home/genius/1st_Assign/ASD/Bye/Bye.cpp

CMakeFiles/bye.dir/Bye.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bye.dir/Bye.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/genius/1st_Assign/ASD/Bye/Bye.cpp > CMakeFiles/bye.dir/Bye.cpp.i

CMakeFiles/bye.dir/Bye.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bye.dir/Bye.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/genius/1st_Assign/ASD/Bye/Bye.cpp -o CMakeFiles/bye.dir/Bye.cpp.s

CMakeFiles/bye.dir/Bye.cpp.o.requires:

.PHONY : CMakeFiles/bye.dir/Bye.cpp.o.requires

CMakeFiles/bye.dir/Bye.cpp.o.provides: CMakeFiles/bye.dir/Bye.cpp.o.requires
	$(MAKE) -f CMakeFiles/bye.dir/build.make CMakeFiles/bye.dir/Bye.cpp.o.provides.build
.PHONY : CMakeFiles/bye.dir/Bye.cpp.o.provides

CMakeFiles/bye.dir/Bye.cpp.o.provides.build: CMakeFiles/bye.dir/Bye.cpp.o


# Object files for target bye
bye_OBJECTS = \
"CMakeFiles/bye.dir/Bye.cpp.o"

# External object files for target bye
bye_EXTERNAL_OBJECTS =

bye: CMakeFiles/bye.dir/Bye.cpp.o
bye: CMakeFiles/bye.dir/build.make
bye: CMakeFiles/bye.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/genius/1st_Assign/ASD/Bye/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bye"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bye.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bye.dir/build: bye

.PHONY : CMakeFiles/bye.dir/build

CMakeFiles/bye.dir/requires: CMakeFiles/bye.dir/Bye.cpp.o.requires

.PHONY : CMakeFiles/bye.dir/requires

CMakeFiles/bye.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bye.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bye.dir/clean

CMakeFiles/bye.dir/depend:
	cd /home/genius/1st_Assign/ASD/Bye && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/genius/1st_Assign/ASD/Bye /home/genius/1st_Assign/ASD/Bye /home/genius/1st_Assign/ASD/Bye /home/genius/1st_Assign/ASD/Bye /home/genius/1st_Assign/ASD/Bye/CMakeFiles/bye.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bye.dir/depend

