cmake_minimum_required(VERSION 3.5)
project(Grafy)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Node.cpp Node.h)
add_executable(Grafy ${SOURCE_FILES})