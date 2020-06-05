//
// Created by 刘鹏 on 2020/1/19.
//

#include <vector>
#include "FindLongestWord.h"

std::string FindLongestWord::findLongestWord(std::string s, std::vector<std::string> &d) {
    std::string string = "";
    for (std::string str : d) {
        if ((str.length() > s.length()) || ((str.length() == s.length()) && (s != str))){
            continue;
        } else {
            if(isSonString(s, str)) {
                if (str.length() == string.length()) {
                    if(str < string) {
                        string = str;
                    }
                }
                if (str.length() > string.length()) {
                    string = str;
                    // td::cout << str << std::endl;
                }
            }
        }
    }
    return string;
}

bool FindLongestWord::isSonString(std::string s, std::string target) {
    int i = 0, j = 0;
    while (i < s.length() && j < target.length()) {
        if (s[i] == target[j]) {
            j++;
        }
        i++;
    }
    return j == target.length();
}
