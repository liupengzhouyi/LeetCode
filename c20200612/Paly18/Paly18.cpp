//
// Created by 刘鹏 on 2020/6/12.
//


#include "Paly18.h"


std::vector<std::vector<int>> Paly18::fourSum(std::vector<int> &nums, int target) {
    if(nums.size()<4) return {};

    sort(nums.begin(),nums.end());

    std::vector<std::vector<int>> res;

    std::set<std::vector<int>> a;//去重

    for(int i=0;i<nums.size()-3;i++)
    {
        if(nums[i]>target&&target>0) break;
        for(int j=i+1;j<nums.size()-2;j++)
        {
            int l=j+1;
            int r=nums.size()-1;
            while(l<r)
            {
                if(nums[i]+nums[j]+nums[l]+nums[r]<target)
                    l++;
                else if(nums[i]+nums[j]+nums[l]+nums[r]>target)
                    r--;
                else
                {
                    std::vector<int> temp{nums[i],nums[j],nums[l],nums[r]};
                    a.insert(temp);
                    l++;
                    r--;
                }
            }
        }
    }
    for(auto c:a)
    {
        res.push_back(c);
    }
    return res;
}
