cmake_minimum_required(VERSION 3.28)
project(Tutorial)

add_executable(hello hello.cpp)
target_compile_options(hello PRIVATE -std=c++20 -Wextra)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")
# set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
