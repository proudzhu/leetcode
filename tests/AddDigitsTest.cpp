#include "catch.hpp"

#include "AddDigits.hpp"

TEST_CASE("AddDigits") {
	REQUIRE(addDigits(17) == 8);
	REQUIRE(addDigits(1853) == 8);
}
