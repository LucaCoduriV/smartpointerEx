cmake_minimum_required(VERSION 3.20)
project(smartpointerEx)

set(CMAKE_CXX_STANDARD 17)

add_executable(smartpointerEx main.cpp Musician.hpp Band.hpp Musician.cpp Band.cpp)
