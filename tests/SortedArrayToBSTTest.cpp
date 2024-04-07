#include <catch2/catch_test_macros.hpp>

#include "SortedArrayToBST.hpp"
#include "SameTree.hpp"

TEST_CASE("SortedArrayToBST") {
    std::vector<int> nums1{};
    REQUIRE(sortedArrayToBST(nums1) == nullptr);

    std::vector<int> nums2{1};
    REQUIRE(isSameTree(sortedArrayToBST(nums2), new TreeNode(1)) == true);

    std::vector<int> nums3{1, 3};
    TreeNode *tn3 = new TreeNode(new TreeNode(1), 3, nullptr);
    REQUIRE(isSameTree(sortedArrayToBST(nums3), tn3) == true);
}
