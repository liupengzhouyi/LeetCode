//
// Created by 刘鹏 on 2020/6/27.
//

#ifndef LEETCODE_PALY100_H
#define LEETCODE_PALY100_H
#include <iostream>
#include <string>

// Definition for a binary tree node.
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Paly100 {
public:
    bool isSameTree(TreeNode* p, TreeNode* q);

    void getTreeItemI(TreeNode *p);

    void getTreeItemII(TreeNode *p);

private:
    ::std::string str1;
    ::std::string str2;
};


#endif //LEETCODE_PALY100_H
