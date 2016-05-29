#include <vector>
#include "ListNode.hpp"

ListNode* fromVector(std::vector<int> vec)
{
    ListNode *head = new ListNode(0);
    ListNode *curr = head;
    for (auto i : vec) {
        ListNode *tmp = new ListNode(i);
        curr->next = tmp;
        curr = curr->next;
    }

    return head->next;
}

bool compareList(ListNode *l, ListNode *p)
{
    while (1) {
        if (l == nullptr && p == nullptr)
            return true;

        if (l == nullptr && p)
            return false;

        if (l && p == nullptr)
            return false;

        // l && p
        if (l->val == p->val) {
            l = l->next;
            p = p->next;
        } else
            return false;
    }

    return true;
}
