//
// Created by 刘鹏 on 2020/6/13.
//

#include "Paly073.h"

void Paly073::setZeroes(std::vector<std::vector<int>> &matrix) {
    std::vector<int> x = std::vector<int>();
    std::vector<int> y = std::vector<int>();
    for (auto i=0;i<matrix.size();i++) {
        for (auto j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] == 0) x.push_back(i), y.push_back(j);
        }
    }
    for (auto i = 0; i < x.size(); i++) {
        for (auto j = 0; j < matrix[x[i]].size(); j++) {
            matrix[x[i]][j] = 0;
        }
    }
    for (auto i = 0; i < y.size(); i++) {
        for (auto j = 0; j < matrix.size(); j++) {
            matrix[j][y[i]] = 0;
        }
    }
}


