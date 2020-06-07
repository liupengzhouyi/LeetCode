//
// Created by 刘鹏 on 2020/6/6.
//

#include "ArrayNumbers.h"

int ArrayNumbers::numOfSubarrays(std::vector<int> &arr, int k, int threshold) {
    auto arrayNumbers = 0;
    auto sum = 0;
    for (int i = 0; i < k; i++) sum = sum + arr[i];
    for (int i = k; i < arr.size(); i++) {
        if (sum/k >= threshold) arrayNumbers = arrayNumbers + 1;
        sum = sum + arr[i];
        sum = sum - arr[i - k];
    }
    if (sum/k >= threshold) arrayNumbers = arrayNumbers + 1;
    return arrayNumbers;
}
