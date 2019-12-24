//
// Created by 刘鹏 on 2019/12/24.
//

#include <iostream>
#include "Node.h"

Node::Node(int number, int index){
    this->setNumber(number);
    this->setIndex(index);
    // 严格设置左右孩子为空
    this->setLeftChild(NULL);
    this->setRightChild(NULL);
    this->setNextNode(NULL);
}

int Node::getNumber() const {
    return number;
}

void Node::setNumber(int number) {
    Node::number = number;
}

int Node::getSum() const {
    return sum;
}

void Node::setSum(int sum) {
    Node::sum = sum;
}

int Node::getIndex() const {
    return index;
}

void Node::setIndex(int index) {
    Node::index = index;
}

Node *Node::getLeftChild() const {
    return LeftChild;
}

void Node::setLeftChild(Node *leftChild) {
    LeftChild = leftChild;
}

Node *Node::getRightChild() const {
    return RightChild;
}

void Node::setRightChild(Node *rightChild) {
    RightChild = rightChild;
}

Node *Node::getFather() const {
    return Father;
}

void Node::setFather(Node *father) {
    Father = father;
}

Node *Node::getNextNode() const {
    return NextNode;
}

void Node::setNextNode(Node *nextNode) {
    NextNode = nextNode;
}

bool Node::haveLeftChild() {
    if (this->getLeftChild() == NULL) {
        return false;
    } else {
        return true;
    }
}

bool Node::haveRightChild() {
    if (this->getRightChild() == NULL) {
        return false;
    } else {
        return true;
    }
}

bool Node::haveFather() {
    if (this->getFather() == NULL) {
        return false;
    } else {
        return true;
    }
}

void Node::printMe() {
    std::cout << "number:" << this->getNumber() << " - sum:" << this->getSum() << " - index:" << this->getIndex() << std::endl;
}


