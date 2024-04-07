#include <catch2/catch_test_macros.hpp>

#include "CombinationSum.hpp"

TEST_CASE("Combination Sum") {
    int target = 7;
    std::vector<int> vec{2, 3, 6, 7};
    std::vector<std::vector<int>> result{{2, 2, 3}, {7}};
    auto ret = combinationSum(vec, target);

    REQUIRE(ret == result);
}
