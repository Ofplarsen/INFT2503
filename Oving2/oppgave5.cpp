//
// Created by ofplarsen on 24/08/2022.
//

#include <iostream>
using namespace std;
void printNumb(double number, const double *pointer, double &ref);

int main(){
    double number;
    double *pointer = &number; //pointer must point to address :p
    double &ref = number;

    number = 10;
    printNumb(number, pointer, ref);
    *pointer = 9;
    printNumb(number, pointer, ref);
    ref = 8;
    printNumb(number, pointer, ref);
}

void printNumb(double number, const double *pointer, double &ref){
    cout << number << endl;
    cout << *pointer << endl;
    cout << ref << endl;
}