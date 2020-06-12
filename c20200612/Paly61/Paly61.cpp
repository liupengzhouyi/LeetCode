//
// Created by 刘鹏 on 2020/6/12.
//

#include "Paly61.h"

ListNode *Paly61::rotateRight(ListNode *head, int k) {
    if (head == NULL) return NULL;
    if (head->next == NULL) return head;
    auto number = 1;
    ListNode* templ = head;
    while(templ->next != NULL) {
        number = number + 1;
        templ = templ->next;
    }
    if (k != 0) k = k % number;
    for (int i=0; i<k; i++) {
        ListNode* temp = head;
        ListNode* beforTemp = head;
        while(temp->next != NULL) {
            beforTemp = temp;
            temp = temp->next;
        }
        beforTemp->next = NULL;
        temp->next = head;
        head = temp;
    }
    return head;
}
