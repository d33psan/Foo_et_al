cmake_minimum_required(VERSION 3.10)
project(Foo_et_al)

set(CMAKE_CXX_STANDARD 11)

# Include directories
include_directories(include)

# Source files
set(SOURCES src/sphere/sphere.cpp src/sphere/utils.cpp)

# Create a library from the source files
add_library(sphere_lib ${SOURCES})

# Add the main executable
add_executable(Foo_et_al src/main.cpp)

# Link the library to the main executable
target_link_libraries(Foo_et_al sphere_lib)

# Google Test
include(FetchContent)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/release-1.11.0.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

# Add test executable
add_executable(runTests tests/sphere/sphereTest.cpp)

# Link test executable against Google Test and the library
target_link_libraries(runTests gtest gtest_main sphere_lib)

# Add tests
add_test(NAME runTests COMMAND runTests)