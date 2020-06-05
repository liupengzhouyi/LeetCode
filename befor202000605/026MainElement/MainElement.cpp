//
// Created by 刘鹏 on 2020/6/5.
//

#include "MainElement.h"

int MainElement::majorityElement(std::vector<int> &nums) {
    std::map<int, int> myMap;
    for (auto item : nums) {
        std::map<int ,int>::iterator temp;
        temp = myMap.find(item);
        if(temp == myMap.end()) myMap[item] = 1;
        else myMap[item] = myMap[item] + 1;
    }
    std::map<int, int>::iterator temp;
    int p = 0, index = -1;
    for (temp = myMap.begin(); temp != myMap.end(); temp++) {
        if (temp->second > p) index= temp->first, p = temp->second;
    }
    //std::cout << p << std::endl;
    if (p * 2 <= nums.size()) index = -1;
    return index;
}

MainElement::MainElement() {}




