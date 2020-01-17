//
// Created by 刘鹏 on 2020/1/18.
//

#include <iostream>
#include "ValidPalindrome.h"

bool ValidPalindrome::validPalindrome(std::string s) {
    auto returnKey = true;
    auto key = 0;
    auto size = s.length();
    auto i = 0;
    auto j = size - 1;
    while (i<j) {
        if (s[i] == s[j]) {
            std::cout << s[i] << " - " << s[j] << std::endl;
            i = i + 1;
            j = j - 1;
            continue;
        } else {
            if (s[i+1] == s[j]) {
                auto t = i + 1;
                auto p = j;
                while (t<p) {
                    std::cout << s[t] << " ? " << s[p] << std::endl;
                    if (s[t] == s[p]) {
                        t = t + 1;
                        p = p - 1;
                        continue;
                    } else {
                        key = 1;
                        break;
                    }
                }
                if (key==0) {
                    return returnKey;
                }
            }
            if (s[i] == s[j-1]) {
                returnKey = true;
                auto t = i;
                auto p = j - 1;
                while (t<p) {
                    std::cout << s[t] << " = " << s[p] << std::endl;
                    if (s[t] == s[p]) {
                        t = t + 1;
                        p = p - 1;
                        continue;
                    } else {
                        returnKey = false;
                        break;
                    }
                }
                return returnKey;
            } else {
                return false;
            }
        }
    }
    return returnKey;
}
