#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


ostream &operator<<(ostream &out, const vector<int> &table) {
    for (auto &e : table)
        out << e << " ";
    return out;
}

bool biggerThan15(int i){
    return i > 15;
}

int main() {
    vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
    cout << "v1: " << v1 << endl;

    vector<int> v2 = {2, 3, 12, 14, 24};
    cout << "v2: " << v2 << endl;

    auto pos = find_if(v1.begin(), v1.end(), biggerThan15);
    cout << "First number bigger than 15 in v1: " << *pos << endl;

    return 0;
}
