//
// Created by 刘鹏 on 2020/2/2.
//

#include "DiffWaysToCompute.h"

std::vector<int> DiffWaysToCompute::diffWaysToCompute(std::string input) {
    return this->ways(input, 0,input.size());
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

