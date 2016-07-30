#include "Catch/single_include/catch.hpp"

#include <iostream>
#include "Combine.hpp"

TEST_CASE("Combine") {
    auto vec = combine(13, 10);
    /*
    for (auto v : vec) {
        for (auto i : v)
            std::cout << i << ", ";
        std::cout << std::endl;
    }
    */

    REQUIRE(1);
}
