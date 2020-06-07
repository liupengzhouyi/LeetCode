//
// Created by 刘鹏 on 2020/6/7.
//

#include "Paly1422.h"

int Paly1422::maxScore(std::string s) {
    auto max = 0, temp = 1;
    auto length = s.length();
    if (length == 0) return 0;
    for (int i = 1; i < length; i++) {
        max = max + temp * (s[i] - '0');
    }
    std::cout << max << std::endl;
    auto a = 0, b = max;
    if (s[0] == '0') a = a + 1;
    for (int i = 1; i < length; i++) {
        max = (a + b >= max) ? (a + b) : max;
        if (s[i] == '0') a = a + 1;
        if (s[i] == '1') b = b - 1;
        std::cout << max << std::endl;
    }
    return max;
}
