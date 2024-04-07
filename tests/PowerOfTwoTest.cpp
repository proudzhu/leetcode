#include <catch2/catch_test_macros.hpp>

#include "PowerOfTwo.hpp"

TEST_CASE("PowerOfTwo") {
	REQUIRE(isPowerOfTwo(1) == 1);
	REQUIRE(isPowerOfTwo(2) == 1);
	REQUIRE(isPowerOfTwo(3) == 0);
	REQUIRE(isPowerOfTwo(4) == 1);
	REQUIRE(isPowerOfTwo(8) == 1);
	REQUIRE(isPowerOfTwo(16) == 1);
	REQUIRE(isPowerOfTwo(32) == 1);
	REQUIRE(isPowerOfTwo(65536) == 1);
}
