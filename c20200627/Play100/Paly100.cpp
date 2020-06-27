//
// Created by 刘鹏 on 2020/6/27.
//

#include "Paly100.h"

bool Paly100::isSameTree(TreeNode *p, TreeNode *q) {
    if (p == NULL) {
        if (q == NULL) {
            return true;
        } else {
            return false;
        }
    } else {
        if (q == NULL) {
            return false;
        }
    }
    str1 = ::std::to_string(p->val);;
    str2 = ::std::to_string(q->val);;
    getTreeItemI(p);
    getTreeItemII(q);
    ::std::cout << str1 <<::std::endl;
    ::std::cout << str2 <<::std::endl;
    return str1 == str2;
}

void Paly100::getTreeItemI(TreeNode *p) {
    if (p->left != nullptr) {
        str1 = str1 + ::std::to_string(p->left->val);
        getTreeItemI(p->left);
    } else {
        str1 = str1 + " ";
    }
    if (p->right != nullptr) {
        str1 = str1 + ::std::to_string(p->right->val);
        getTreeItemI(p->right);
    } else {
        str1 = str1 + " ";
    }
};

void Paly100::getTreeItemII(TreeNode *p) {
    if (p->left != nullptr) {
        str2 = str2 + ::std::to_string(p->left->val);
        getTreeItemII(p->left);
    } else {
        str2 = str2 + " ";
    }
    if (p->right != nullptr) {
        str2 = str2 + ::std::to_string(p->right->val);
        getTreeItemII(p->right);
    }
    else {
        str2 = str2 + " ";
    }
};
