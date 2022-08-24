//
// Created by ofplarsen on 24/08/2022.
//
#include <iostream>
using namespace std;
int main(){
    int i = 3;
    int j = 5;
    int *p = &i; //p -> i
    int *q = &j; //q -> j
    cout<< "A: " <<endl;
    cout << "i: " << i << endl;
    cout << " : " <<  &i << endl;

    cout << "j: " << j << endl;
    cout << " : " <<  &j << endl;

    cout << "p: " << *p << endl;
    cout << " : " <<  p << endl;

    cout << "q: " << *q << endl;
    cout << " : " <<  q << endl;
    cout << endl;
    //b)

    *p = 7; // p -> i = 7
    *q += 4; // q -> j += 4 = 9
    *q = *p +1; // q -> j = (p -> i = 7) + 1 = 8
    p = q; // p -> q -> j
    // if *p = *q, p-> i = q -> j => i = j
    cout << *p << " " << *q << endl;

    cout<< "B: " <<endl;
    cout << "i: " << i << endl;
    cout << " : " <<  &i << endl;

    cout << "j: " << j << endl;
    cout << " : " <<  &j << endl;

    cout << "p: " << *p << endl;
    cout << " : " <<  p << endl;

    cout << "q: " << *q << endl;
    cout << " : " <<  q << endl;
}