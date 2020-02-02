#include <iostream>
#include <vector>
#include "022SingleNonDuplicate/SingleNonDuplicate.h"


using namespace std;

int main() {
    SingleNonDuplicate singleNonDuplicate;

    std::vector<int> vector;
    vector.push_back(1);
    vector.push_back(1);
    vector.push_back(3);
    vector.push_back(3);
    vector.push_back(4);
    vector.push_back(4);
    vector.push_back(5);
    vector.push_back(5);
    vector.push_back(2);
    std::cout << singleNonDuplicate.singleNonDuplicate(vector);

    return 0;
}