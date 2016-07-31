#include "Catch/single_include/catch.hpp"

#include "CombinationSum3.hpp"

TEST_CASE("Combination Sum 3") {
    std::vector<std::vector<int>> result{{1, 2, 6},
                                         {1, 3, 5},
                                         {2, 3, 4}};
    auto ret = combinationSum3(3, 9);

    REQUIRE(ret == result);
}
