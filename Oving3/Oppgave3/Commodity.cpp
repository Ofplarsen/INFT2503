//
// Created by ofplarsen on 24/08/2022.
//

#include "Commodity.h"

Commodity::Commodity(string name, int id, double price) {
    this->name = name;
    this->id = id;
    this->price = price;
}

void Commodity::set_price(double price) {
    this->price = price;
}

double Commodity::get_price_with_sales_tax(double quantity) const{
    return price * quantity * 1.25;
}


