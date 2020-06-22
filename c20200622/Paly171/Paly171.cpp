//
// Created by 刘鹏 on 2020/6/22.
//

#include "Paly171.h"

int Paly171::titleToNumber(std::string s) {
    std::string ss = "";
    for (auto item : s) {
        ss = item + ss;
    }
    long sum = 0;
    long number = 1;
    for (auto item : ss) {
        sum = sum + ((int)(item - 'A') + 1) * number;
        number = number * 26;
    }
    return sum;
}
