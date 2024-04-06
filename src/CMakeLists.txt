include_directories(${LeetCode_SOURCE_DIR}/include)

file(GLOB LeetCode_SOURCE_FILE *.cpp)

add_library(Solutions ${LeetCode_SOURCE_FILE})
