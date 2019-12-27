//
// Created by 刘鹏 on 2019/12/27.
//

#include "test.h"
#include <iostream>

void test::coutSomething() {
    // 1. 自动帮助推导类型
    auto a = 10;
    auto c = 'A';
    auto s("hello");

    std::cout << a << c << std::endl;
}
