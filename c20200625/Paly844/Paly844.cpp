//
// Created by 刘鹏 on 2020/6/25.
//

#include "Paly844.h"

bool Paly844::backspaceCompare(::std::string S, ::std::string T) {
    ::std::stack<char> list1, list2;
    ::std::string str1 = "";
    ::std::string str2 = "";
    for (auto item : S) {
        if (item == '#') {
            if (!list1.empty()) list1.pop();
        } else {
            list1.push(item);
        }
    }
    for (auto item : T) {
        if (item == '#') {
            if (!list2.empty()) list2.pop();
        } else {
            list2.push(item);
        }
    }
    if (list1.empty() && list2.empty()) return true;
    if (list1.empty() && !list2.empty()) return false;
    if (!list1.empty() && list2.empty()) return false;
    auto longth1 = list1.size();
    auto longth2 = list2.size();
    for (auto i = 0; i < longth1; i++) {
        str1 = str1 + list1.top();
        list1.pop();
    }
    for (auto i = 0; i < longth2; i++) {
        str2 = str2 + list2.top();
        list2.pop();
    }
    ::std::cout << str1 << ::std::endl;
    ::std::cout << str2 << ::std::endl;
    return str1 == str2;
}
