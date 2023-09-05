# Specify the minimum version for CMake
cmake_minimum_required(VERSION 3.5)

# Project's name
project(cudaPhysicsSimTests)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the Google Test's gtest library
add_subdirectory(/usr/src/gtest ${CMAKE_CURRENT_BINARY_DIR}/gtest)

# Add the executable for tests
add_executable(test_executable test_main.cpp)
target_link_libraries(test_executable gtest gtest_main)
