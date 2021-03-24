/*
 * @lc app=leetcode.cn id=1694 lang=cpp
 *
 * [1694] 重新格式化电话号码
 */

// @lc code=start
class Solution {
public:
    string reformatNumber(string number) {
        std::string returnStr = "";
        for (int i=0;i<number.length();i++)
        {
            if (number[i] != ' ' && number[i] != '-')
            {
                returnStr = returnStr + number[i];
            }
            
        }
        int key = (returnStr.length()) %3;
        cout << key << endl;
        if (key == 1)
        {
            std::string sss = "";
            int index = 0;
            for (int i=0;i<returnStr.length() - 4 ;i++) 
            {
                sss = sss + returnStr[i];
                index = index + 1;
                if (index == 3)
                {
                    sss = sss + "-";
                    index = 0;
                }
            }
            for (int i=returnStr.length() - 4; i < returnStr.length() - 2; i++)
            {
                sss = sss + returnStr[i];
            }
            sss = sss + "-";
            for (int i=returnStr.length() - 2; i < returnStr.length(); i++)
            {
                sss = sss + returnStr[i];
            }
            returnStr = sss;
        } 
        else if (key == 2)
        {
            std::string sss = "";
            int index = 0;
            for (int i=0;i<returnStr.length() - 2;i++) 
            {
                sss = sss + returnStr[i];
                index = index + 1;
                if (index == 3)
                {
                    sss = sss + "-";
                    index = 0;
                }
            }
            for (int i=returnStr.length() - 2; i < returnStr.length(); i++)
            {
                sss = sss + returnStr[i];
            }
            returnStr = sss;
        } 
        else 
        {
            std::string sss = "";
            int index = 0;
            for (int i=0;i<returnStr.length() - 3;i++) 
            {
                sss = sss + returnStr[i];
                index = index + 1;
                if (index == 3)
                {
                    sss = sss + "-";
                    index = 0;
                }
            }
            for (int i=returnStr.length() - 3; i < returnStr.length(); i++)
            {
                sss = sss + returnStr[i];
            }
            returnStr = sss;
        }
        return returnStr;
    }
};
// @lc code=end

