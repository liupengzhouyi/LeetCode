//
// Created by 刘鹏 on 2020/6/12.
//

#include "Paly42.h"

int Paly42::trap(std::vector<int> &height) {
    if (height.size() == 0) return 0;
    auto max = height[0], sum = 0, sum1 = 0, sum2 = 0, temp2 = height[height.size() - 1];
    for (auto temp : height) max = (max > temp) ? max : temp, sum1 = sum1 + max;
    for (int i=height.size()-1; i>=0; i--) temp2 = (temp2 > height[i]) ? temp2 : height[i], sum2 = sum2 + temp2, sum = sum + height[i];
    return sum1 + sum2 - max * height.size() - sum;
}
