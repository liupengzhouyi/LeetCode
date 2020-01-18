//
// Created by 刘鹏 on 2020/1/18.
//

#include <iostream>
#include "Rotate.h"

void Rotate::rotate(std::vector<std::vector<int>> &matrix) {
    std::vector<int> temp = matrix[0];
    std::vector<std::vector<int>> t;
    std::vector<int> v;
    auto longth = 0;
    for (auto item : temp) {
        t.push_back(v);
        longth = longth + 1;
    }
    for (int i = longth-1; i >= 0; i--) {
        temp = matrix[i];
        auto index = 0;
        for (auto item : temp) {
            t[index].push_back(item);
            index = index + 1;
        }
    }
    matrix = t;
}
