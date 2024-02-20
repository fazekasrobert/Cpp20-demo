cmake_minimum_required(VERSION 3.28)
project(Tutorial)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

add_subdirectory(src/)
add_subdirectory(external/)
add_subdirectory(tests/)
