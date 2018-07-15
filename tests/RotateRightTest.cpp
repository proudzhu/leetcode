#include "catch.hpp"

#include "RotateRight.hpp"

TEST_CASE("RotateRight") {
    std::vector<int> vec1{1, 2, 3, 4, 5};
    std::vector<int> vec2{4, 5, 1, 2, 3};
    ListNode *l1 = fromVector(vec1);
    ListNode *l2 = fromVector(vec2);

    REQUIRE(compareList(rotateRight(l1, 2), l2) == true);

    std::vector<int> vec3{1, 2};
    std::vector<int> vec4{2, 1};
    ListNode *l3 = fromVector(vec3);
    ListNode *l4 = fromVector(vec4);
    REQUIRE(compareList(rotateRight(l3, 1), l4) == true);
}
