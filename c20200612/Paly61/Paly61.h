//
// Created by 刘鹏 on 2020/6/12.
//

#ifndef LEETCODE_PALY61_H
#define LEETCODE_PALY61_H

#include <cstring>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Paly61 {
    ListNode* rotateRight(ListNode* head, int k);
};


#endif //LEETCODE_PALY61_H