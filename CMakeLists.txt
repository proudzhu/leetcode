cmake_minimum_required(VERSION 3.1.0)

project(LeetCode CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(src)
add_subdirectory(tests)

enable_testing()
add_test(NAME RunTests COMMAND Test)
