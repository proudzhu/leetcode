include_directories(${LeetCode_SOURCE_DIR}/include)

add_executable(Test main.cpp
	TwoSumTest.cpp
	FindDuplicateTest.cpp
	MedianFinderTest.cpp
	MoveZeroesTest.cpp
	UglyNumberTest.cpp
	UglyNumber2Test.cpp
	MissingNumberTest.cpp
	AddDigitsTest.cpp
	NimGameTest.cpp
	WordPatternTest.cpp
	ValidAnagramTest.cpp
	PowerOfThreeTest.cpp
	BinaryTreePathsTest.cpp
	RemoveDuplicateLettersTest.cpp
	SameTreeTest.cpp
	InvertBinaryTreeTest.cpp
	)

target_link_libraries(Test Solutions)
