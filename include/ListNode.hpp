#ifndef _LISTNODE_HPP
#define _LISTNODE_HPP

#include <vector>

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *p) : val(x), next(p) {}
};

ListNode* fromVector(std::vector<int> vec);

bool compareList(ListNode *l, ListNode *p);

#endif
