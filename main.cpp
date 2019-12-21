#include <iostream>
#include <vector>
#include "day01/paly.h"

using namespace std;

int main() {
    vector<int> obj;
    vector<int> object;
    vector<int> temp;

    // push_back(elem)在数组最后添加数据
    for(int i=0;i<5;i++)
    {
        obj.push_back(i+1);
    }

    object.push_back(0);
    for(int i=0;i<obj.size();i++)//size()容器中实际数据个数
    {
        object.push_back(obj[i]);
        for (int l = 0; l > object.size(); l++) {
            cout << object[l] << " ";
        }
        cout << endl;

        for (int j = 0; j < object.size(); j++) {
            int t = obj[i] + object[j];
            temp.push_back(t);
        }

        for(int k=0;k<temp.size();k++)//size()容器中实际数据个数
        {
            object.push_back(temp[k]);
            cout << temp[k] << " ";
        }

        temp.clear();

    }






    return 0;
}

