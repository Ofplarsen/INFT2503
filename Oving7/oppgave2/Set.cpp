//
// Created by ofplarsen on 08/09/2022.
//

#include <sstream>
#include "Set.h"

Set::Set() {

}

Set Set::operator*(const Set &other) {
    Set set = *this;

    for (int number : other.numbers) {
        bool add = true;
        for(int y : set.numbers){
            if(number == y)
                add = false;
        }
        if(add)
            set.numbers.emplace_back(number);
    }
    return set;
}

Set::Set(vector<int> numbers) {
    this->numbers = numbers;
}

const vector<int> &Set::getNumbers() const {
    return numbers;
}

Set Set::operator+(int number) {
    Set set = *this;
    bool add = true;
    for (int member : set.numbers) {
        if(member == number)
            add = false;
    }
    if(add)
        set.numbers.emplace_back(number);
    return set;
}

Set &Set::operator=(const Set &other) {
    numbers = other.numbers;
    return *this;
}


ostream &operator<<(ostream &out, const Set &set){
    string string = "";
    for(int number : set.getNumbers()){
        string += (to_string(number) + " ");
    }
    out << string;
    return out;
}
