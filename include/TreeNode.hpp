#ifndef _TREENODE_HPP
#define _TREENODE_HPP

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x):val(x), left(nullptr), right(nullptr) {}
	TreeNode(TreeNode *p, int x, TreeNode *q):val(x), left(p), right(q) {}
};

#endif
