//
// Created by 刘鹏 on 2020/1/19.
//

#include <iostream>
#include "FindKthLargest.h"

int FindKthLargest::findKthLargest(std::vector<int> &nums, int k) {
    int numbers[k];
    for (int i = 0; i < k; i++) {
        numbers[i] = nums[i];
    }
    std::vector<int> p;
    for (int i = k; i < nums.size(); i++) {
        p.push_back(nums[i]);
    }
    for (int i = 0; i < k; i++) {
        for (int j = i+1; j < k; j++) {
            if (numbers[i] < numbers[j]) {
                auto key = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = key;
            }
        }
    }
    for (int i = 0; i < k; i++) {
        std::cout << numbers[i] << " ";
    }
    for (auto item : p) {
        if (item <= numbers[k-1]) {
            continue;
        } else {
            for (int i = 0; i < k; i++) {
                if (numbers[i] < item) {
                    int temp = numbers[i];
                    numbers[i] = item;
                    item = temp;
                }
            }
        }
    }
    for (int i = 0; i < k; i++) {
        std::cout << numbers[i] << " ";
    }
    return numbers[k - 1];
}




