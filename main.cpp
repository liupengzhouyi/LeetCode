#include <iostream>
#include <vector>
#include "001addTwoNumber/AddTownumber.h"
#include "aotu/test.h"
#include "002addTowNumberII/AddTowNumberII.h"
#include <math.h>

using namespace std;



int main() {
    AddTowNumberII addTowNumberIi;
    addTowNumberIi.init();
    std::vector<int> vector1 = addTowNumberIi.twoSum(addTowNumberIi.getVector(), 29);
    for (auto number : vector1) {
        std::cout << number << std::endl;
    }
    return 0;
}

