//
// Created by 刘鹏 on 2020/6/23.
//

#include "Paly1022.h"

int Paly1022::sumRootToLeaf(TreeNode *root) {
    std::string number = std::to_string(root->val);
    this->tempSumRootToLeaf(root, number);
    return this->longNumber;
}

int Paly1022::binaryToDecimal(std::string number) {
    return stoi(number, nullptr, 2);
}

void Paly1022::tempSumRootToLeaf(TreeNode *root, std::string number) {
    TreeNode * temp;
    std::string numberL = number, numberR = number;
    if (root->right == nullptr && root->left == nullptr) this->longNumber = this->longNumber + this->binaryToDecimal(number) % 1000000007, std::cout << number << std::endl;
    if (root->right != nullptr) temp = root->right, numberR = number + std::to_string(temp->val), tempSumRootToLeaf(temp, numberR);
    if (root->left != nullptr) temp = root->left, numberL = number + std::to_string(temp->val), tempSumRootToLeaf(temp, numberL);
}
