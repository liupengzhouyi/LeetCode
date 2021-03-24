/*
 * @lc app=leetcode.cn id=264 lang=cpp
 *
 * [264] 丑数 II
 */

// @lc code=start
#include<iostream>
#include <set>
using namespace std;
class Solution {
public:
    int nthUglyNumber(int n) {
        int s2 = 0,s3 = 0,s5 = 0;
        int t2,t3,t5;
        int dp[n];
        dp[0] = 1;
        for(int i=1;i<n;i++)
        {    
            t2 = dp[s2]*2;
            t3 = dp[s3]*3;
            t5 = dp[s5]*5;
            dp[i] = min(min(t2,t3),t5);
            if(dp[i] == t2)
            {
                s2++;
            }
            if(dp[i] == t3)
            {
                s3++;
            }
            if(dp[i] == t5)
            {
                s5++;
            }
        }
        return dp[n-1];
    }
};
// @lc code=end

