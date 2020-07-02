//
// Created by 刘鹏 on 2020/7/2.
//

#include "PAly378.h"

int PAly378::kthSmallest(std::vector<::std::vector<int>> &matrix, int k) {
    ::std::vector<int> list;
    for (auto item : matrix) {
        for (auto temp : item) {
            list.push_back(temp);
        }
    }
    ::std::sort(list.begin(), list.end());
    return list[k-1];
}
