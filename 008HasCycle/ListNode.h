//
// Created by 刘鹏 on 2020/1/19.
//

#ifndef LEETCODE_LISTNODE_H
#define LEETCODE_LISTNODE_H


#include <cstdio>

//Definition for singly-linked list.
struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
};

#endif //LEETCODE_LISTNODE_H
