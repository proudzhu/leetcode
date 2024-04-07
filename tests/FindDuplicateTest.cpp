#include <catch2/catch_test_macros.hpp>

#include "FindDuplicate.hpp"

TEST_CASE("FindDuplicate") {
	std::vector<int> nums{1, 2, 3, 3};
	REQUIRE(findDuplicate(nums) == 3);
}
