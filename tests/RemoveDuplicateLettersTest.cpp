#include <catch2/catch_test_macros.hpp>

#include "RemoveDuplicateLetters.hpp"

TEST_CASE("RemoveDuplicateLetters") {
	REQUIRE(removeDuplicateLetters(std::string("bcabc")) ==
			std::string("abc"));
	REQUIRE(removeDuplicateLetters(std::string("cbacdcbc")) ==
			std::string("acdb"));
}
