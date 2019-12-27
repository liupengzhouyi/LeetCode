#include <iostream>
#include <vector>
#include "day01/paly.h"
#include "001addTwoNumber/AddTownumber.h"
#include "aotu/test.h"
#include <math.h>

using namespace std;

/*
void paly(int number) {

    // 只有一位数
    if (number == 1) {
        cout << "1" << endl;
    } else if (number == 0) {
        cout << "0" << endl;
    }

}
*/


int main() {
    test * t = new test();
    t->coutSomething();

    /*AddTownumber * addTownumberByLP = new AddTownumber();

    for (int i = 1; i <= 10; i++) {
        addTownumberByLP->addNumber(i);
    }

    cout << "====" << endl;

    addTownumberByLP->printTree();*/

    /*vector<int> obj;
    vector<int> object;
    vector<int> temp;

    int target = 102;
    // push_back(elem)在数组最后添加数据
    for(int i=0;i<5;i++)
    {
        obj.push_back(i+1);
    }

    *//*obj.push_back(9);
    obj.push_back(3);
    obj.push_back(83);
    obj.push_back(5);
    obj.push_back(7);
    obj.push_back(53);*//*


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
        *//*cout << endl;
        for (int l = 0; l < object.size(); l++) {
            cout << l+1 << " ";
        }*//*
        cout << endl;
        for (int l = 0; l < object.size(); l++) {
            cout << object[l] << " ";
        }
        cout << endl;
    }*/

    return 0;
}

