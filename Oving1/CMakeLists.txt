cmake_minimum_required(VERSION 3.21)
project(Oving1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Oving1 main.cpp)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/numbers.dat
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
