//
// Created by DF-Laptop on 2019/12/9.
//

#ifndef CPPLESON_GRADE_H
#define CPPLESON_GRADE_H

#include <iostream>
#include <vector>

using namespace std;

class Grade {
private: // only can  be accessed by itself or its friend class
    int int_Value;
    string str_name;
protected: //can also be accessed by classes which inherit it
public: // can be accessed anywhere
    // constructors
    Grade()= default;
    Grade(const string& name, const int& score);
    Grade(const Grade& input);

    // destructor
    ~Grade();

    // member functions
    int& EnterValue();
    int getValue() const;
    string getName() const;
    int getRank() const;
    bool operator==(const Grade& input);
    int int_rank;
};

void voidRanking(vector<Grade*>& input, int k);
void operator<<(ostream& ss, const Grade& input);


#endif //CPPLESON_GRADE_H
