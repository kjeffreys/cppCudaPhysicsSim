cmake_minimum_required(VERSION 3.5)
project(cudaPhysicsSim)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the main source directory
# add_subdirectory(src)

# If building tests, add the tests subdirectory
option(BUILD_TESTS "Build tests" ON)
if(BUILD_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()