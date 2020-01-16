//
// Created by 刘鹏 on 2020/1/16.
//

#ifndef LEETCODE_ADDTOWNUMBERII_H
#define LEETCODE_ADDTOWNUMBERII_H

#include <iostream>
#include <vector>

class AddTowNumberII {

private:
    int _sum;
    int _indexOfNumberI;
    int _indexOfNumberII;
    std::vector<int> _vector;

public:
    AddTowNumberII();

    void init();

    int getSum() const;

    void setSum(int sum);

    int getIndexOfNumberI() const;

    void setIndexOfNumberI(int indexOfNumberI);

    int getIndexOfNumberIi() const;

    void setIndexOfNumberIi(int indexOfNumberIi);

    const std::vector<int> &getVector() const;

    void setVector(const std::vector<int> &vector);

    std::vector<int> twoSumI(std::vector<int> numbers, int target);

    std::vector<int> twoSumII(std::vector<int> numbers, int target);
};


#endif //LEETCODE_ADDTOWNUMBERII_H
