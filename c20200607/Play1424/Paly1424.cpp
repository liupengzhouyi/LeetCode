//
// Created by 刘鹏 on 2020/6/7.
//

#include "Paly1424.h"

std::vector<int> Paly1424::findDiagonalOrder(std::vector<std::vector<int>> &nums) {
    std::vector<int> ans[200050];
    for(int i = 0; i < nums.size(); i++)
        for(int j = 0; j < nums[i].size(); j++)
            ans[i+j].push_back(nums[i][j]);
    //cout<<"ans["<<i+j<<"] push"<<nums[i][j]<<endl;
    std::vector<int> res;
    for(int i = 0; i <= 200000; i++){
        if(ans[i].size() == 0) continue;
        for(int j = ans[i].size()-1; j >= 0; j--)
            res.push_back(ans[i][j]);
    }
    return res;
}

