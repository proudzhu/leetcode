#include "Catch/single_include/catch.hpp"

#include "CombinationSum4.hpp"

TEST_CASE("Combination Sum 4") {
    int target = 4;
    std::vector<int> vec{1, 2, 3};
    REQUIRE(combinationSum4(vec, target) == 7);
}
