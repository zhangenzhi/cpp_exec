set(CMAKE_CXX_STANDARD 11)
cmake_minimum_required(VERSION 3.14)

project(cpp_test)

find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIRS})

add_executable(test main.cc utils.cc eigen.cc)
