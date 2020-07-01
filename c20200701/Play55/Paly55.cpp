//
// Created by 刘鹏 on 2020/7/1.
//

#include "Paly55.h"


bool Paly55::canJump(std::vector<int> &nums) {
    int k = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i > k) return false;
        k = max(k, i + nums[i]);
    }
    return true;
}

int Paly55::max(int a, int b) {
    if (a > b) return a;
    return b;
}






