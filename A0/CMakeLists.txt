cmake_minimum_required(VERSION 3.10)
project(Transformation)

set(CMAKE_CXX_STANDARD 17)

list(APPEND CMAKE_PREFIX_PATH "C:/Library/eigen/build")

find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})

add_executable(Transformation main.cpp)
target_link_libraries(Transformation Eigen3::Eigen)