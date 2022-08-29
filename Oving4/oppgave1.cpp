//
// Created by ofplarsen on 29/08/2022.
//

#include <vector>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<double> numbers = {1.1, 1.2, 1.3, 1.4, 1.5};

    cout << "Front: " << numbers.front() << endl;
    cout << "Back: " << numbers.back() << endl;

    /*
    auto it  = numbers.begin();
    ++it;

    */
    numbers.emplace(++numbers.begin(), 1.15);

    cout << "Front: " << numbers.front() << endl;

    double search_number = 1.3;

    auto it = find(numbers.begin(), numbers.end(), search_number);

    if(it == numbers.end())
        cout << "Didn't find number!" << endl;
    else
        cout << "Found number" << endl;


    return 0;
}


