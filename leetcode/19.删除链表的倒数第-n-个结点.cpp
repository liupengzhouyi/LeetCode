#include<iostream>
#include<string>

using namespace std;

/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 */
// struct ListNode {
//      int val;
//      ListNode *next;

//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int listLength = 0;
        ListNode *temp = head;
        while(temp->next != nullptr) 
        {
            listLength = listLength + 1;
            temp = temp->next;
        }
        listLength = listLength + 1;
        std::cout << "length:" << listLength << std::endl;
        temp = head;
        int index = 0;
        if (n == listLength) {
            head = head->next;
        } else {
            n = n + 1;
            for (int i=listLength; i>n; i--) {
                std::cout << i << ": " << temp->val << std::endl;
                temp = temp->next;
            }
            std::cout << "delete p: " << temp->val << std::endl;
            if (temp->next != nullptr) {
                std::cout << "find delete node!" << std::endl;
                ListNode *deleteNode = temp->next;
                if (deleteNode->next != nullptr) {
                    std::cout << "node link next'next node" << std::endl;
                    temp->next = deleteNode->next;
                } else {
                    temp->next = nullptr;
                }
                std::cout << "delete node!" << std::endl;
                // delete(deleteNode);
            } else {

            }
        }
        // temp = head;
        // while(temp->next != nullptr) 
        // {
        //     std::cout << temp->val << std::endl;
        //     temp = temp->next;
        // }
        // std::cout << temp->val << std::endl;
        return head;
    }
};
// @lc code=end

