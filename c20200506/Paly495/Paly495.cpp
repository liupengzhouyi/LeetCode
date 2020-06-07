//
// Created by 刘鹏 on 2020/6/6.
//

#include "Paly495.h"

int Paly495::findPoisonedDuration(std::vector<int> &timeSeries, int duration) {
    auto sum = 0;
    if (timeSeries.size() == 0) {
        return 0;
    }
    for (int i = 0; i < timeSeries.size()-1; i++) {
        if ((timeSeries[i+1] - timeSeries[i]) >= duration) sum = sum + duration;
        else sum = sum + timeSeries[i + 1] - timeSeries[i];
    }
    sum = sum + duration;
    return sum;
}
