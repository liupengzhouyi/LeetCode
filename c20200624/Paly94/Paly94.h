//
// Created by 刘鹏 on 2020/6/24.
//

#ifndef LEETCODE_PALY94_H
#define LEETCODE_PALY94_H
#include <vector>
#include <iostream>
/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Paly94 {
public:
    std::vector<int> inorderTraversal(TreeNode* root);

    void pp(TreeNode* root);

private:
    std::vector<int> p;
};


#endif //LEETCODE_PALY94_H
