#include <catch2/catch_test_macros.hpp>

#include "MissingNumber.hpp"

TEST_CASE("MissingNumber") {
	std::vector<int> nums1{0, 1, 3};
	REQUIRE(missingNumber(nums1) == 2);

	std::vector<int> nums2{2, 0};
	REQUIRE(missingNumber(nums2) == 1);
}
