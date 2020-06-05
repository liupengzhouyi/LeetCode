#include <iostream>
#include "026MainElement/MainElement.h"


using namespace std;

int main() {

    MainElement mainElement = MainElement();
    std::vector<int> list;
    list.push_back(2);
    list.push_back(2);
    list.push_back(1);
    list.push_back(1);
    list.push_back(1);
    list.push_back(2);
    list.push_back(2);
    std::cout << mainElement.majorityElement(list);
    return 0;
}