//
// Created by ofplarsen on 24/08/2022.
//
#include <iostream>
using namespace std;

int main(){
    /*
    Original

    int a = 5;
    int &b; //Should be pointer (*) not a ref
    int *c;
    c = &b; // should be *b since b should be a pointer
    *a = *b + *c; // a is of type int (should be a), and not an int pointer (*)
    &b = 2; // Should be *b, since b should be a pointer (not ref)
    */
    int a = 5;
    int *b;
    int *c;
    c = b;
    a = *b + *c; // Must assign type of pointer
    *b = 2;

    cout << "a: " << a << endl;
    cout << "b: " << *b << endl;
    cout << "c: " << *c << endl;
}
