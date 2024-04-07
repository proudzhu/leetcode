#include <string>
#include <deque>
#include <catch2/catch_test_macros.hpp>

std::string makeGood(std::string s)
{
    std::deque<char> k;

    for (auto c: s) {
        if (!k.empty() && std::abs(c - k.back()) == 32) {
            k.pop_back();
        } else {
            k.push_back(c);
        }
    }

    return std::string(std::begin(k), std::end(k));
}

TEST_CASE("MakeGood") {
	REQUIRE(makeGood("leEeetcode") == "leetcode");
    REQUIRE(makeGood("abBAcC") == "");
    REQUIRE(makeGood("s") == "s");
}
