#ifndef _LISTNODE_HPP
#define _LISTNODE_HPP

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *p) : val(x), next(p) {}
};

#endif
