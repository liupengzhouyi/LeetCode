//
// Created by 刘鹏 on 2020/1/19.
//

#include "HasCycle.h"

bool HasCycle::hasCycle(ListNode *head) {
    if (head == NULL) {
        return false;
    }
    ListNode * p1 = head;
    ListNode * p2 = head;
    while (p1 != NULL && p2 != NULL && p2->next != NULL) {
        p1 = p1->next;
        p2 = p2->next->next;
        if (p1 == p2) {
            return true;
        }
    }
    return false;
}
