//
// Created by 刘鹏 on 2020/6/27.
//

#include "Paly349.h"

::std::vector<int> Paly349::intersection(std::vector<int> &nums1, std::vector<int> &nums2) {
    ::std::set<int> returnSet;
    ::std::vector<int> returnList;
    int number1 = nums1.size();
    int number2 = nums2.size();
    int index1 = 0, index2 = 0;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    while (true) {
        if (index1 >= number1 || index2 >= number2) break;
        std::cout << nums1[index1] << " " << nums2[index2];
        if (nums1[index1] == nums2[index2]) {
            returnSet.insert(nums1[index1]);
            index1 = index1 + 1;
            index2 = index2 + 1;
        }
        else {
            if (nums1[index1] < nums2[index2]) index1 = index1 + 1;
            else index2 = index2 + 1;
        }
    }
    ::std::set<int>::iterator iter;
    for(iter = returnSet.begin() ; iter != returnSet.end() ; ++iter) {
        returnList.push_back(*iter);
    }
    return returnList;
}
