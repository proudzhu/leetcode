#include "InvertBinaryTree.hpp"

TreeNode *invertTree(TreeNode *root)
{
    if (root == nullptr)
		return root;

	TreeNode *node = invertTree(root->left);
	root->left = invertTree(root->right);
	root->right = node;

	return root;
}
