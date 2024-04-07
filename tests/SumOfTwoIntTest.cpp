#include <catch2/catch_test_macros.hpp>

#include "SumOfTwoInt.hpp"

TEST_CASE("Sum of Two Integers") {
    REQUIRE(getSum(2, 3) == (2 + 3));
}
