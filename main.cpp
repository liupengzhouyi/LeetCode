#include <iostream>
#include "day01/paly.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    People people;
    people.setLpAge(12);
    people.setLpName("liupeng");
    cout << people.getLpName() << " = " << people.getLpAge() << endl;
    lpCout();
    return 0;
}

