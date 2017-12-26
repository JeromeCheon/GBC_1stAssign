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
CMAKE_SOURCE_DIR = /home/genius/GBC/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/genius/GBC/src

# Include any dependencies generated for this target.
include calculator/operand/CMakeFiles/operand.dir/depend.make

# Include the progress variables for this target.
include calculator/operand/CMakeFiles/operand.dir/progress.make

# Include the compile flags for this target's objects.
include calculator/operand/CMakeFiles/operand.dir/flags.make

calculator/operand/CMakeFiles/operand.dir/RawElement.cpp.o: calculator/operand/CMakeFiles/operand.dir/flags.make
calculator/operand/CMakeFiles/operand.dir/RawElement.cpp.o: calculator/operand/RawElement.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/genius/GBC/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object calculator/operand/CMakeFiles/operand.dir/RawElement.cpp.o"
	cd /home/genius/GBC/src/calculator/operand && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/operand.dir/RawElement.cpp.o -c /home/genius/GBC/src/calculator/operand/RawElement.cpp

calculator/operand/CMakeFiles/operand.dir/RawElement.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/operand.dir/RawElement.cpp.i"
	cd /home/genius/GBC/src/calculator/operand && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/genius/GBC/src/calculator/operand/RawElement.cpp > CMakeFiles/operand.dir/RawElement.cpp.i

calculator/operand/CMakeFiles/operand.dir/RawElement.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/operand.dir/RawElement.cpp.s"
	cd /home/genius/GBC/src/calculator/operand && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/genius/GBC/src/calculator/operand/RawElement.cpp -o CMakeFiles/operand.dir/RawElement.cpp.s

calculator/operand/CMakeFiles/operand.dir/RawElement.cpp.o.requires:

.PHONY : calculator/operand/CMakeFiles/operand.dir/RawElement.cpp.o.requires

calculator/operand/CMakeFiles/operand.dir/RawElement.cpp.o.provides: calculator/operand/CMakeFiles/operand.dir/RawElement.cpp.o.requires
	$(MAKE) -f calculator/operand/CMakeFiles/operand.dir/build.make calculator/operand/CMakeFiles/operand.dir/RawElement.cpp.o.provides.build
.PHONY : calculator/operand/CMakeFiles/operand.dir/RawElement.cpp.o.provides

calculator/operand/CMakeFiles/operand.dir/RawElement.cpp.o.provides.build: calculator/operand/CMakeFiles/operand.dir/RawElement.cpp.o


calculator/operand/CMakeFiles/operand.dir/IntElement.cpp.o: calculator/operand/CMakeFiles/operand.dir/flags.make
calculator/operand/CMakeFiles/operand.dir/IntElement.cpp.o: calculator/operand/IntElement.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/genius/GBC/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object calculator/operand/CMakeFiles/operand.dir/IntElement.cpp.o"
	cd /home/genius/GBC/src/calculator/operand && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/operand.dir/IntElement.cpp.o -c /home/genius/GBC/src/calculator/operand/IntElement.cpp

calculator/operand/CMakeFiles/operand.dir/IntElement.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/operand.dir/IntElement.cpp.i"
	cd /home/genius/GBC/src/calculator/operand && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/genius/GBC/src/calculator/operand/IntElement.cpp > CMakeFiles/operand.dir/IntElement.cpp.i

calculator/operand/CMakeFiles/operand.dir/IntElement.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/operand.dir/IntElement.cpp.s"
	cd /home/genius/GBC/src/calculator/operand && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/genius/GBC/src/calculator/operand/IntElement.cpp -o CMakeFiles/operand.dir/IntElement.cpp.s

calculator/operand/CMakeFiles/operand.dir/IntElement.cpp.o.requires:

.PHONY : calculator/operand/CMakeFiles/operand.dir/IntElement.cpp.o.requires

calculator/operand/CMakeFiles/operand.dir/IntElement.cpp.o.provides: calculator/operand/CMakeFiles/operand.dir/IntElement.cpp.o.requires
	$(MAKE) -f calculator/operand/CMakeFiles/operand.dir/build.make calculator/operand/CMakeFiles/operand.dir/IntElement.cpp.o.provides.build
.PHONY : calculator/operand/CMakeFiles/operand.dir/IntElement.cpp.o.provides

calculator/operand/CMakeFiles/operand.dir/IntElement.cpp.o.provides.build: calculator/operand/CMakeFiles/operand.dir/IntElement.cpp.o


