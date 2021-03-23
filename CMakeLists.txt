cmake_minimum_required(VERSION 3.10)
project(graph)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(main
        graph.cpp
        graph.h
        main.cpp)
