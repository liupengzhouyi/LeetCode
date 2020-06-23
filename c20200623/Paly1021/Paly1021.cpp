//
// Created by 刘鹏 on 2020/6/23.
//

#include "Paly1021.h"

std::string Paly1021::removeOuterParentheses(std::string S) {
    auto returnString = "";
    std::string s = "";
    auto sum = 0;
    for (auto item : S) {
        if (item == '(') sum = sum + 1;
        if (item == ')') sum = sum - 1;
        s = s + item;
        if (sum == 0) {
            for (int i = 1; i < s.length() - 1; i++) {
                returnString = returnString + s[i];
            }
            s = "";
        }
    }
    return returnString;
}
