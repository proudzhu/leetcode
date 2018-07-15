#include "catch.hpp"

#include "ReverseKGroup.hpp"

TEST_CASE("ReverseKGroup") {
    std::vector<int> vec1{1, 2, 3, 4, 5};
    std::vector<int> vec2{2, 1, 4, 3, 5};
    std::vector<int> vec3{3, 2, 1, 4, 5};
    ListNode *l1 = fromVector(vec1);
    ListNode *l2 = fromVector(vec2);
    ListNode *l3 = fromVector(vec3);

    REQUIRE(compareList(reverseKGroup(l1, 2), l2) == true);

    l1 = fromVector(vec1);
    REQUIRE(compareList(reverseKGroup(l1, 3), l3) == true);

    ListNode *l4 = fromVector(std::vector<int>{1, 2});
    ListNode *l5 = fromVector(std::vector<int>{2, 1});
    REQUIRE(compareList(reverseKGroup(l4, 2), l5) == true);
}
