//
// Created by ofplarsen on 08/09/2022.
//

#include <iostream>
#include "Fraction.h"

using namespace std;

int main(){
    Fraction fraction1 = Fraction(1,2);
    Fraction fraction2 = Fraction(1,2);

    cout << (fraction1 - 7).numerator << endl;
    cout << "_" << endl;
    cout << (fraction1 - 7).denominator << endl;
    cout << endl;
    cout << (7 - fraction2).numerator << endl;
    cout << "_" << endl;
    cout << (7 - fraction2).denominator << endl;
    return 0;
}