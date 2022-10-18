cmake_minimum_required(VERSION 3.22)

project(lab3)

set(SOURCE_EXE file.cpp)

set(SOURCE_LIB sum.cpp)

add_library(sum STATIC ${SOURCE_LIB})

add_executable(file ${SOURCE_EXE})

target_link_libraries(file sum)
