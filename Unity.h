//
// Created by DF-Laptop on 2019/12/11.
//

#ifndef CPPLESON_UNITY_H
#define CPPLESON_UNITY_H

#include <iostream>
using namespace std;

class Unity {
protected:
int int_healthPoint;
string str_name;
virtual void fn_setName(string input) = 0;
virtual void fn_setHP(int input) = 0;
virtual void fn_setATK(int input) = 0;

    int int_attackPoint;
public:
    Unity() = default;
};

#endif //CPPLESON_UNITY_H
