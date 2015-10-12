include_directories(${LeetCode_SOURCE_DIR}/include)

add_executable(Test main.cpp
	TwoSumTest.cpp
	)

target_link_libraries(Test Solutions)
