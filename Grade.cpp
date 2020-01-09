//
// Created by DF-Laptop on 2019/12/9.
//

#include "Grade.h"

int  Grade::getValue() const {
    return int_Value;
}

string Grade::getName() const {
    return str_name;
}

int  Grade::getRank() const {
    return int_rank;
}



Grade::Grade() {
    cout << "Constructed by Grade::Grade()\n";
    int_Value = -1;
    int_rank = -1;
    str_name = "Unknown";
    return ;
}

Grade::Grade(const string& name, const int& score) {
    cout << "Constructed by Grade::Grade(const string&, const int&)\n";
    str_name = name;
    int_Value = score;
    int_rank = -1;
    return ;
}

Grade::Grade(const Grade &input) {
    cout << "Constructed by Grade::Grade(const Grade&)\n";
    int_Value  = input.int_Value;
    int_rank = input.int_rank;
    str_name = input.str_name;
}

Grade::~Grade() {
    cout << "destructed by Grade::~Grade()\n";
}

void voidRanking(vector<Grade*>& input, int k) {
    if (input.empty())
        return;
    int max = -1;
    int position = -1;
    int size =input.size();
    for(auto i  = 0; i < size; ++i){
        if(input[i]->getValue() > max) {
            max = input[i]->getValue();
            position =  i;
        }
    }
    input[position]->int_rank = k;
    input.erase(input. begin()+position);
    voidRanking(input , k+1);
}

bool Grade::operator==(const Grade &input) {
    return (int_Value == input.int_Value and str_name ==  input.str_name);
}

int& Grade::EnterValue() {
    return int_Value;
}



void operator<<(ostream& ss, const Grade& input){
    ss << "\nName: " << input.getName()<<endl;
    ss << "Score: " << input.getValue()<<endl;
    ss << "Rank: " << input.getRank() <<endl <<endl;
    return;
}