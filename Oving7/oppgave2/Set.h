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
    Set();
    Set operator+(const Set &other);
};


#endif //OVING7_SET_H
