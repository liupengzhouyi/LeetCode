//
// Created by 刘鹏 on 2020/1/19.
//

#include <vector>
#include <iostream>
#include "TopKFrequent.h"

std::vector<int> TopKFrequent::topKFrequent(std::vector<int> &nums, int k) {
    int numbers[2048][2];
    int max= 0;
    numbers[max][0] = nums[0];
    numbers[max][1] = 0;
    max = 1;
    for (auto item : nums) {
        auto key = 0;
        for (int j = 0; j < max; j++) {
            if (item == numbers[j][0]) {
                key = 1;
                numbers[j][1] = numbers[j][1] + 1;
                // std::cout << "-" << numbers[j][0] << " + " << numbers[j][1] << std::endl;
            }
        }
        if (key == 0) {
            numbers[max][0] = item;
            numbers[max][1] = 1;
            max = max + 1;
        }
    }
    /*for (int i = 0; i < max; i++) {
        std::cout << numbers[i][0] << " : " << numbers[i][1] << std::endl;
    }*/
    for (int i=0;i<max;i++) {
        for (int j = i + 1; j < max; j++) {
            if (numbers[i][1] < numbers[j][1]) {
                auto a = numbers[i][0];
                auto b = numbers[i][1];
                numbers[i][0] = numbers[j][0];
                numbers[i][1] = numbers[j][1];
                numbers[j][0] = a;
                numbers[j][1] = b;
            }
        }
    }
    /*for (int i = 0; i < max; i++) {
        std::cout << numbers[i][0] << " :- " << numbers[i][1] << std::endl;
    }*/
    std::vector<int> vvv;
    for (int i = 0; i < k; i++) {
        vvv.push_back(numbers[i][0]);
    }
    return vvv;
}
