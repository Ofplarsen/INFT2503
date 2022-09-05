cmake_minimum_required(VERSION 3.21)
project(Oving6)



set(CMAKE_CXX_STANDARD 14)

add_executable(Oving6 oppgave1.cpp)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(Oving6 PRIVATE Threads::Threads)