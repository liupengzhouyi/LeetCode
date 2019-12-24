//
// Created by 刘鹏 on 2019/12/24.
//

#ifndef LEETCODE_NODE_H
#define LEETCODE_NODE_H


class Node {

private:
    // Data
    int number;
    // sum
    int sum;
    // what the index in numbers
    int index;
    // left child
    Node * LeftChild;
    // right child
    Node * RightChild;
    // you father
    Node * Father;
    // next
    Node * NextNode;

public:

    Node(int number, int index);

    int getNumber() const;

    void setNumber(int number);

    int getSum() const;

    void setSum(int sum);

    int getIndex() const;

    void setIndex(int index);

    Node *getLeftChild() const;

    void setLeftChild(Node *leftChild);

    Node *getRightChild() const;

    void setRightChild(Node *rightChild);

    Node *getFather() const;

    void setFather(Node *father);

    Node *getNextNode() const;

    void setNextNode(Node *nextNode);

    bool haveFather();

    bool haveLeftChild();

    bool haveRightChild();

    void printMe();
};


#endif //LEETCODE_NODE_H
