# This file is main CMakeLists.txt in src directory

CMAKE_MINIMUM_REQUIRED(VERSION 3.5.2) # Or version 2.8
PROJECT(make_Calculator) # project naming "make_calculator"
MESSAGE(${CMAKE_PROJECT_NAME})
ADD_COMPILE_OPTIONS(-g -Wall) # includes debugging purpose and alerts all messages
set(CMAKE_VERBOSE_MAKEFILE true) # prints build command on display
set(CMAKE_BUILD_TYPE Debug)
file(GLOB SOURCES "src/*.cpp")
set(CMAKE_INSTALL_PREFIX ../bin)
set(LIBRARY_OUTPUT_DIRECTORY ../lib)
ADD_SUBDIRECTORY(./calculator ../bin) 
