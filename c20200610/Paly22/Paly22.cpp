//
// Created by 刘鹏 on 2020/6/10.
//

#include "Paly22.h"

void Paly22::backtrack(std::vector<std::string> &ans, std::string &cur, int open, int close, int n) {
    if (cur.size() == n * 2) {
        ans.push_back(cur);
        return;
    }
    if (open < n) {
        cur.push_back('(');
        backtrack(ans, cur, open + 1, close, n);
        cur.pop_back();
    }
    if (close < open) {
        cur.push_back(')');
        backtrack(ans, cur, open, close + 1, n);
        cur.pop_back();
    }
}

std::vector<std::string> Paly22::generateParenthesis(int n) {
    std::vector<std::string> result;
    std::string current;
    backtrack(result, current, 0, 0, n);
    return result;
}
