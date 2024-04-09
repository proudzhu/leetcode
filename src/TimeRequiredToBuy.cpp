#include <vector>
#include <catch2/catch_test_macros.hpp>

int timeRequiredToBuy(std::vector<int>& tickets, int k) {
    uint32_t tick = 0;

    for (uint32_t i = 0; i < k; i++) {
        tick += std::min(tickets[i], tickets[k]);
    }
    tick += tickets[k];
    for (uint32_t i = k + 1; i < tickets.size(); i++) {
        tick += std::min(tickets[i], tickets[k] - 1);
    }
    return tick;
}

TEST_CASE("TimeRequiredToBuy") {
    std::vector<int> tickets1 = {2,3,2};
	REQUIRE(timeRequiredToBuy(tickets1, 2) == 6);

    std::vector<int> tickets2 = {5,1,1,1};
    REQUIRE(timeRequiredToBuy(tickets2, 0) == 8);
}
