#include <iostream>
#include <vector>
using namespace std;

void fn_voidVecPrint(const vector<int >& myVec, vector<int>::iterator it);

int main (){
    vector<int> myVec = {1,2};
    auto it = myVec.begin();
    fn_voidVecPrint(myVec,it);
}
void fn_voidVecPrint(const vector<int >& myVec, vector<int>::iterator it) {
    if (it != myVec.end()){
        cout << *it << ' ';
        fn_voidVecPrint(myVec,it+1);
    }
}