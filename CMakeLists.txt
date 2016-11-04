cmake_minimum_required(VERSION 3.4)
project(tutorialspoint_cpp_stl)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES code/main.cpp code/array_at.cpp code/array_back.cpp code/array_begin.cpp code/array_cbegin.cpp)
add_executable(tutorialspoint_cpp_stl ${SOURCE_FILES})
add_executable(main code/main.cpp)
add_executable(array_at code/array_at.cpp)
add_executable(array_back code/array_back.cpp)
add_executable(array_begin code/array_begin.cpp)
add_executable(array_cbegin code/array_cbegin.cpp)