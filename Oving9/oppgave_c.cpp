//
// Created by ofplarsen on 13/09/2022.
//
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

ostream &operator<<(ostream &out, const vector<int> &table) {
    for (auto &e : table)
        out << e << " ";
    return out;
}

bool isOdd(int i){
    return i % 2 != 0;
}

int main(){

    vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
    cout << "v1: " << v1 << endl;

    vector<int> v2 = {2, 3, 12, 14, 24};
    cout << "v2: " << v2 << endl;

    replace_copy_if(v1.begin(), v1.end(), v1.begin(), isOdd, 100);
    cout << "v1: " << v1 << endl;

    return 0;
}

