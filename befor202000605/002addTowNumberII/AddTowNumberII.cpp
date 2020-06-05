//
// Created by 刘鹏 on 2020/1/16.
//

#include "AddTowNumberII.h"

AddTowNumberII::AddTowNumberII() {
    this->init();
}

void AddTowNumberII::init() {
    for (int i = 0; i < 100; i++) {
        this->_vector.push_back(i);
    }
}

int AddTowNumberII::getSum() const {
    return _sum;
}

void AddTowNumberII::setSum(int sum) {
    _sum = sum;
}

int AddTowNumberII::getIndexOfNumberI() const {
    return _indexOfNumberI;
}

void AddTowNumberII::setIndexOfNumberI(int indexOfNumberI) {
    _indexOfNumberI = indexOfNumberI;
}

int AddTowNumberII::getIndexOfNumberIi() const {
    return _indexOfNumberII;
}

void AddTowNumberII::setIndexOfNumberIi(int indexOfNumberIi) {
    _indexOfNumberII = indexOfNumberIi;
}

const std::vector<int> &AddTowNumberII::getVector() const {
    return _vector;
}

void AddTowNumberII::setVector(const std::vector<int> &vector) {
    _vector = vector;
}

std::vector<int> AddTowNumberII::twoSumI(std::vector<int> numbers, int target) {
    std::vector<int> newVecter;
    auto maxIndex = 0;
    for (auto number : numbers) {
        maxIndex = maxIndex + 1;
    }
    int key = 0;
    for (int i = 0; i < maxIndex; i++) {
        if (key == 1) {
            break;
        }
        for (auto j = maxIndex - 1; j > i; j--) {
            if (numbers[i] + numbers[j] == target) {
                newVecter.push_back(i+1);
                newVecter.push_back(j+1);
                key = 1;
            }
            if (key == 1) {
                break;
            }
        }
    }
    return newVecter;
}

std::vector<int> AddTowNumberII::twoSumII(std::vector<int> numbers, int target) {
    std::vector<int> newVecter;
    auto maxIndex = 0;
    for (auto number : numbers) {
        maxIndex = maxIndex + 1;
    }
    auto key = 0;
    auto i = 0;
    auto j = maxIndex-1;
    //std::cout<< maxIndex << std::endl;
    while(key != 1) {
        auto sum = numbers[i] + numbers[j];
        // std::cout << numbers[i] << " + " << numbers[j] << " = " << sum << std::endl;
        if (sum == target) {
            newVecter.push_back(i+1);
            newVecter.push_back(j+1);
            key = 1;
        } else if (sum > target) {
            j = j - 1;
        } else if (sum < target) {
            i = i + 1;
        }
    }
    return newVecter;
}
