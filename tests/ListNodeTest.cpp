#include "Catch/single_include/catch.hpp"

#include "ListNode.hpp"

TEST_CASE("ListNode") {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = vec1;
    std::vector<int> vec3 = {1, 2, 3, 4, 5, 6};
    ListNode *l1 = fromVector(vec1);
    ListNode *l2 = fromVector(vec2);
    ListNode *l3 = fromVector(vec3);

    std::string output{"HEAD -> 1 -> 2 -> 3 -> 4 -> 5 -> END\n"};
    std::stringstream out;
    std::string sout;

    REQUIRE(compareList(l1, l2) == true);
    REQUIRE(compareList(l1, l3) == false);

    printList(out, l1);
    std::cout << out.rdbuf();
}
