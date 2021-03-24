/*
 * @lc app=leetcode.cn id=965 lang=cpp
 *
 * [965] 单值二叉树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    std::vector<int> l = std::vector<int>();

    bool isUnivalTree(TreeNode* root) {
        isO(root);
        for (int i=1;i<l.size();i++)
        {
            if (l.at(0) != l.at(i))
            {
                return false;
            }
        }
        return true;
    }

    void isO(TreeNode* root)
    {
        l.push_back(root->val);
        if (root->left != nullptr)
        {
            isO(root->left);
        }
        if (root->right != nullptr)
        {
            isO(root->right);
        }
    }
};
// @lc code=end

