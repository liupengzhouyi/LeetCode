//
// Created by 刘鹏 on 2020/6/7.
//

#include "Paly1423.h"

int Paly1423::maxScore(std::vector<int> &cardPoints, int k) {
    auto sum = 0, max = 0;
    if (k >= cardPoints.size()) {
        for (auto item : cardPoints) {
            sum = sum + item;
        }
    } else {
        for (auto i = 0; i < k; i++) {
            sum = sum + cardPoints[i];
        }
        max = sum;
        auto index = 1;
        for (auto i = k-1; i >= 0; i--) {
            std::cout << cardPoints[i] << std::endl;
            sum = sum - cardPoints[i] + cardPoints[cardPoints.size()-index];
            index = index + 1;
            max = max < sum ? sum : max;
        }
        sum = max;
    }
    return sum;
}
