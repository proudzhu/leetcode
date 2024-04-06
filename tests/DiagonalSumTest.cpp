#include "catch.hpp"

#include "DiagonalSum.hpp"

TEST_CASE("DiagonalSum") {
    std::vector<std::vector<int>> mat1 = {{1,2,3},{4,5,6},{7,8,9}};
    REQUIRE(diagonalSum(mat1) == 25);

    std::vector<std::vector<int>> mat2 = {{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
    REQUIRE(diagonalSum(mat2) == 8);

    std::vector<std::vector<int>> mat3 = {{5}};
    REQUIRE(diagonalSum(mat3) == 5);
}
