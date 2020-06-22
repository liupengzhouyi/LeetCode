#include <iostream>
#include "c20200506/Paly605/Paly605.h"


using namespace std;

int main() {
    long o = 1;
    for (auto i = 1; i <= 30; i++) {
        o = o * i;
        o = o % 100000000;
        std::cout << i << " - " << o << std::endl;
    }
    return 0;
}