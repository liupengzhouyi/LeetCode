/*
 * @lc app=leetcode.cn id=1323 lang=cpp
 *
 * [1323] 6 和 9 组成的最大数字
 */

// @lc code=start
class Solution {
public:
    int maximum69Number (int num) {
        std::string number = std::to_string(num);
        std::string returnStr = "";
        bool key = false;
        for (char c : number)
        {
            if (key == false) 
            {
                if (c == '6')
                {
                    returnStr = returnStr + '9';
                    key = true;
                } 
                else 
                {
                    returnStr = returnStr + c;
                }
            }
            else 
            {
                returnStr = returnStr + c;
            }
        }
        return std::stoi(returnStr);
    }
};
// @lc code=end