calculator/operand/CMakeFiles/operand.dir/FloatElement.cpp.o: calculator/operand/CMakeFiles/operand.dir/flags.make
calculator/operand/CMakeFiles/operand.dir/FloatElement.cpp.o: calculator/operand/FloatElement.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/genius/GBC/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object calculator/operand/CMakeFiles/operand.dir/FloatElement.cpp.o"
	cd /home/genius/GBC/src/calculator/operand && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/operand.dir/FloatElement.cpp.o -c /home/genius/GBC/src/calculator/operand/FloatElement.cpp

calculator/operand/CMakeFiles/operand.dir/FloatElement.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/operand.dir/FloatElement.cpp.i"
	cd /home/genius/GBC/src/calculator/operand && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/genius/GBC/src/calculator/operand/FloatElement.cpp > CMakeFiles/operand.dir/FloatElement.cpp.i

calculator/operand/CMakeFiles/operand.dir/FloatElement.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/operand.dir/FloatElement.cpp.s"
	cd /home/genius/GBC/src/calculator/operand && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/genius/GBC/src/calculator/operand/FloatElement.cpp -o CMakeFiles/operand.dir/FloatElement.cpp.s

calculator/operand/CMakeFiles/operand.dir/FloatElement.cpp.o.requires:

.PHONY : calculator/operand/CMakeFiles/operand.dir/FloatElement.cpp.o.requires

calculator/operand/CMakeFiles/operand.dir/FloatElement.cpp.o.provides: calculator/operand/CMakeFiles/operand.dir/FloatElement.cpp.o.requires
	$(MAKE) -f calculator/operand/CMakeFiles/operand.dir/build.make calculator/operand/CMakeFiles/operand.dir/FloatElement.cpp.o.provides.build
.PHONY : calculator/operand/CMakeFiles/operand.dir/FloatElement.cpp.o.provides

calculator/operand/CMakeFiles/operand.dir/FloatElement.cpp.o.provides.build: calculator/operand/CMakeFiles/operand.dir/FloatElement.cpp.o


# Object files for target operand
operand_OBJECTS = \
"CMakeFiles/operand.dir/RawElement.cpp.o" \
"CMakeFiles/operand.dir/IntElement.cpp.o" \
"CMakeFiles/operand.dir/FloatElement.cpp.o"

# External object files for target operand
operand_EXTERNAL_OBJECTS =

calculator/operand/liboperand.a: calculator/operand/CMakeFiles/operand.dir/RawElement.cpp.o
calculator/operand/liboperand.a: calculator/operand/CMakeFiles/operand.dir/IntElement.cpp.o
calculator/operand/liboperand.a: calculator/operand/CMakeFiles/operand.dir/FloatElement.cpp.o
calculator/operand/liboperand.a: calculator/operand/CMakeFiles/operand.dir/build.make
calculator/operand/liboperand.a: calculator/operand/CMakeFiles/operand.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/genius/GBC/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library liboperand.a"
	cd /home/genius/GBC/src/calculator/operand && $(CMAKE_COMMAND) -P CMakeFiles/operand.dir/cmake_clean_target.cmake
	cd /home/genius/GBC/src/calculator/operand && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/operand.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
calculator/operand/CMakeFiles/operand.dir/build: calculator/operand/liboperand.a

.PHONY : calculator/operand/CMakeFiles/operand.dir/build

calculator/operand/CMakeFiles/operand.dir/requires: calculator/operand/CMakeFiles/operand.dir/RawElement.cpp.o.requires
calculator/operand/CMakeFiles/operand.dir/requires: calculator/operand/CMakeFiles/operand.dir/IntElement.cpp.o.requires
calculator/operand/CMakeFiles/operand.dir/requires: calculator/operand/CMakeFiles/operand.dir/FloatElement.cpp.o.requires

.PHONY : calculator/operand/CMakeFiles/operand.dir/requires

calculator/operand/CMakeFiles/operand.dir/clean:
	cd /home/genius/GBC/src/calculator/operand && $(CMAKE_COMMAND) -P CMakeFiles/operand.dir/cmake_clean.cmake
.PHONY : calculator/operand/CMakeFiles/operand.dir/clean

calculator/operand/CMakeFiles/operand.dir/depend:
	cd /home/genius/GBC/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/genius/GBC/src /home/genius/GBC/src/calculator/operand /home/genius/GBC/src /home/genius/GBC/src/calculator/operand /home/genius/GBC/src/calculator/operand/CMakeFiles/operand.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : calculator/operand/CMakeFiles/operand.dir/depend

