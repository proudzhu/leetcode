#include "catch.hpp"

#include "AdditiveNumber.hpp"

TEST_CASE("AdditiveNumber") {
    REQUIRE(isAdditiveNumber("123") == true);
	REQUIRE(isAdditiveNumber("112358") == true);
	REQUIRE(isAdditiveNumber("199100199") == true);
    REQUIRE(isAdditiveNumber("19910011992") == false);
    REQUIRE(isAdditiveNumber("221474836472147483649") == true);
}
