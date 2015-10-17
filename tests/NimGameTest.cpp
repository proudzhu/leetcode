#include "Catch/single_include/catch.hpp"

#include "NimGame.hpp"

TEST_CASE("NimGame") {
	REQUIRE(canWinNim(1) == 1);
	REQUIRE(canWinNim(2) == 1);
	REQUIRE(canWinNim(3) == 1);
	REQUIRE(canWinNim(4) == 0);
	REQUIRE(canWinNim(5) == 1);
	REQUIRE(canWinNim(8) == 0);
}
