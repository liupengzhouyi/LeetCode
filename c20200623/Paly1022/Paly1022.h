//
// Created by 刘鹏 on 2020/6/23.
//

#ifndef LEETCODE_PALY1022_H
#define LEETCODE_PALY1022_H

#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Paly1022 {
public:
    int sumRootToLeaf(TreeNode* root);
    void tempSumRootToLeaf(TreeNode* root, std::string number);
    int binaryToDecimal(std::string number);

private:
    long longNumber = 0;

};


#endif //LEETCODE_PALY1022_H
