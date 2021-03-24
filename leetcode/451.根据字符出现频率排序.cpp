/*
 * @lc app=leetcode.cn id=451 lang=cpp
 *
 * [451] 根据字符出现频率排序
 */

// @lc code=start
#include <map>

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        string res = "";
        for (auto ch : s) {
            mp[ch]++;
        }
        while (!mp.empty()) {
            int max = 0;
            char temp;//这个用来保存key值，
            for (unordered_map<char,int>::iterator it = mp.begin(); it != mp.end(); ++it) {
                if (max < it->second) {
                    max = it->second;//找到最大的值
                    temp = it->first;//找到其对应的key，便于后面删除
                }
            }
            while (max) { //重复的次数
                res += temp;
                --max;
            }
            mp.erase(temp);//把这个key删除
        }
        return res;
    }
};
// @lc code=end

