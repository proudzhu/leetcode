#include <catch2/catch_test_macros.hpp>

#include "CalculateMinimumHP.hpp"

TEST_CASE("CalculateMinimumHP") {
    std::vector<std::vector<int>> matrix1(1, std::vector<int>(1, 0));
    REQUIRE(calculateMinimumHP(matrix1) == 1);

    std::vector<std::vector<int>> matrix2{std::vector<int>{-2,-3,3},
                                          std::vector<int>{-5,-10,1},
                                          std::vector<int>{10,30,-5}};
    REQUIRE(calculateMinimumHP(matrix2) == 7);
}
