//
// Created by 刘鹏 on 2020/10/7.
//

#include <iostream>
#include "BrerkfastNumber.h"

int BrerkfastNumber::breakfastNumber(std::vector<int> &staple, std::vector<int> &drinks, int x) {
    auto max = 0, index = 0;
    // sort vector which named staple from small to big
    std::sort(staple.begin(), staple.end());
    //sort vector which named drinks from small to small
    std::sort(drinks.begin(), drinks.end());
    // reverse vector
    std::reverse(drinks.begin(), drinks.end());
    for (auto item : drinks) {
        for (int i = index; i < staple.size(); i++) {
            if (item + staple[i] <= x) {
                index = index + 1;
            } else {
                break;
            }
        }
        max = max + index;
        max = max % 1000000007;
    }
    return max;
}
