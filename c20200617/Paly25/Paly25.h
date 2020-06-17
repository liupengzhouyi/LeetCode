//
// Created by 刘鹏 on 2020/6/17.
//

#ifndef LEETCODE_PALY25_H
#define LEETCODE_PALY25_H
#include <iostream>

struct ListNode25 {
    int val;
    ListNode25 *next;
    ListNode25(int x) : val(x), next(NULL) {}
};

class Paly25 {
public:
    ListNode25* reverseKGroup(ListNode25* head, int k);

};


#endif //LEETCODE_PALY25_H
