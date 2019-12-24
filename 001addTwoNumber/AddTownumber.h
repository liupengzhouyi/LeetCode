//
// Created by 刘鹏 on 2019/12/24.
//

#ifndef LEETCODE_AddTownumber_H
#define LEETCODE_AddTownumber_H


#include "Node.h"

class AddTownumber {

private:
    // init node
    Node * tree;

    // frist node
    Node * firstNode;

    // index
    int nowIndex;

public:

    // initialization
    AddTownumber();

    int getNowIndex() const;

    void setNowIndex(int nowIndex);

    // get frist node
    Node *getTree() const;

    void setTree(Node *tree);

    Node *getFirstNode(int index);

    void setFirstNode(Node *firstNode);

    // add number
    void addNumber(int number);

    // printTree
    void printTree();

};


#endif //LEETCODE_AddTownumber_H
