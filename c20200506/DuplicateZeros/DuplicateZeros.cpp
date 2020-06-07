//
// Created by 刘鹏 on 2020/6/6.
//

#include "DuplicateZeros.h"

void DuplicateZeros::duplicateZeros(std::vector<int> &arr) {
    std::vector<int> newArr;
    for (auto i = 0; i < arr.size(); i++) {
        if (newArr.size() < arr.size()) {
            if (arr[i] == 0) {
                newArr.push_back(0);
                if (newArr.size() < arr.size()) newArr.push_back(arr[i]);
                else break;
            } else newArr.push_back(arr[i]);
        } else {
            break;
        }
    }


    for (auto i = 0; i < arr.size(); i++) {
        arr[i] = newArr[i];
    }
}
