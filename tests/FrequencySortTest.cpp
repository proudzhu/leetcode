#include <catch2/catch_test_macros.hpp>

#include "FrequencySort.hpp"

TEST_CASE("FrequencySort") {
	std::vector<int> nums{1, 1, 2, 2, 2, 3};
    std::vector<int> result{3, 1, 1, 2, 2, 2};
	REQUIRE(frequencySort(nums) == result);
}
