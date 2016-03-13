#include "Catch/single_include/catch.hpp"

#include "PowerOfThree.hpp"

TEST_CASE("PowerOfThree") {
	REQUIRE(isPowerOfThree(1) == 1);
	REQUIRE(isPowerOfThree(2) == 0);
	REQUIRE(isPowerOfThree(3) == 1);
	REQUIRE(isPowerOfThree(6) == 0);
	REQUIRE(isPowerOfThree(9) == 1);
	REQUIRE(isPowerOfThree(27) == 1);
	REQUIRE(isPowerOfThree(81) == 1);
	REQUIRE(isPowerOfThree(1162261467) == 1);
}
