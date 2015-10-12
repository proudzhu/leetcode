#include "Catch/single_include/catch.hpp"

#include "FindDuplicate.hpp"

TEST_CASE("FindDuplicate") {
	vector<int> nums{1, 2, 3, 3};
	REQUIRE(findDuplicate(nums) == 3);
}
