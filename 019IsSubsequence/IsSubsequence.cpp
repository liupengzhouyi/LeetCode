//
// Created by liupeng on 2020/1/28.
//

#include <iostream>
#include "IsSubsequence.h"

bool IsSubsequence::isSubsequence(std::string s, std::string t) {
    if (s == "") {
        return true;
    }
    auto index = 1;
    auto j = 0;
    for (auto i = 0; i < t.length(); ) {
        if (t[i] == s[j]) {
            std::cout << t[i] << " - " << s[j] << std::endl;
            if (j == (s.length() - 1)) {
                return true;
            }
            i = i + 1;
            j = j + 1;
        } else {
            i = i + 1;
        }
        if (i == (t.length() - 1)) {
            auto o = 0;
            for (int k = 0; k < t.size(); k++) {
                if (t[k] == s[0]) {
                    o = o + 1;
                }
                if (o == index) {
                    index = index + 1;
                    i = k;
                    j = 0;
                    std::cout << i << std:: endl;
                    break;
                }
            }
        }
    }
    return false;
}
