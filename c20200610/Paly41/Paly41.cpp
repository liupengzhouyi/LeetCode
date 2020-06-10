//
// Created by 刘鹏 on 2020/6/10.
//

#include "Paly41.h"

int Paly41::firstMissingPositive(std::vector<int> &nums) {
    //return 0;
    int n = nums.size();
    bool flag = true;
    for(int i=0; i<n; i++){
        if(nums[i] == 1) flag = false;
    }
    if(flag) return 1;
    for(int i=0; i<n; i++){
        if(nums[i] <= 0 || nums[i] > n){
            nums[i] = 1;
        }
    }
    for(int i=0; i<n; i++){
        int pos = nums[i] > 0 ? nums[i] : (-nums[i]);
        nums[pos-1] = nums[pos-1] > 0 ? (-nums[pos-1]) : nums[pos-1];
    }
    //find the fist positive index
    int ret = n+1;
    for(int i=0; i<n; i++){
        if(nums[i] > 0) return i+1;
    }
    return ret;
}
