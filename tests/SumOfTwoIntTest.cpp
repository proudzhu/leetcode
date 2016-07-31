#include "Catch/single_include/catch.hpp"

#include "SumOfTwoInt.hpp"

TEST_CASE("Sum of Two Integers") {
    REQUIRE(getSum(2, 3) == (2 + 3));
}
