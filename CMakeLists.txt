cmake_minimum_required(VERSION 3.20)
project(GraphStructure C)

set(CMAKE_C_STANDARD 11)
include_directories(includes)
link_directories(lib)
link_libraries(libBasicDataStructure.a)

add_executable(GraphStructure main.c)
