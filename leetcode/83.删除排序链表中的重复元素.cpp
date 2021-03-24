/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
 */

// @lc code=start
// Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return head;
        if (head->next == nullptr) return head;
        ListNode *temp = head;
        ListNode *returnList = new ListNode();
        ListNode *last = nullptr;
        while(temp->next != nullptr)
        {
            if (last == nullptr)
            {
                ListNode * node = new ListNode(temp->val);
                returnList->next = node;
                last = node;
            }
            else 
            {
                if (last->val != temp->val)
                {
                    ListNode * node = new ListNode(temp->val);
                    last->next = node;
                    last = last->next;
                }
            }
            temp = temp->next;
        }
        if (last->val != temp->val)
        {
            ListNode *node = new ListNode(temp->val);
            last->next = node;
            last = last->next;
        }

        returnList = returnList->next;
        return returnList;
    }
};
// @lc code=end

