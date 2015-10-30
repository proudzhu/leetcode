#include "Catch/single_include/catch.hpp"

#include "NimGame.hpp"

TEST_CASE("NimGame") {
	REQUIRE(canWinNim(1) == true);
	REQUIRE(canWinNim(2) == true);
	REQUIRE(canWinNim(3) == true);
	REQUIRE(canWinNim(4) == false);
	REQUIRE(canWinNim(5) == true);
	REQUIRE(canWinNim(8) == false);
}
