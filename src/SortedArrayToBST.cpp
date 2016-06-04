#include "SortedArrayToBST.hpp"

TreeNode* sortedArrayToBST(std::vector<int>& nums)
{
    int size = nums.size();

    if (size == 0)
        return nullptr;

    if (size == 1)
        return new TreeNode(nums[0]);

    std::vector<int> left = std::vector<int>(nums.begin(), nums.begin() + size / 2);
    std::vector<int> right;
    if (size  == 2)
        right = std::vector<int>();
    else
        right = std::vector<int>(nums.begin() + size / 2 + 1, nums.end());

    TreeNode *root = new TreeNode(nums[size / 2]);
    root->left = sortedArrayToBST(left);
    root->right = sortedArrayToBST(right);

    return root;
}
