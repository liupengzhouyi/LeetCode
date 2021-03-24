/*
 * @lc app=leetcode.cn id=60 lang=cpp
 *
 * [60] 排列序列
 */

// @lc code=start
class Solution {
public:
    string getPermutation(int n, int k) {
        // 1 1
        // 2 2
        // 3 6
        // 4 24
        // 5 120
        // 6 720
        // 7 5040
        // 8 40320
        // 9 362880
        if (n == 1) return "1";
        if (n == 2 && k == 1) return "12";
        if (n == 2 && k == 2) return "21";
        
        int sum = 1;
        int kk = 0;
        for (int i=1;i<9; i++)
        {
            sum = sum * (kk + 1);
            kk = kk + 1;
            std::cout << sum << std::endl;
        }
        return "";
    }
};
// @lc code=end

