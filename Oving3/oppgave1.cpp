//
// Created by ofplarsen on 24/08/2022.
//
#include "iostream"
using namespace std;

class Circle {
public:
    Circle(double radius_);
    int get_area() const;
    double get_circumference() const;

private:
    double radius;
    const double pi = 3.141592;
};

Circle::Circle(double radius_) : radius(radius_) {

}

int Circle::get_area() const {
    return pi * radius * radius;
}

double Circle::get_circumference() const {
    return 2.0 * pi * radius;
}


