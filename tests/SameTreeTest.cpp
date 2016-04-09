#include "Catch/single_include/catch.hpp"

#include <memory>
#include "SameTree.hpp"

TEST_CASE("SameTree") {
	TreeNode *p = new TreeNode(0);
	TreeNode *q = new TreeNode(0);

	REQUIRE(isSameTree(p, q) == true);
}
