//
// Created by 刘鹏 on 2020/6/6.
//

#include "Paly926.h"

int Paly926::minFlipsMonoIncr(std::string s) {
    auto number0 = 0, number1 = 0, min = 0;
    auto sumAll = s.length();
    for (int i = 0; i < s.length(); i++)
        if (s[i] == '1') number1 = number1 + 1;
    min = number0 + sumAll - number1;
    for (auto item : s) {
        if (item == '1') number0 = number0 + 1, number1 = number1 - 1;
        sumAll = sumAll - 1;
        min = min > (number0 + sumAll - number1) ? (number0 + sumAll - number1) : min;
    }
    return min;
}
