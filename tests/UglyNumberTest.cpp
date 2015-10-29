#include "Catch/single_include/catch.hpp"

#include "UglyNumber.hpp"

TEST_CASE("UglyNumber") {
	REQUIRE(isUgly(1) == true);
	REQUIRE(isUgly(2) == true);
	REQUIRE(isUgly(3) == true);
	REQUIRE(isUgly(4) == true);
	REQUIRE(isUgly(5) == true);
	REQUIRE(isUgly(6) == true);
	REQUIRE(isUgly(8) == true);
	REQUIRE(isUgly(14) == false);
}
