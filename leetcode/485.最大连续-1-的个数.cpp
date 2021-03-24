/*
 * @lc app=leetcode.cn id=485 lang=cpp
 *
 * [485] 最大连续 1 的个数
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int sum = 0;
        for (int i=0;i<nums.size();i++)
        {
            
            if (nums.at(i) == 1)
            {
                sum = sum + 1;
            }
            else 
            {

                max = max > sum ? max : sum;
                sum = 0;
            }
        }
        max = max > sum ? max : sum;
        return max;
    }
};
// @lc code=end

