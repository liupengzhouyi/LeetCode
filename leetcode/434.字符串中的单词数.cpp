/*
 * @lc app=leetcode.cn id=434 lang=cpp
 *
 * [434] 字符串中的单词数
 */

// @lc code=start
class Solution {
public:
    int countSegments(string s) {
        s.erase(0,s.find_first_not_of(" "));
        s.erase(s.find_last_not_of(" ") + 1);
        if (s == "") return 0;
        bool key = false;
        int a = 0;
        for (int i=0;i<s.length();i++)
        {
            if (key == false)
            {
                if (s[i] == ' ')
                {
                    continue;
                }
                else
                {
                    key = true;
                }
            }
            else 
            {
                key = true;
                if (s[i] == ' ')
                {
                    key = false;
                    a = a + 1;
                }
            }
            
        }
        return a + 1;
    }
};
// @lc code=end

