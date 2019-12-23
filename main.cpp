#include <iostream>
#include <vector>
#include "day01/paly.h"
#include <math.h>

using namespace std;

void paly(int number) {





}


int main() {
    vector<int> obj;
    vector<int> object;
    vector<int> temp;

    int target = 102;
    // push_back(elem)在数组最后添加数据
    /*for(int i=0;i<5;i++)
    {
        obj.push_back(i+3);
    }*/
    obj.push_back(9);
    obj.push_back(3);
    obj.push_back(83);
    obj.push_back(5);
    obj.push_back(7);
    obj.push_back(53);


    object.push_back(0);

    for(int i=0;i<obj.size();i++)//size()容器中实际数据个数
    {
        cout << "当前元素：" << obj[i] << " - ";
        if(i == 0) {
            object.push_back(obj[i]);
        } else {
            for (int j = 0; j < object.size(); j++) {
                int t = obj[i] + object[j];
                temp.push_back(t);
            }
        }

        for (int k = 0; k < temp.size(); k++)//size()容器中实际数据个数
        {
            object.push_back(temp[k]);
        }
        // 清空本次产生的数据
        temp.clear();
        cout << endl;
        for (int l = 0; l < object.size(); l++) {
            cout << l+1 << " ";
        }
        cout << endl;
        for (int l = 0; l < object.size(); l++) {
            cout << object[l] << " ";
        }
        cout << endl;
    }

    return 0;
}

