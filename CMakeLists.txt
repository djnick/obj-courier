cmake_minimum_required(VERSION 3.17)
project(obj_courier)

set(CMAKE_CXX_STANDARD 14)

add_executable(obj_courier main.cpp model/datastructures/Edge.cpp model/datastructures/Edge.h model/datastructures/Graph.cpp model/datastructures/Graph.h model/datastructures/Routes.cpp model/datastructures/Routes.h model/datastructures/Trip.cpp model/datastructures/Trip.h)