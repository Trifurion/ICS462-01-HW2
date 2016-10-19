cmake_minimum_required(VERSION 3.6)
project(ICS462_01_HW2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(ICS462_01_HW2 ${SOURCE_FILES})