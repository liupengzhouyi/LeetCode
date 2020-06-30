//
// Created by 刘鹏 on 2020/6/30.
//

#ifndef LEETCODE_PALY54_H
#define LEETCODE_PALY54_H

#include <iostream>
#include <vector>

class Paly54 {
public:

    ::std::vector<int> list;

    ::std::vector<int> spiralOrder(::std::vector<::std::vector<int>>& matrix);

    void tack(std::vector<::std::vector<int>> &matrix);

    std::vector<::std::vector<int>> getNewMatrix(std::vector<::std::vector<int>> &matrix);

};


#endif //LEETCODE_PALY54_H
