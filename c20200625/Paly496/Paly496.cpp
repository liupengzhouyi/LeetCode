//
// Created by 刘鹏 on 2020/6/25.
//

#include "Paly496.h"

::std::vector<int> Paly496::nextGreaterElement(std::vector<int> &nums1, std::vector<int> &nums2) {
    ::std::vector<int> returnList;
    for (auto item : nums1) {
        auto key = false, k = false;
        for (auto item1 : nums2) {
            if (item1 == item) {
                key = true;
            }
            if (key == true) {
                if (item1 > item) {
                    returnList.push_back(item1);
                    k = true;
                    break;
                }
            }
        }
        if (k == false) returnList.push_back(-1);
    }
    return returnList;
}
