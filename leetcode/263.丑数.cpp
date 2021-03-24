/*
 * @lc app=leetcode.cn id=263 lang=cpp
 *
 * [263] 丑数
 */

// @lc code=start
class Solution {
public:


    bool isUgly(int n) {
        if (n == 0) {
            return false;
        }
        if (n == 1) {
            return true;
        }
        while(n != 1) {
            int key1 = 0, key2 = 0, key3 = 0;
            if (n % 2 == 0) {
                n = n / 2;
                key1 = 1;
            }
            if (n % 3 == 0) {
                n = n / 3;
                key2 = 1;
            } 
            if (n % 5 == 0) {
                n = n / 5;
                key3 = 1;
            }
            if (key1 + key2 + key3 == 0) {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

