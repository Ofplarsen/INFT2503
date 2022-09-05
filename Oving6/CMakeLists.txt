cmake_minimum_required(VERSION 3.21)
project(Oving6)



set(CMAKE_CXX_STANDARD 14)

add_executable(Oving6 oppgave1.cpp)
add_executable(Oppgave2 oppgave2.cpp)
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(Oppgave2 PRIVATE Threads::Threads)