include_directories(${LeetCode_SOURCE_DIR}/include)
include_directories(${LeetCode_SOURCE_DIR}/tests/Catch/single_include/catch2)

file(GLOB LeetCode_TEST_FILE *.cpp)

add_executable(Test ${LeetCode_TEST_FILE})

target_link_libraries(Test Solutions)
