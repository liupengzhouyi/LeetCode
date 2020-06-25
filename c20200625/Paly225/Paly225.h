//
// Created by 刘鹏 on 2020/6/25.
//

#ifndef LEETCODE_PALY225_H
#define LEETCODE_PALY225_H


class Paly225 {
public:
    Paly225();

    /** Push element x onto stack. */
    void push(int x);

    /** Removes the element on top of the stack and returns that element. */
    int pop();

    /** Get the top element. */
    int top();

    /** Returns whether the stack is empty. */
    bool empty();

private:

    int numbers[2000];

    int index;

};


#endif //LEETCODE_PALY225_H
