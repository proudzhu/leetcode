#include "Catch/single_include/catch.hpp"

#include "TwoSum.hpp"

TEST_CASE("TwoSum") {
	TwoSum s;

	vector<int> nums{2, 7, 11, 15};
	int target = 9;
	vector<int> ans{1, 2};
	REQUIRE(s.twoSum(nums, target) == ans);
}
