
# tests/CMakeLists.txt

# Add the Google Test's gtest library
add_subdirectory(/usr/src/gtest ${CMAKE_CURRENT_BINARY_DIR}/gtest)

# Include directories (adjust the path as necessary)
include_directories("../src/core")
include_directories("../src/models")

# Add the executable for tests
add_executable(test_executable 
    test_main.cpp 
    test_free_fall_simulation.cpp
)

# Link the necessary libraries 
target_link_libraries(test_executable gtest gtest_main cudaPhysicsSimLib)
