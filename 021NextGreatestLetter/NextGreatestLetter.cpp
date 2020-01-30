//
// Created by liupeng on 2020/1/30.
//

#include <iostream>
#include "NextGreatestLetter.h"

char NextGreatestLetter::nextGreatestLetter(std::vector<char> &letters, char target) {
    auto returnValue = '1';
    for (int i = 0; i < letters.size(); i=i+1) {
        if (target < letters[i]) {
            std::cout << letters[i] << std::endl;
            returnValue = letters[i];
            break;
        }
    }
    if (returnValue == '1') {
        returnValue = letters[0];
    }
    return returnValue;
}
