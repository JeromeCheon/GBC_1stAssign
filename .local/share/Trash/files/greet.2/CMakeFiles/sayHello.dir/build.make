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
CMAKE_SOURCE_DIR = /home/jeonghyejin/gbc/src/ASD

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jeonghyejin/gbc

# Include any dependencies generated for this target.
include greet/CMakeFiles/sayHello.dir/depend.make

# Include the progress variables for this target.
include greet/CMakeFiles/sayHello.dir/progress.make

# Include the compile flags for this target's objects.
include greet/CMakeFiles/sayHello.dir/flags.make

greet/CMakeFiles/sayHello.dir/hello.cpp.o: greet/CMakeFiles/sayHello.dir/flags.make
greet/CMakeFiles/sayHello.dir/hello.cpp.o: src/ASD/greet/hello.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jeonghyejin/gbc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object greet/CMakeFiles/sayHello.dir/hello.cpp.o"
	cd /home/jeonghyejin/gbc/greet && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sayHello.dir/hello.cpp.o -c /home/jeonghyejin/gbc/src/ASD/greet/hello.cpp

greet/CMakeFiles/sayHello.dir/hello.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sayHello.dir/hello.cpp.i"
	cd /home/jeonghyejin/gbc/greet && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeonghyejin/gbc/src/ASD/greet/hello.cpp > CMakeFiles/sayHello.dir/hello.cpp.i

greet/CMakeFiles/sayHello.dir/hello.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sayHello.dir/hello.cpp.s"
	cd /home/jeonghyejin/gbc/greet && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeonghyejin/gbc/src/ASD/greet/hello.cpp -o CMakeFiles/sayHello.dir/hello.cpp.s

greet/CMakeFiles/sayHello.dir/hello.cpp.o.requires:

.PHONY : greet/CMakeFiles/sayHello.dir/hello.cpp.o.requires

greet/CMakeFiles/sayHello.dir/hello.cpp.o.provides: greet/CMakeFiles/sayHello.dir/hello.cpp.o.requires
	$(MAKE) -f greet/CMakeFiles/sayHello.dir/build.make greet/CMakeFiles/sayHello.dir/hello.cpp.o.provides.build
.PHONY : greet/CMakeFiles/sayHello.dir/hello.cpp.o.provides

greet/CMakeFiles/sayHello.dir/hello.cpp.o.provides.build: greet/CMakeFiles/sayHello.dir/hello.cpp.o


# Object files for target sayHello
sayHello_OBJECTS = \
"CMakeFiles/sayHello.dir/hello.cpp.o"

# External object files for target sayHello
sayHello_EXTERNAL_OBJECTS =

greet/sayHello: greet/CMakeFiles/sayHello.dir/hello.cpp.o
greet/sayHello: greet/CMakeFiles/sayHello.dir/build.make
greet/sayHello: greet/CMakeFiles/sayHello.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jeonghyejin/gbc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sayHello"
	cd /home/jeonghyejin/gbc/greet && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sayHello.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
greet/CMakeFiles/sayHello.dir/build: greet/sayHello

.PHONY : greet/CMakeFiles/sayHello.dir/build

greet/CMakeFiles/sayHello.dir/requires: greet/CMakeFiles/sayHello.dir/hello.cpp.o.requires

.PHONY : greet/CMakeFiles/sayHello.dir/requires

greet/CMakeFiles/sayHello.dir/clean:
	cd /home/jeonghyejin/gbc/greet && $(CMAKE_COMMAND) -P CMakeFiles/sayHello.dir/cmake_clean.cmake
.PHONY : greet/CMakeFiles/sayHello.dir/clean

greet/CMakeFiles/sayHello.dir/depend:
	cd /home/jeonghyejin/gbc && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jeonghyejin/gbc/src/ASD /home/jeonghyejin/gbc/src/ASD/greet /home/jeonghyejin/gbc /home/jeonghyejin/gbc/greet /home/jeonghyejin/gbc/greet/CMakeFiles/sayHello.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : greet/CMakeFiles/sayHello.dir/depend

