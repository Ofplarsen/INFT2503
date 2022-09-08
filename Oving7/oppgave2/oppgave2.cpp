//
// Created by ofplarsen on 08/09/2022.
//

#include <vector>
#include "Set.h"

using namespace std;

int main(){
    cout << "Union: " << endl;
    Set set = Set({1,2,3,4});
    cout << set << endl;
    Set set2 = Set({3,4,5});
    Set set3 = set * set2;
    cout << set3 << endl;
    cout << endl;

    cout << "Add: " << endl;
    Set setAddFail = set + 1;
    cout << setAddFail << endl;
    Set setAddSuccess = set + 10;
    cout << setAddSuccess << endl;
    cout << endl;

    cout << "Equals: " << endl;
    Set equals1 = Set({1,2,3});
    Set equals2 = Set({4,5,6});
    cout << equals1 << endl;
    cout << equals2 << endl;
    equals1 = equals2;
    cout << equals1 << endl;
    cout << equals2 << endl;
    cout << endl;




    return 0;
}