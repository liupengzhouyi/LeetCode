//
// Created by 刘鹏 on 2020/6/22.
//

#include "Paly26.h"

int Paly26::removeDuplicates(std::vector<int> &nums) {
    if (nums.size() == 0) return 0;
    std::vector<int> temp;
    auto count = 1;
    auto number = nums[0];
    temp.push_back(number);
    for (auto item : nums) {
        if (item != number) count++, number = item, temp.push_back(number);
    }
    nums = temp;
    return count;
}
