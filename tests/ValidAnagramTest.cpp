#include "Catch/single_include/catch.hpp"

#include "ValidAnagram.hpp"

TEST_CASE("ValidAnagram") {
	REQUIRE(isAnagram(std::string("anagram"), std::string("nagaram")) == true);
	REQUIRE(isAnagram(std::string("rat"), std::string("cat")) == false);
}
