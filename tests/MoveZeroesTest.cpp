#include "Catch/single_include/catch.hpp"

#include "MoveZeroes.hpp"

TEST_CASE("MoveZeroes") {
	std::vector<int> nums{0, 1, 0, 3, 12};
	std::vector<int> result{1, 3, 12, 0, 0};
	moveZeroes(nums);
	REQUIRE(nums == result);
}
