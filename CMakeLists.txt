cmake_minimum_required(VERSION 3.28)
project(Foo_et_al)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(Foo_et_al src/main.cpp src/sphere/sphere.cpp
        src/sphere/utils.cpp)
