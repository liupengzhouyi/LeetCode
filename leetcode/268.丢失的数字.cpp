/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 丢失的数字
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int sum = ((1 + n) * n) / 2;
        std::cout << "n: " << n << std::endl;
        std::cout << "sum: " << sum << std::endl;
        for (int n : nums)
        {
            sum = sum - n;
            std::cout << "sum : " << sum << " - " << n << " = " << (sum - n) << std::endl;
        }
        return sum;
    }
};
// @lc code=end

