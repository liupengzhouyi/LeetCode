//
// Created by 刘鹏 on 2020/6/7.
//


#include "Paly1425.h"

int Paly1425::constrainedSubsetSum(std::vector<int> &nums, int k) {
    /*int f[1000], ans = -99999;//f即为nums[i]结尾的子序列和的最大值
    std::deque<std::pair<int,int> > s;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        f[i] = nums[i];
        f[i] = max(f[i], f[i] + s.front().first);
        ans = max(ans, f[i]);//记录答案
        if(s.empty()) s.push_back(std::make_pair(f[i],i));
        else{
            //保证队列是单调递减的
            while(!s.empty() && f[i] >= s.back().first) s.pop_back();
            s.push_back(std::make_pair(f[i],i));
        }
        //如果队首已经超出了[i-k,i]的范围就把队首弹出
        while(!s.empty() && s.front().second <= i - k) s.pop_front();
    }
    return ans;*/
    return 0;
}
