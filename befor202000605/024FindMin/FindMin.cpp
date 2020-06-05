//
// Created by 刘鹏 on 2020/2/2.
//

#include "FindMin.h"

int FindMin::findMin(std::vector<int> &nums) {
    auto key = nums[0];
    for (auto index = 1; index < nums.size(); index ++) {
        if (nums[index-1] > nums[index]) {
            key = nums[index];
            break;
        }
    }
    return key;
}
