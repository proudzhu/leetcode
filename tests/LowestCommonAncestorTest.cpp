#include <catch2/catch_test_macros.hpp>

#include <memory>
#include "TreeNode.hpp"
#include "LowestCommonAncestor.hpp"

TEST_CASE("LowestCommonAncestor") {
	TreeNode *root = new TreeNode(
						new TreeNode(
							new TreeNode(0),
							2,
							new TreeNode(
								new TreeNode(3),
								4,
								new TreeNode(5)
							)
						),
						6,
						new TreeNode(
							new TreeNode(7),
							8,
							new TreeNode(9)
						)
				  );
	TreeNode *p = new TreeNode(2);
	TreeNode *q = new TreeNode(8);
	TreeNode *result = lowestCommonAncestor(root, p, q);

	REQUIRE(result->val == 6);

	q->val = 4;
	result = lowestCommonAncestor(root, p, q);
	REQUIRE(result->val == 2);
}
