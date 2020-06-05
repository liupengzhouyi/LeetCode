//
// Created by 刘鹏 on 2019/12/24.
//
#include <iostream>
#include "AddTownumber.h"

AddTownumber::AddTownumber() {
    this->tree = new Node(0, 0);
    this->setNowIndex(0);
    this->setFirstNode(this->getTree());
}

void AddTownumber::addNumber(int number) {
    std::cout << number << std::endl;
    Node * nowNext = NULL;
    bool key = true;
    //std::cout << this->getNowIndex() << std::endl;
    Node * next = this->getFirstNode(this->getNowIndex());
    this->setNowIndex(this->getNowIndex() + 1);
    while(next->getNextNode() != NULL){
        //左孩子
        Node * LNode = new Node(number, this->getNowIndex());
        // 找爸爸
        LNode->setFather(next);
        // 设置sum
        LNode->setSum(next->getSum());
        // 临时输出
        LNode->printMe();
        if (key == true) {
            nowNext = LNode;
            key = false;
        } else {
            nowNext->setNextNode(LNode);
        }
        // setting left child
        next->setLeftChild(LNode);
        // 右孩子
        Node * RNode = new Node(number, this->getNowIndex());
        //找爸爸
        RNode->setFather(next);
        // 设置sum
        RNode->setSum(next->getSum() + number);
        // 临时输出
        RNode->printMe();
        // 设置为下一个横排的节点
        // 左孩子的下一个指针指向右孩子
        LNode->setNextNode(RNode);
        nowNext = RNode;
        //setting right child
        next->setRightChild(RNode);
        next = next->getNextNode();
    }
    //左孩子
    Node * LNode = new Node(number, this->getNowIndex());
    // 找爸爸
    LNode->setFather(next);
    // 设置sum
    LNode->setSum(next->getSum());
    // 临时输出
    LNode->printMe();
    if (key == true) {
        nowNext = LNode;
        key = false;
    }else {
        nowNext->setNextNode(LNode);
    }
    // setting left child
    next->setLeftChild(LNode);
    // 右孩子
    Node * RNode = new Node(number, this->getNowIndex());
    //找爸爸
    RNode->setFather(next);
    // 设置sum
    RNode->setSum(next->getSum() + number);
    // 临时输出
    RNode->printMe();
    // 设置为下一个横排的节点
    LNode->setNextNode(RNode);
    nowNext = RNode;
    //setting right child
    next->setRightChild(RNode);
}

Node *AddTownumber::getTree() const {
    return tree;
}

void AddTownumber::setTree(Node *tree) {
    AddTownumber::tree = tree;
}

Node *AddTownumber::getFirstNode(int index) {
    Node *thisTree = this->getTree();
    while (thisTree->getIndex() != index) {
        //std::cout << "AddTownumber::getFirstNode :" << thisTree->getIndex() << std::endl;
        thisTree = thisTree->getLeftChild();
    }
    this->firstNode = thisTree;
    return firstNode;
}

void AddTownumber::setFirstNode(Node *firstNode) {
    AddTownumber::firstNode = firstNode;
}

int AddTownumber::getNowIndex() const {
    return nowIndex;
}

void AddTownumber::setNowIndex(int nowIndex) {
    AddTownumber::nowIndex = nowIndex;
}

void AddTownumber::printTree() {
    for (int i = 0; i <= this->getNowIndex(); i++) {
        Node * next = this->getFirstNode(i);
        //next->printMe();
        while (next->getNextNode() != NULL) {
            std::cout << next->getSum() << " ";
            next = next->getNextNode();
        }
        std::cout << next->getSum() << " ";
        std::cout << std::endl;
    }
}
