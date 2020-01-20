//
// Created by 刘鹏 on 2020/1/21.
//

#include "FindContentChildren.h"

int FindContentChildren::findContentChildren(std::vector<int> &g, vector<int> &s) {
    if (g.size() == 0 || s.size() == 0) {
        return 0;
    } else {
        for (int i = 0; i < g.size(); i++) {
            for (int j = i+1; j < g.size(); j++) {
                if (g[i] > g[j]) {
                    auto temp = g[j];
                    g[j] = g[i];
                    g[i] = temp;
                }
            }
        }
        for (int i = 0; i < s.size(); i++) {
            for (int j = i+1; j < s.size(); j++) {
                if (s[i] > s[j]) {
                    auto temp = s[j];
                    s[j] = s[i];
                    s[i] = temp;
                }
            }
        }
        auto i = 0, j = 0;
        while (i < g.size() && j < s.size()) {
            if (g[i] <= s[j]) {
                i = i + 1;
            }
            j = j + 1;
        }
        return j;
    }
}
