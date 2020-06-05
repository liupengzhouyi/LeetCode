//
// Created by 刘鹏 on 2020/2/2.
//

#ifndef LEETCODE_DIFFWAYSTOCOMPUTE_H
#define LEETCODE_DIFFWAYSTOCOMPUTE_H


#include <vector>
#include <map>

class DiffWaysToCompute {
private:
    std::map<std::pair<int,int>,std::vector<int>> m;
public:
    std::vector<int> diffWaysToCompute(std::string input1);

    std::vector<int> ways(const std::string& input,int left,int right);

    int ops(char op, int l, int r);
};

#endif //LEETCODE_DIFFWAYSTOCOMPUTE_H
