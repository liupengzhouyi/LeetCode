#include <iostream>
#include "010FindKthLargest/FindKthLargest.h"

using namespace std;

int main() {
    // 验证回文字符串 Ⅱ
    FindKthLargest findKthLargest;
    std::vector<int> vector1;
    vector1.push_back(2);
    vector1.push_back(1);
    findKthLargest.findKthLargest(vector1, 2);
    return 0;
}