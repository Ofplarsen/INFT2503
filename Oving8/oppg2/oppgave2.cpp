//
// Created by ofplarsen on 12/09/2022.
//


template <typename Type1, typename Type2>
/**
 * Doesn't work with types that can't add or and can't compare.
 * @tparam Type1
 * @tparam Type2
 */
class Pair {
    private:

    public:
        Type1 first;
        Type2 second;
        Pair(Type1 first, Type2 second) : first(first), second(second){}

        Pair<Type1, Type2> operator+(Pair<Type1, Type2> other) {
            Pair pair = *this;

            pair.first += other.first;
            pair.second += other.second;
            return pair;
        }

    bool operator>(Pair<Type1, Type2> other) {
        Pair pair = *this;
        if(pair.first < other.first && pair.second < other.second)
            return false;

        return true;
    }

};



#include <iostream>
using namespace std;
int main() {
    Pair<double, int> p1(3.5, 14);
    Pair<double, int> p2(2.1, 7);
    cout << "p1: " << p1.first << ", " << p1.second << endl;
    cout << "p2: " << p2.first << ", " << p2.second << endl;

    if (p1 > p2)
        cout << "p1 er størst" << endl;
    else
        cout << "p2 er størst" << endl;

    auto sum = p1 + p2;
    cout << "Sum: " << sum.first << ", " << sum.second << endl;
}
