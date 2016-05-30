#include "ListNode.hpp"

ListNode* rotateRight(ListNode* head, int k)
{
    if (head == nullptr || head->next == nullptr || k == 0)
        return head;

    int len = 0;
    ListNode *tail = head;
    while (tail) {
        len++;
        if (tail->next)
            tail = tail->next;
        else
            break;
    }

    k = k % len;
    if (k == 0)
        return head;

    int i = len - k;
    ListNode *newTail = head;
    while (--i > 0) {
        if (newTail->next)
            newTail = newTail->next;
        else
            break;
    }

    if (newTail->next == nullptr)
        return head;

    ListNode *p = new ListNode(0);
    p->next = head;

    tail->next = p->next;
    p->next = newTail->next;
    newTail->next = nullptr;

    return p->next;
}
