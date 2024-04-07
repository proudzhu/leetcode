#include <catch2/catch_test_macros.hpp>

#include "TwoSum.hpp"

TEST_CASE("TwoSum") {
	std::vector<int> nums{2, 7, 11, 15};
	int target = 9;
	std::vector<int> ans{1, 2};
	REQUIRE(twoSum(nums, target) == ans);
}
