cmake_minimum_required(VERSION 3.0)

set(CMAKE_BUILD_TYPE Debufg)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

project(lab)

add_executable(
    program
    main.cpp
    Slownik.cpp
)