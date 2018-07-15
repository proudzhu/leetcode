#include "catch.hpp"

#include <memory>
#include "SameTree.hpp"
#include "InvertBinaryTree.hpp"

TEST_CASE("InvertBinaryTree") {
	TreeNode *p = new TreeNode(
						new TreeNode(
							new TreeNode(1),
							2,
							new TreeNode(3)
						),
						4,
						new TreeNode(
							new TreeNode(6),
							7,
							new TreeNode(9)
						)
				  );
	TreeNode *q = new TreeNode(
						new TreeNode(
							new TreeNode(9),
							7,
							new TreeNode(6)
						),
						4,
						new TreeNode(
							new TreeNode(3),
							2,
							new TreeNode(1)
						)
				  );

	REQUIRE(isSameTree(invertTree(p), q) == true);
}
