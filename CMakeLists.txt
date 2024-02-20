cmake_minimum_required(VERSION 3.28)
project(Tutorial)

# external should be created first?
add_subdirectory(src/)
add_subdirectory(external/)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")
# set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
