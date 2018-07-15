#include "catch.hpp"

#include "UglyNumber2.hpp"

TEST_CASE("UglyNumber2") {
	REQUIRE(nthUglyNumber(1) == 1);
	REQUIRE(nthUglyNumber(2) == 2);
	REQUIRE(nthUglyNumber(3) == 3);
	REQUIRE(nthUglyNumber(4) == 4);
	REQUIRE(nthUglyNumber(5) == 5);
	REQUIRE(nthUglyNumber(6) == 6);
	REQUIRE(nthUglyNumber(7) == 8);
	REQUIRE(nthUglyNumber(8) == 9);
	REQUIRE(nthUglyNumber(9) == 10);
	REQUIRE(nthUglyNumber(10) == 12);
}
