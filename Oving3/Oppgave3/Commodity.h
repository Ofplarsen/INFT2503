//
// Created by ofplarsen on 24/08/2022.
//

#ifndef OVING3_COMMODITY_H
#define OVING3_COMMODITY_H
#include "string"
using namespace std;
class Commodity {
public:
    Commodity(string name, int id, double price);
    string get_name() const {return name;};
    int get_id() const {return id;};
    double get_price(double quantity) const {return price * quantity;};
    double get_price() const {return price;};
    void set_price(double price);
    double get_price_with_sales_tax() const{return price * 1.25;};
    double get_price_with_sales_tax(double quantity) const;
private:
    string name;
    int id;
    double price;
};


#endif //OVING3_COMMODITY_H
