//
// Created by 刘鹏 on 2020/6/25.
//

#include "Paly860.h"

bool Paly860::lemonadeChange(std::vector<int> &bills) {
    int m[3] = {0, 0, 0};
    for (auto item : bills) {
        if (item == 5) m[0] = m[0] + 1;
        if (item == 10) {
            m[1] = m[1] + 1;
            if (m[0] > 0) m[0] = m[0] - 1;
            else return false;
        }
        if (item == 20) {
            m[2] = m[2] + 1;
            if (m[1] > 0 && m[0] > 0) {
                m[1] = m[1] - 1;
                m[0] = m[0] - 1;
            } else if (m[0] >= 3) {
                m[0] = m[0] - 3;
            } else {
                return false;
            }
        }
    }
    return true;
}
