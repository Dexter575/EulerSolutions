# cmake version to be used
cmake_minimum_required(VERSION 2.8)

# project name
project(question)


# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# The following folder will be included
include_directories("${PROJECT_SOURCE_DIR}")


# include
include_directories( ./include ./src )

# target
add_executable( maximum_prime_factors ./src/main.cpp ./src/largest_prime_number_factors.h)

