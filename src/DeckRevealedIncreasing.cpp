#include <vector>
#include <deque>
#include <algorithm>
#include <catch2/catch_test_macros.hpp>

std::vector<int> deckRevealedIncreasing(std::vector<int>& deck)
{
    std::sort(std::begin(deck), std::end(deck), std::greater<int>());

    std::deque<int> ans;

    ans.push_back(deck[0]);

    for (uint32_t i = 1; i < deck.size(); i++) {
        ans.push_front(ans.back());
        ans.pop_back();
        ans.push_front(deck[i]);
    }

    return std::vector(std::begin(ans), std::end(ans));
}

TEST_CASE("deckRevealedIncreasing") {
    std::vector<int> in1 = {17,13,11,2,3,5,7};
    std::vector<int> out1 = {2,13,3,11,5,17,7};
	REQUIRE(deckRevealedIncreasing(in1) == out1);

    std::vector<int> in2 = {1,1000};
    std::vector<int> out2 = {1,1000};
    REQUIRE(deckRevealedIncreasing(in2) == out2);
}
