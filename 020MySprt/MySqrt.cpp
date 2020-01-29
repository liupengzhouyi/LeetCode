//
// Created by liupeng on 2020/1/29.
//

#include "MySqrt.h"

int MySqrt::mySqrt(int x) {
    if (x == 1) {
        return 1;
    }
    auto kye = true;
    long a = 0;
    long b = x;
    int paly = 0;
    while (kye) {
        long temp = (a + b) / 2;
        if (temp * temp > x) {
            b = temp;
        } else if (temp * temp < x) {
            a = temp;
        } else {
            kye = false;
            paly = temp;
            break;
        }
        if (a == b - 1) {
            kye = false;
            paly = a;
            break;
        }
    }
    return paly;
}
