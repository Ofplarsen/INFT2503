//
// Created by ofplarsen on 12/09/2022.
//

#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>
using namespace std;

template <typename Type>
bool equal(Type a, Type b){
    cout << "Template:" << endl;
    cout << a << " == " << b << " -> " << (a==b) << endl;
    return a == b;
}

bool equal(double a, double b){
    double err = 0.00001;
    double diff = abs(a-b);
    cout << "double:" << endl;
    cout << setprecision(8) << abs(a-b) << " < " << setprecision(7) << err << " -> " << (diff < err) << endl;
    cout << "Return : " << (diff < err) << endl;
    return diff < err;
}

int main(){
    int i_a = 4;
    int i_b = 5;
    int i_c = 4;

    double d_a = 4.111112;
    double d_b = 4.111118;
    double d_c = 4.111130;

    equal(i_a, i_b);
    cout << endl;
    equal(i_a, i_c);
    cout << endl;


    equal(d_a, d_b);
    cout << endl;
    equal(d_b, d_c);
    cout << endl;
    equal(d_a, d_c);
}

