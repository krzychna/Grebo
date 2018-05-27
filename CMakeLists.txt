cmake_minimum_required(VERSION 3.9)
project(Grebo)

set(CMAKE_CXX_STANDARD 11)

add_executable(Grebo main.cpp furniture.h furniture.cpp chair.h chair.cpp sofa.cpp sofa.h Coach.cpp Coach.h Room.cpp Room.h)
