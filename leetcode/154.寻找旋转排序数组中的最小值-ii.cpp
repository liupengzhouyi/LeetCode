/*
 * @lc app=leetcode.cn id=154 lang=cpp
 *
 * [154] 寻找旋转排序数组中的最小值 II
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums.size() == 1) return nums.at(0);
        else 
        {
            int returnValue = nums.at(0);
            for (int v = 1; v < nums.size(); v++)
            {
                if (nums.at(v) < nums.at(v-1))
                {

                    returnValue = nums.at(v);
                }
            }
            return returnValue;
        }
    }
};
// @lc code=end

