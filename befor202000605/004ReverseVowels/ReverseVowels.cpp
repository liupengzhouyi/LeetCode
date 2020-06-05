//
// Created by 刘鹏 on 2020/1/17.
//

#include <iostream>
#include "ReverseVowels.h"

std::string ReverseVowels::reverseVowels(std::string s) {
    auto key1 = 0, key2 = 0;
    auto i = 0;
    auto j = s.length()-1;
    while (i <= j) {
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u') {
            key1 = 1;
        } else{
            i = i + 1;
        }

        if (s[j] == 'a' || s[j] == 'o' || s[j] == 'e' || s[j] == 'i' || s[j] == 'u') {
            key2 = 1;
        } else{
            j = j - 1;
        }

        if (key1 == 1) {
            if (key2 == 1) {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i = i + 1;
                j = j - 1;
                key1 = 0;
                key2 = 0;
            }
        }
    }
    return s;
}

std::string ReverseVowels::reverseVowelsII(std::string s) {
    std::string str2 = "";
    for (int i=0;i<s.length();i++) {
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u'||s[i] == 'A' || s[i] == 'O' || s[i] == 'E' || s[i] == 'I' || s[i] == 'U') {
            str2 = s[i] + str2;
            s[i] = '+';
        }
    }
    int j = 0;
    for (int i=0;i<s.length();i++) {
        if (s[i] == '+') {
            s[i] = str2[j];
            j = j + 1;
        }
    }
    return s;
}
