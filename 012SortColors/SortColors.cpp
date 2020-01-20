//
// Created by 刘鹏 on 2020/1/21.
//

#include "SortColors.h"

void SortColors::sortColors(std::vector<int> &nums) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i+1; j < nums.size(); j++) {
            if (nums[i] > nums[j]) {
                auto temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }
}
