//
// Created by DF-Laptop on 2019/12/11.
//

#include "Monster.h"

Monster::Monster() {
    str_name = "Monster_unknown";
    str_race = "Unknown";
    int_attackPoint = -1;
    int_healthPoint = -1;
}

Monster::Monster(const string &name, const int &HP, const int &ATK, const string &RaceName) {
    str_name = "Monster_" + name;
    int_healthPoint = HP;
    int_attackPoint = ATK;
    str_race = RaceName;
}

void Monster::fn_setName(string input) {
    str_name = "Monster_" + input;
}

void Monster::fn_setHP(int input) {
    int_healthPoint = input *0.8;
}

void Monster::fn_setATK(int input) {
    int_attackPoint = input  * 1.2;
}

Monster::Monster(const Monster &input) {
    str_name = input.str_name;
    int_attackPoint = input.int_attackPoint;
    int_healthPoint = input.int_healthPoint;
    str_race = input.str_race;
}

ostream &operator<<(ostream &ss, const Monster &input) {
    ss << "\nName: " << input.str_name <<endl;
    ss << "Race:" << input.str_race <<endl;
    ss << "ATK: " << input.int_attackPoint <<endl;
    ss << "HP: " << input.int_healthPoint <<endl <<endl;
    return ss;
}

