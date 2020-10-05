//
// Created by 刘鹏 on 2020/7/10.
//

#include "MyCircularQueue.h"

MyCircularQueue::MyCircularQueue(int k) {
    max = k;
    a = head;
    b = head;
}

bool MyCircularQueue::enQueue(int value) {
    sum = sum + 1;
    if (sum > max) {
        return false;
    } else {
        if (head == nullptr) {
            head = new Node20200710();
            head->value = value;
            // head->next == nullptr;
            a = head;
            b = head;
        } else {
            Node20200710 *temp = new Node20200710();
            temp->value = value;
            temp->next = nullptr;
            a->next = temp;
            a = temp;
        }
        return true;
    }
}

bool MyCircularQueue::deQueue() {
    if (sum > 0) {
        sum = sum - 1;
        head = head->next;
        b = head;
        return true;
    } else {
        return false;
    }
}

int MyCircularQueue::Front() {
    return a->value;
}

int MyCircularQueue::Rear() {
    return b->value;
}

bool MyCircularQueue::isEmpty() {
    return a == b;
}

bool MyCircularQueue::isFull() {
    return sum == max;
}
