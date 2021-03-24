/*
 * @lc app=leetcode.cn id=328 lang=cpp
 *
 * [328] 奇偶链表
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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr) return head;
        ListNode * aHead = new ListNode();
        ListNode * a = aHead;
        ListNode * bHead = new ListNode();
        ListNode * b = bHead;
        ListNode *link = head;
        bool key = true;
        while(link->next != nullptr)
        {
            if (key == true)
            {
                std::cout << "true: " << link->val << std::endl;
                ListNode * tem = new ListNode(link->val);
                a->next = tem;
                a = tem;
                key = false;
                link = link->next;
            }
            if (link->next != nullptr && key == false)
            {
                std::cout << "false: " << link->val << std::endl;
                ListNode * tem = new ListNode(link->val);
                b->next = tem;
                b = tem;
                key = true;
                if (link->next != nullptr) {
                    link = link->next;
                }
            }
        }
        std::cout << link->val << std::endl;
        if (key == true)
        {
            ListNode * tem = new ListNode(link->val);
            a->next = tem;
            a = tem;
        }
        if (key == false)
        {
            ListNode * tem = new ListNode(link->val);
            b->next = tem;
            b = tem;
        }
        ListNode *temp = aHead->next;
        while(temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = bHead->next;
        return aHead->next;
    }
};
// @lc code=end

