cmake_minimum_required(VERSION 3.15)
project(LeetCode)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCES
        001addTwoNumber/Node.cpp
        001addTwoNumber/Node.h
        001addTwoNumber/AddTownumber.cpp
        001addTwoNumber/AddTownumber.h
        aotu/test.cpp
        aotu/test.h
        002addTowNumberII/AddTowNumberII.cpp
        002addTowNumberII/AddTowNumberII.h
        )

add_executable(LeetCode main.cpp ${SOURCES_FILES} ${SOURCES} )

