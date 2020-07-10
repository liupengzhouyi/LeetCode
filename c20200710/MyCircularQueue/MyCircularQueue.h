//
// Created by 刘鹏 on 2020/7/10.
//

#ifndef LEETCODE_MYCIRCULARQUEUE_H
#define LEETCODE_MYCIRCULARQUEUE_H

class Node20200710 {
public:
    int value;
    Node20200710 * next;
};

class MyCircularQueue {
public:

    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k);

    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value);

    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue();

    /** Get the front item from the queue. */
    int Front();

    /** Get the last item from the queue. */
    int Rear();

    /** Checks whether the circular queue is empty or not. */
    bool isEmpty();

    /** Checks whether the circular queue is full or not. */
    bool isFull();

    Node20200710 * head;
    Node20200710 * a;
    Node20200710 * b;
    int max = 0;
    int sum = 0;
};


#endif //LEETCODE_MYCIRCULARQUEUE_H
