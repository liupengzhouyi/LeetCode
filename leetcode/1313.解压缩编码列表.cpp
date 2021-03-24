/*
 * @lc app=leetcode.cn id=1313 lang=cpp
 *
 * [1313] 解压缩编码列表
 */

// @lc code=start
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        std::vector<int> returnVector = std::vector<int>();
        for (int i = 0;i<nums.size()-1;i++) {
            for (int j = 0;j<nums.at(i); j++)
            {
                returnVector.push_back(nums.at(i + 1));
            }
            i = i + 1;
        }
        return returnVector;
    }
};
// @lc code=end

