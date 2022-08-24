//
// Created by ofplarsen on 24/08/2022.
//
#include "iostream"
#include "oppgave1.cpp"
using namespace std;

int main(){
    Circle circle(5);

    int area = circle.get_area();

    cout << "Area is " << area << endl;

    double circumference = circle.get_circumference();
    cout << "Circumference is " << circumference << endl;
}

