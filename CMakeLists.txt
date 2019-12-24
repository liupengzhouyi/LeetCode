cmake_minimum_required(VERSION 3.15)
project(LeetCode)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCES
        day01/paly.cpp
        day01/paly.h
        day02/paly.cpp
        001addTwoNumber/Node.cpp
        001addTwoNumber/Node.h
        001addTwoNumber/AddTownumber.cpp
        001addTwoNumber/AddTownumber.h
        )

add_executable(LeetCode main.cpp ${SOURCES_FILES} ${SOURCES} )

