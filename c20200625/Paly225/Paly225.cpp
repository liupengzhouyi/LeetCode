//
// Created by 刘鹏 on 2020/6/25.
//

#include "Paly225.h"

Paly225::Paly225() {
    index = -1;
}

void Paly225::push(int x) {
    index = index + 1;
    numbers[index] = x;
}

int Paly225::pop() {
    if(index >= 0) {
        index = index - 1;
        return numbers[index + 1];
    }
    else {
        return 0;
    }
}

int Paly225::top() {
    return numbers[index];
}

bool Paly225::empty() {
    return index == -1;
}
