//
// Created by DF-Laptop on 2019/12/11.
//

#include "Human.h"

Human::Human() {
    str_name = "Human_unknown";
    int_healthPoint = 0;
    int_attackPoint = 0;
    str_weaponName = "Unknown";
    int_attackPoint = -1;
    int_healthPoint = -1;
}

void Human::fn_setName(string input) {
    str_name = "Human_" + input;
}

Human::Human(const Human &input) {
    str_name = input.str_name;
    int_attackPoint = input.int_attackPoint;
    int_healthPoint = input.int_healthPoint;
    str_weaponName = input.str_weaponName;
}



void Human::fn_setHP(int input) {
    int_healthPoint = (int)(input * 1.2);
}

void Human::fn_setATK(int input) {
    int_attackPoint = (int) (input *0.8);
}

Human::Human(const string &name, const int &HP, const int &ATK, const string &WeaponName) {
    str_name = "Human_" + name;
    int_healthPoint = HP;
    int_attackPoint = ATK;
    str_weaponName = WeaponName;
}


ostream &operator<<(ostream& ss, const Human &input) {
    ss << "\nName: " << input.str_name <<endl;
    ss << "Weapon Name: " << input.str_weaponName <<endl;
    ss << "ATK: " << input.int_attackPoint <<endl;
    ss << "HP: " << input.int_healthPoint <<endl <<endl;
    return ss;
}