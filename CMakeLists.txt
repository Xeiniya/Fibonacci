cmake_minimum_required(VERSION 3.10)
project(FibonacciProject CXX)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(Fibonacci main.cpp)

enable_testing()
add_subdirectory(tests)