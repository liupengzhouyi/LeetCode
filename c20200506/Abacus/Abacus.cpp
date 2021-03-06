//
// Created by 刘鹏 on 2020/6/6.
//

#include "Abacus.h"

int Abacus::getMax(int numberI, int numberII) {
    auto min = 0;
    if (numberI <= numberII) min = numberI;
    else min = numberII;
    return min;
}

std::vector<int> Abacus::masterMind(std::string solution, std::string guess) {
    int s = 0, g = 0;
    int a1 = 0, b1 = 0;
    int a2 = 0, b2 = 0;
    int a3 = 0, b3 = 0;
    int a4 = 0, b4 = 0;
    for (auto i = 0; i < guess.size(); i++) {
        if (guess[i] == solution[i]) g = g + 1, guess[i] = '-', solution[i] = '-';
        if (solution[i] == 'R') a1 = a1 + 1;
        if (solution[i] == 'G') a2 = a2 + 1;
        if (solution[i] == 'B') a3 = a3 + 1;
        if (solution[i] == 'Y') a4 = a4 + 1;
        if (guess[i] == 'R') b1 = b1 + 1;
        if (guess[i] == 'G') b2 = b2 + 1;
        if (guess[i] == 'B') b3 = b3 + 1;
        if (guess[i] == 'Y') b4 = b4 + 1;
    }
    s = s + getMax(a1, b1);
    s = s + getMax(a2, b2);
    s = s + getMax(a3, b3);
    s = s + getMax(a4, b4);
    std::vector<int> returnList;
    returnList.push_back(g);
    returnList.push_back(s);
    return returnList;
}

