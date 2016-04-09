#include "DeleteNode.hpp"

void deleteNode(ListNode *node)
{
	*node = *node->next;
}
