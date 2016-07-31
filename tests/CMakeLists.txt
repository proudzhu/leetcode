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
	LowestCommonAncestorTest.cpp
	PowerOfTwoTest.cpp
	AdditiveNumberTest.cpp
    ListNodeTest.cpp
    ReverseKGroupTest.cpp
    RotateRightTest.cpp
    CalculateMinimumHPTest.cpp
    SortedArrayToBSTTest.cpp
    WordSearchTest.cpp
    MergeIntervalsTest.cpp
    CombineTest.cpp
    CombinationSumTest.cpp
    CombinationSum2Test.cpp
    CombinationSum3Test.cpp
	)

target_link_libraries(Test Solutions)
