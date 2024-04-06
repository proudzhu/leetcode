include_directories(${LeetCode_SOURCE_DIR}/include)
include_directories(${LeetCode_SOURCE_DIR}/tests/Catch/single_include/catch2)

file(GLOB LeetCode_SOURCE_FILE *.cpp)

add_library(Solutions ${LeetCode_SOURCE_FILE})
