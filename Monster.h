//
// Created by DF-Laptop on 2019/12/11.
//

#ifndef CPPLESON_MONSTER_H
#define CPPLESON_MONSTER_H


#include "Unity.h"

class Monster : public Unity{
    string str_race;
public:
    Monster();
    Monster(const Monster& input);
    Monster(const string& name, const int& HP, const int& ATK, const string& RaceName);
    void fn_setName(string input) override ;
    void fn_setHP(int input) override ;
    void fn_setATK(int input) override ;
    friend ostream& operator<< (ostream &ss, const Monster& input);
};


#endif //CPPLESON_MONSTER_H
