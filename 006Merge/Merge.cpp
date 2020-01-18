//
// Created by 刘鹏 on 2020/1/18.
//

#include <iostream>
#include "Merge.h"

void Merge::merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n) {
    if (m == 0) {
        nums1 = nums2;
    }
    if (n == 0) {
        nums1 = nums1;
    }
    if (m !=0 && n != 0) {
        std::vector<int> vector;
        auto indexOne = 0;
        auto indexTow = 0;
        while(indexOne < m && indexTow < n){
            auto key = 0;
            if (nums1[indexOne] >= nums2[indexTow]) {
                vector.push_back(nums2[indexTow]);
                // std::cout << "-2:" << nums2[indexTow] << std::endl;
                indexTow = indexTow + 1;
                key = 1;
            }
            if (key == 0) {
                if (nums1[indexOne] <= nums2[indexTow]) {
                    vector.push_back(nums1[indexOne]);
                    // std::cout << "-1:" << nums1[indexOne] << std::endl;
                    indexOne = indexOne + 1;
                }
            }
        }
        if (indexOne < m){
            for (int i = indexOne;i<m;i++){
                vector.push_back(nums1[i]);
                // std::cout << "-1:" << nums1[i] << std::endl;
            }
        }
        if (indexTow < n){
            for (int i = indexTow;i<n;i++){
                vector.push_back(nums2[i]);
                // std::cout << "-2:" << nums2[i] << std::endl;
            }
        }
        nums1 = vector;
    }
}
