//
// Created by 刘鹏 on 2020/6/29.
//

#include "Paly104.h"

void Paly104::maxDepth1(TreeNode104 *root, int d) {
    if (root->left != nullptr) maxDepth1(root->left, d+1);
    if (root->right != nullptr) maxDepth1(root->right, d+1);
    if (root->left == nullptr && root->right == nullptr) max = (max > d) ? max : d;
}

int Paly104::maxDepth(TreeNode104 *root) {
    if (root == nullptr) return 0;
    maxDepth1(root, 1);
    return max;
}
