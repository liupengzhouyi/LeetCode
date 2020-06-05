//
// Created by liupeng on 2020/1/27.
//

#include "MaxProfit.h"

int MaxProfit::maxProfit(std::vector<int> &prices) {
    auto max = -999;
    for (auto i = 0; i < prices.size(); i++) {
        for (auto j = i + 1; j < prices.size(); j++) {
            auto temp = prices[j] - prices[i];
            if (temp > max) {
                max = temp;
            }
        }
    }
    return max;
}
