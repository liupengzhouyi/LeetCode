#include <iostream>
#include "c20200506/Paly605/Paly605.h"


using namespace std;

int main() {

    Paly605 paly605 = Paly605();
    std::vector<int> list;
    list.push_back(1);
    list.push_back(0);
    list.push_back(0);
    list.push_back(0);
    list.push_back(1);
    list.push_back(0);
    list.push_back(0);
    list.push_back(0);
    list.push_back(1);
    list.push_back(0);
    list.push_back(0);
    list.push_back(1);
    paly605.canPlaceFlowers(list, 2);
    return 0;
}