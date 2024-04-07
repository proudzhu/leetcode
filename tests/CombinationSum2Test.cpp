#include <catch2/catch_test_macros.hpp>

#include "CombinationSum2.hpp"

TEST_CASE("Combination Sum 2") {
    int target = 8;
    std::vector<int> vec{10, 1, 2, 7, 6, 1, 5};
    std::vector<std::vector<int>> result{{1, 1, 6},
                                         {1, 2, 5},
                                         {1, 7},
                                         {2, 6}};
    auto ret = combinationSum2(vec, target);

    REQUIRE(ret == result);
}
