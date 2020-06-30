//
// Created by 刘鹏 on 2020/6/30.
//

#include "Paly54.h"



void Paly54::tack(std::vector<::std::vector<int>> &matrix) {
    int height = matrix.size();
    int wight = matrix[0].size();
    if (height == 1) {
        for (int i=0;i<wight;i++) {
            list.push_back(matrix[0][i]);
            ::std::cout << "-" << matrix[0][i] << ::std::endl;
        }
        return;
    }
    if (wight == 1) {
        ::std::cout << "2" << std::endl;
        for (int i=0;i<height;i++) {

            list.push_back(matrix[i][0]);
            ::std::cout << "|" << matrix[i][0] << ::std::endl;
        }
        return;
    }
    for (int i = 0; i < wight; i++) {
        list.push_back(matrix[0][i]);
        ::std::cout << matrix[0][i] << ::std::endl;
    }
    for (int i = 1; i < height; i++) {
        list.push_back(matrix[i][wight - 1]);
        ::std::cout << matrix[i][wight - 1] << ::std::endl;
    }
    for (int i = wight - 2; i >= 0; i--) {
        list.push_back(matrix[height-1][i]);
        ::std::cout << matrix[height-1][i] << ::std::endl;
    }
    for (int i = height - 2; i >= 1; i--) {
        list.push_back(matrix[i][0]);
        ::std::cout << matrix[i][0] << ::std::endl;
    }
}

std::vector<::std::vector<int>> Paly54::getNewMatrix(std::vector<::std::vector<int>> &matrix) {
    int height = matrix.size();
    int wight = matrix[0].size();
    ::std::vector<::std::vector<int>> newMatrix;
    for (int j = 1; j < height - 1; j++) {
        ::std::vector<int> temp;
        for (int i=1;i<wight-1;i++) {
            temp.push_back(matrix[j][i]);
        }
        newMatrix.push_back(temp);
    }
    return newMatrix;
}

::std::vector<int> Paly54::spiralOrder(std::vector<::std::vector<int>> &matrix) {
    if (matrix.size() == 0) return list;
    if (matrix[0].size() == 0) return list;
    int height = matrix.size();
    int wight = matrix[0].size();
    if (height <= 2 || wight <= 2) {
        tack(matrix);
        return list;
    } else {
        while( height > 2 || wight > 2) {
            tack(matrix);
            matrix = getNewMatrix(matrix);
            height = matrix.size();
            wight = matrix[0].size();
        }
        tack(matrix);
    }
    return list;
}

