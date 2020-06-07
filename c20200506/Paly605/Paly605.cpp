//
// Created by 刘鹏 on 2020/6/6.
//

#include "Paly605.h"

bool Paly605::canPlaceFlowers(std::vector<int> &flowerbed, int n) {
    auto addsum = 0;
    for (auto item : flowerbed) {
        addsum = addsum + item;
    }
    if (addsum == 0) {
        if ((flowerbed.size() + 1) / 2 >= n) return true;
        else return false;
    }
    auto numberI = 0, numberII = 0, sum = 0;
    for (int index = 0; index < flowerbed.size(); index++) {
        if (flowerbed[index] == 1) break;
        else numberI = numberI + 1;
    }
    sum = sum + (numberI) / 2;
    for (auto index = flowerbed.size() - 1; index >= 0; index--) {
        if (flowerbed[index] == 1) break;
        else numberII = numberII + 1;
    }
    sum = sum + (numberII) / 2;
    std::cout << numberI << " " << numberII << std::endl;
    auto length = 0;
    for (auto i = numberI; i < flowerbed.size() - numberII; i++) {
        if (flowerbed[i] == 0) {
            // std::cout << flowerbed[i] << " ";
            length = length + 1;
        } else {
            // std::cout << flowerbed[i] << std::endl;
            sum = sum + (length - 1) / 2;
            length = 0;
        }
    }
    std::cout << sum << std::endl;
    return (sum >= n);
}
