//
// Created by 刘鹏 on 2020/7/2.
//

#include "Paly38.h"

::std::string Paly38::countAndSay(int n) {
    if (n == 1) return "1";
    ::std::string p = "1";
    for (int i=1;i<n;i++) {
        p = strToStr(p);
    }
    return p;
}

::std::string Paly38::strToStr(::std::string str) {
    ::std::vector<::std::vector<int>> list;
    int index = 0;
    ::std::string returnStr = "";
    for (auto item : str) {
        if (list.size() == 0) {
            ::std::vector<int> temp;
            temp.push_back(int(item - '0'));
            temp.push_back(1);
            list.push_back(temp);
        } else {
            if (int(item - '0') == list[index][0]) {
                list[index][1] = list[index][1] + 1;
            } else {
                ::std::vector<int> temp;
                temp.push_back(int(item - '0'));
                temp.push_back(1);
                list.push_back(temp);
                index = index + 1;
            }
        }
    }
    for (auto item : list) {
        returnStr = returnStr + ::std::to_string(item[1])  + ::std::to_string(item[0]);
    }
    return returnStr;
}
