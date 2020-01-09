//
// Created by DF-Laptop on 2019/12/11.
//

#ifndef CPPLESON_HUMAN_H
#define CPPLESON_HUMAN_H

#include "Unity.h"

class Human :public Unity {
    string str_weaponName;
public:
    Human();
    Human(const Human& input);
    Human(const string& name, const int& HP, const int& ATK, const string& WeaponName);
    void fn_setName(string input) override ;
    void fn_setHP(int input) override ;
    void fn_setATK(int input) override ;
    friend ostream &operator<<(ostream& ss, const Human &input);
};


#endif //CPPLESON_HUMAN_H
