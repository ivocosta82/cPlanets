cmake_minimum_required(VERSION 3.3)
project(GravityExperiment)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Planet.cpp Planet.h Vector.cpp Vector.h)
add_executable(GravityExperiment ${SOURCE_FILES})