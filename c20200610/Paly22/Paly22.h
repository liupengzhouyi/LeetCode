//
// Created by 刘鹏 on 2020/6/10.
//

#ifndef LEETCODE_PALY22_H
#define LEETCODE_PALY22_H
#include <iostream>
#include <vector>
#include <string>

class Paly22 {
public:
    void backtrack(std::vector<std::string>& ans, std::string& cur, int open, int close, int n);
    std::vector<std::string> generateParenthesis(int n);
};


#endif //LEETCODE_PALY22_H
