//
// Created by ofplarsen on 08/09/2022.
//
#ifndef OVING7_SET_H
#define OVING7_SET_H
#include "iostream"
#include <vector>
using namespace std;

class Set {
private:
    vector<int> numbers;
public:
    const vector<int> &getNumbers() const;

    Set();
    Set(vector<int> numbers);
    Set operator*(const Set &other);
    Set operator+(int number);
    Set &operator=(const Set &other);


};
ostream &operator<<(ostream &out, const Set &set);

#endif //OVING7_SET_H
