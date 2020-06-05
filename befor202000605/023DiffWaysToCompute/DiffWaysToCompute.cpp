//
// Created by 刘鹏 on 2020/2/2.
//

#include "DiffWaysToCompute.h"
#include <string>

std::vector<int> DiffWaysToCompute::diffWaysToCompute(std::string input1) {
    return this->ways(input1, 0, input1.size());
}

std::vector<int> DiffWaysToCompute::ways(const std::string &input, int left, int right) {
    return std::vector<int>();
}

int DiffWaysToCompute::ops(char op, int l, int r) {
    switch(op) {
        case '+':return l+r;
        case '-':return l-r;
        case '*':return l*r;
    }
    return 0;
}

