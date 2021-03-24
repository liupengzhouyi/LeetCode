/*
 * @lc app=leetcode.cn id=704 lang=cpp
 *
 * [704] 二分查找
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {

        for (int i=0;i<nums.size();i++)
        {
            if (abs(nums.at(i) - target) < 0.0000001)
            {
                return i;
            }
        }
        return-1;
    }
};
// @lc code=end

