#include "ReverseKGroup.hpp"

ListNode* getNextK(ListNode *head, int k)
{
    k--;
    while (k--) {
        if (head)
            head = head->next;
    }

    return head;
}

ListNode* reverseList(ListNode* head, ListNode *tail)
{
    ListNode *fake = new ListNode(0);
    fake->next = head;
    ListNode *step0 = head;
    ListNode *step1 = step0->next;

    while (step0 && step1 && step1 != tail) {
        step0->next = step1->next;
        step1->next = fake->next;
        fake->next = step1;
        step1 = step0->next;
    }

    return fake->next;
}

ListNode* reverseKGroup(ListNode* head, int k)
{
    ListNode *fake = new ListNode(0);
    fake->next = head;
    ListNode *step0 = head;
    ListNode *step1 = getNextK(step0, k);
    ListNode *subfake = fake;

    while (1) {
        if (step1 == nullptr)
            break;
        else {
            ListNode *end = step1->next;
            ListNode *tmp = reverseList(step0, end);
            subfake->next = tmp;
            subfake = step0;
            step0 = end;
            step1 = getNextK(step0, k);
            //printList(std::cout, fake->next);
            //std::cout << std::endl;
        }
    }

    return fake->next;
}
