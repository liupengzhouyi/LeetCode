//
// Created by liupeng on 2020/1/28.
//

#include "MaxProfitII.h"

int MaxProfitII::maxProfit(std::vector<int> &prices) {
    auto temp = 0;
    auto max = 0;
    for (auto index = 1; index < prices.size(); index++) {
        if(prices[index-1] > prices[index]) {
            continue;
        } else {
            temp = prices[index] - prices[index-1];
            max = max + temp;
        }
    }
    return max;
}
