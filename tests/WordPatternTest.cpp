#include "Catch/single_include/catch.hpp"

#include "WordPattern.hpp"

TEST_CASE("WordPattern") {
	REQUIRE(wordPattern("abba", "dog cat cat dog") == true);
	REQUIRE(wordPattern("abba", "dog cat cat fish") == false);
	REQUIRE(wordPattern("aaaa", "dog cat cat dog") == false);
	REQUIRE(wordPattern("abba", "dog dog dog dog") == false);
}
