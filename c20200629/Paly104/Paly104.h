//
// Created by 刘鹏 on 2020/6/29.
//

#ifndef LEETCODE_PALY104_H
#define LEETCODE_PALY104_H
#include <iostream>

struct TreeNode104 {
     int val;
     TreeNode104 *left;
     TreeNode104 *right;
     TreeNode104(int x) : val(x), left(NULL), right(NULL) {}
 };

class Paly104 {
public:
    int max = 0;

    int maxDepth(TreeNode104* root);

    void maxDepth1(TreeNode104* root, int d);

};


#endif //LEETCODE_PALY104_H
