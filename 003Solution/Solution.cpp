//
// Created by 刘鹏 on 2020/1/16.
//

#include <iostream>
#include <cmath>
#include "Solution.h"

Solution::Solution() {}

bool Solution::judgeSquareSum(int c) {
    long minNumber = 0;
    long maxNumber = sqrt(c);
    // std::cout << minNumber << " - " << maxNumber << std::endl;
    auto key = 0;
    auto returnKey = false;
    while (key == 0) {
        long sum = minNumber * minNumber + maxNumber * maxNumber;
        // std::cout << sum << " = " << minNumber << " + " << maxNumber << std::endl;
        if (minNumber > maxNumber) {
            key = 1;
            returnKey = false;
            break;
        }
        if (sum > c) {
            maxNumber = maxNumber - 1;
        } else if (sum < c) {
            minNumber = minNumber + 1;
        } else if (sum == c) {
            key = 1;
            returnKey = true;
            break;
        }
    }
    return returnKey;
}