//
// Created by 刘鹏 on 2020/1/21.
//

#include <iostream>
#include "EraseOverlapIntervals.h"

int EraseOverlapIntervals::eraseOverlapIntervals(std::vector<std::vector<int>> &intervals) {
    if (intervals.size() == 0 || intervals.size() == 1) {
        return 0;
    } else {
        for (int i = 0; i < intervals.size(); i++) {
            for (int j = i + 1; j < intervals.size(); j++) {
                if (intervals[i][1] > intervals[j][1]) {
                    std::vector<int> temp = intervals[i];
                    intervals[i] = intervals[j];
                    intervals[j] = temp;
                }
            }
        }
        auto max = intervals[0][1], index = 0;
        for (int i = 1; i < intervals.size(); i++) {
            if (max > intervals[i][0]) {
                index = index + 1;
                continue;
            } else {
                max = intervals[i][1];
            }
        }
        return index;
    }
}
