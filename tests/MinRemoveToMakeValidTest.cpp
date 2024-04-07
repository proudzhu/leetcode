#include <catch2/catch_test_macros.hpp>

#include "MinRemoveToMakeValid.hpp"

TEST_CASE("MinRemoveToMakeValid") {
    REQUIRE(minRemoveToMakeValid("lee(t(c)o)de)") == "lee(t(c)o)de");

    REQUIRE(minRemoveToMakeValid("a)b(c)d") == "ab(c)d");

    REQUIRE(minRemoveToMakeValid("))((") == "");
}
