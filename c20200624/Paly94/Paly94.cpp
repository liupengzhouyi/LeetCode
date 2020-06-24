//
// Created by 刘鹏 on 2020/6/24.
//

#include "Paly94.h"

std::vector<int> Paly94::inorderTraversal(TreeNode *root) {
    pp(root);
    return p;
}

void Paly94::pp(TreeNode *root) {
    if (root == NULL) return;
    if (root->left != NULL) {
        inorderTraversal(root->left);
    }
    p.push_back(root->val);
    if (root->right != NULL) {
        inorderTraversal(root->right);
    }
}
