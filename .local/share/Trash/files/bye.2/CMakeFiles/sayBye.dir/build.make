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
include bye/CMakeFiles/sayBye.dir/depend.make

# Include the progress variables for this target.
include bye/CMakeFiles/sayBye.dir/progress.make

# Include the compile flags for this target's objects.
include bye/CMakeFiles/sayBye.dir/flags.make

bye/CMakeFiles/sayBye.dir/bye.cpp.o: bye/CMakeFiles/sayBye.dir/flags.make
bye/CMakeFiles/sayBye.dir/bye.cpp.o: src/ASD/bye/bye.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jeonghyejin/gbc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object bye/CMakeFiles/sayBye.dir/bye.cpp.o"
	cd /home/jeonghyejin/gbc/bye && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sayBye.dir/bye.cpp.o -c /home/jeonghyejin/gbc/src/ASD/bye/bye.cpp

bye/CMakeFiles/sayBye.dir/bye.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sayBye.dir/bye.cpp.i"
	cd /home/jeonghyejin/gbc/bye && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeonghyejin/gbc/src/ASD/bye/bye.cpp > CMakeFiles/sayBye.dir/bye.cpp.i

bye/CMakeFiles/sayBye.dir/bye.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sayBye.dir/bye.cpp.s"
	cd /home/jeonghyejin/gbc/bye && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeonghyejin/gbc/src/ASD/bye/bye.cpp -o CMakeFiles/sayBye.dir/bye.cpp.s

bye/CMakeFiles/sayBye.dir/bye.cpp.o.requires:

.PHONY : bye/CMakeFiles/sayBye.dir/bye.cpp.o.requires

bye/CMakeFiles/sayBye.dir/bye.cpp.o.provides: bye/CMakeFiles/sayBye.dir/bye.cpp.o.requires
	$(MAKE) -f bye/CMakeFiles/sayBye.dir/build.make bye/CMakeFiles/sayBye.dir/bye.cpp.o.provides.build
.PHONY : bye/CMakeFiles/sayBye.dir/bye.cpp.o.provides

bye/CMakeFiles/sayBye.dir/bye.cpp.o.provides.build: bye/CMakeFiles/sayBye.dir/bye.cpp.o


# Object files for target sayBye
sayBye_OBJECTS = \
"CMakeFiles/sayBye.dir/bye.cpp.o"

# External object files for target sayBye
sayBye_EXTERNAL_OBJECTS =

bye/sayBye: bye/CMakeFiles/sayBye.dir/bye.cpp.o
bye/sayBye: bye/CMakeFiles/sayBye.dir/build.make
bye/sayBye: bye/CMakeFiles/sayBye.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jeonghyejin/gbc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sayBye"
	cd /home/jeonghyejin/gbc/bye && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sayBye.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
bye/CMakeFiles/sayBye.dir/build: bye/sayBye

.PHONY : bye/CMakeFiles/sayBye.dir/build

bye/CMakeFiles/sayBye.dir/requires: bye/CMakeFiles/sayBye.dir/bye.cpp.o.requires

.PHONY : bye/CMakeFiles/sayBye.dir/requires

bye/CMakeFiles/sayBye.dir/clean:
	cd /home/jeonghyejin/gbc/bye && $(CMAKE_COMMAND) -P CMakeFiles/sayBye.dir/cmake_clean.cmake
.PHONY : bye/CMakeFiles/sayBye.dir/clean

bye/CMakeFiles/sayBye.dir/depend:
	cd /home/jeonghyejin/gbc && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jeonghyejin/gbc/src/ASD /home/jeonghyejin/gbc/src/ASD/bye /home/jeonghyejin/gbc /home/jeonghyejin/gbc/bye /home/jeonghyejin/gbc/bye/CMakeFiles/sayBye.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : bye/CMakeFiles/sayBye.dir/depend

