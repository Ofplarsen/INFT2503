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

bool equal_ish(int i, int j){
    return abs(i-j) <= 2;
}


int main(){

    vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
    cout << "v1: " << v1 << endl;

    vector<int> v2 = {2, 3, 12, 14, 24};
    cout << "v2: " << v2 << endl;

    auto eq = equal(v1.begin(), v1.begin() + 5, v2.begin(), equal_ish);
    cout << "v1+5 interval: " << (eq ? "True" : "False") << endl;

    auto eq2 = equal(v1.begin(), v1.begin() + 4, v2.begin(), equal_ish);
    cout << "v1+4 interval: " << (eq2 ? "True" : "False") << endl;
    return 0;
}

