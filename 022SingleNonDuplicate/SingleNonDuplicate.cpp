//
// Created by 刘鹏 on 2020/2/1.
//

#include "SingleNonDuplicate.h"

int SingleNonDuplicate::singleNonDuplicate(std::vector<int> &nums) {
    auto key = nums[nums.size()];
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != nums[i+1]) {
            key = nums[i];
            break;
        } else {
            i = i + 1;
        }
    }
    return key;
}
