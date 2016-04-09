#include "MergeTwoLists.hpp"

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
	ListNode *head = new ListNode(0);
	ListNode *curr = head;

	while (l1 && l2) {
		if (l1->val < l2->val) {
			curr->next = l1;
			l1 = l1->next;
			curr = curr->next;
		} else {
			curr->next = l2;
			l2 = l2->next;
			curr = curr->next;
		}
	}

	if (l1)
		curr->next = l1;

	if (l2)
		curr->next = l2;

	return head->next;
}
