/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) return head;
        if (head->next == nullptr) return head;
        else {
            ListNode *link = head;
            ListNode *temp = new ListNode(link->val);
            temp->next = nullptr;
            link = link->next;
            while(link->next != nullptr)
            {
                ListNode *t = new ListNode(link->val);
                t->next = temp;
                temp = t;
                link = link->next;
            }
            ListNode *t = new ListNode(link->val);
            t->next = temp;
            temp = t;
            return temp;
        }
    }
};
// @lc code=end

