//
// Created by 刘鹏 on 2020/1/21.
//

#include "FindMinArrowShots.h"

int FindMinArrowShots::findMinArrowShots(std::vector<std::vector<int>> &points) {
    /*int numbers[10000];
    memset(numbers, 0, 10000);
    auto sum = 0;
    for (auto item : points) {
        for (int i = item[0]; i < item[1]; i++) {
            if (numbers[i] == 0) {
                numbers[i] = 1;
                sum = sum + 1;
            }
        }
    }
    return sum;*/
    if (points.size() == 0) return 0;

    // sort by x_end
    sort(begin(points), end(points),
         [](const std::vector<int> &o1, const std::vector<int> &o2) {
             return (o1[1] < o2[1]);
         });

    int arrows = 1;
    int xStart, xEnd, firstEnd = points[0][1];
    for (auto p : points) {
        xStart = p[0];
        xEnd = p[1];
        // if the current balloon starts after the end of another one,
        // one needs one more arrow
        if (firstEnd < xStart) {
            arrows++;
            firstEnd = xEnd;
        }
    }
    return arrows;
}
