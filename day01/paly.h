//
// Created by 刘鹏 on 2019/12/20.
//

#ifndef LEETCODE_PALY_H
#define LEETCODE_PALY_H

void lpCout();

class People {

public:
    char *getLpName() {
        return this->lp_name;
    }

    void setLpName(char *lpName);

    int getLpAge() {
        return this->lp_age;
    }

    void setLpAge(int lpAge);

private:
    char *lp_name;
    int lp_age;

};


#endif //LEETCODE_PALY_H
