cmake_minimum_required(VERSION 3.1.0)

project(LeetCode CXX)

set(CMAKE_CXX_STANDARD 20)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.4.0 # or a later release
)

FetchContent_MakeAvailable(Catch2)

include_directories(include)

file(GLOB LeetCode_SOURCE_FILE src/*.cpp)
file(GLOB LeetCode_TEST_FILE tests/*.cpp)

add_executable(Test ${LeetCode_SOURCE_FILE} ${LeetCode_TEST_FILE})
target_link_libraries(Test PRIVATE Catch2::Catch2WithMain)

include(CTest)
include(Catch)
catch_discover_tests(Test)
