//
// Created by 刘鹏 on 2020/1/22.
//

#include <iostream>
#include "ReconstructQueue.h"

std::vector<std::vector<int>> ReconstructQueue::reconstructQueue(std::vector<std::vector<int>> &people) {
    for (int i = 0; i < people.size(); i++) {
        for (int j = i + 1; j < people.size(); j++) {
            if (people[i][0] < people[j][0]) {
                std::vector<int> temp0 = people[i];
                people[i] = people[j];
                people[j] = temp0;
            }
            if (people[i][0] == people[j][0]) {
                if (people[i][1] > people[j][1]) {
                    std::vector<int> temp0 = people[i];
                    people[i] = people[j];
                    people[j] = temp0;
                }
            }
        }
    }

    std::vector<std::vector<int>> vector1;
    std::vector<std::vector<int>> vector2;
    for (int i = 0; i < people.size(); i++) {
        std::vector<int> temp;
        temp.push_back(people[i][0]);
        temp.push_back(people[i][1]);
        if (i <= people[i][1]) {
            vector1.push_back(temp);
        } else {
            for (auto j = people[i][1]; j < vector1.size(); j++) {
                std::vector<int> temp1 = vector1[j];
                vector1[j] = temp;
                temp = temp1;
            }
            vector1.push_back(temp);
        }
    }
    return vector1;
    /*for (int i = 0; i < people.size(); i++) {
        for (int j = i + 1; j < people.size(); j++) {
            if (people[i][0] < people[j][0]) {
                std::vector<int> temp0 = people[i];
                people[i] = people[j];
                people[j] = temp0;
            }
            if (people[i][0] == people[j][0]) {
                if (people[i][1] > people[j][1]) {
                    std::vector<int> temp0 = people[i];
                    people[i] = people[j];
                    people[j] = temp0;
                }
            }
        }
    }
    std::vector<std::vector<int>> vector1;
    for (int i = 0; i < people.size(); i++) {
        std::vector<int> temp;
        temp.push_back(people[i][0]);
        temp.push_back(people[i][1]);
        if (i <= people[i][1]) {
            vector1.push_back(temp);
        } else {
            for (auto j = people[i][1]; j < vector1.size(); j++) {
                std::vector<int> temp1 = vector1[j];
                vector1[j] = temp;
                temp = temp1;
            }
            vector1.push_back(temp);
        }
    }
    return vector1;*/
    /*for (int i = 0; i < people.size(); i++) {
        for (int j = i + 1; j < people.size(); j++) {
            if (people[i][0] < people[j][0]) {
                auto h = people[i][0];
                auto k = people[i][1];
                people[i][0] = people[j][0];
                people[i][1] = people[j][1];
                people[j][0] = h;
                people[j][1] = k;
            }
            if (people[i][0] == people[j][0]) {
                if (people[i][1] > people[j][1]) {
                    auto h = people[i][0];
                    auto k = people[i][1];
                    people[i][0] = people[j][0];
                    people[i][1] = people[j][1];
                    people[j][0] = h;
                    people[j][1] = k;
                }
            }
        }
    }

    for (int i = 0; i < people.size(); i++) {
        std::cout << people[i][0] << " " << people[i][1] << std::endl;
    }

    std::vector<std::vector<int>> vector1;
    std::vector<std::vector<int>> vector2;
    for (int i = 0; i < people.size(); i++) {
        std::vector<int> temp;
        temp.push_back(people[i][0]);
        temp.push_back(people[i][1]);
        if (i <= people[i][1]) {
            vector1.push_back(temp);
        } else {
            std::cout << temp[0] << "-" << temp[1] << ":";
            for (auto j = 0;j<vector1.size();j++) {
                std::vector<int> temp1;
                temp1.push_back(vector1[j][0]);
                temp1.push_back(vector1[j][1]);
                std::cout << temp1[0] << "-" << temp1[1] << " ";
            }
            std::cout << std::endl;
            for (auto j = people[i][1]; j < vector1.size(); j++) {
                std::vector<int> temp1;
                temp1.push_back(vector1[j][0]);
                temp1.push_back(vector1[j][1]);
                std::cout << temp[0] << "-" << temp[1] << " ";
                vector1[j] = temp;
                temp = temp1;
            }
            vector1.push_back(temp);
            std::cout << temp[0] << "-" << temp[1] << " ";
            std::cout << std::endl;
        }
    }
    for (int i = 0; i < vector1.size(); i++) {
        std::cout << vector1[i][0] << " " << vector1[i][1] << std::endl;
    }
    return vector1;*/
}
