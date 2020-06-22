//
// Created by 刘鹏 on 2020/6/22.
//

#include "Paly172.h"

int Paly172::trailingZeroes(int n) {

    auto count = 0;
    while (n > 0) {
        n /= 5;
        count += n;
    }

    return count;
}
