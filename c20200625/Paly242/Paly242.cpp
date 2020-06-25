//
// Created by 刘鹏 on 2020/6/25.
//

#include "Paly242.h"

bool Paly242::isAnagram(::std::string s, ::std::string t) {
    int list[26];
    for (auto i = 0; i < 26; i++) {
        list[i] = 0;
    }
    for (auto item : s) {
        list[(int) item - 'a'] = list[(int) item - 'a'] + 1;
    }
    for (auto i = 0; i < 26; i++) {
        std::cout << list[i] << " ";
    }
    std::cout << std::endl;
    for (auto item : t) {
        list[(int) item - 'a'] = list[(int) item - 'a'] - 1;
    }
    for (auto i = 0; i < 26; i++) {
        std::cout << list[i] << " ";
    }
    std::cout << std::endl;
    for (auto i = 0; i < 26; i++) {
        if (list[i] != 0) return false;
    }
    return true;
}
