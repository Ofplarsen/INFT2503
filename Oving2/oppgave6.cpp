//
// Created by ofplarsen on 24/08/2022.
//
#include <iostream>
using namespace std;

int find_sum(const int *table, int length);

int main(){
    const int length = 20;
    int table[length];
    const int *pointer = table;

    for(int i = 0; i < length; i++){
        table[i] = i +1;
    }

    cout << "Sum first 10 Numbers: " << find_sum(pointer, 10) << endl;
    pointer = &table[10];
    cout << "Sum next 5 numbers: " << find_sum(pointer, 5) << endl;
    pointer = &table[15];
    cout << "Sum last 5 numbers: " << find_sum(pointer, 5) << endl;
}

int find_sum(const int *table, int length){
    int sum = 0;

    for(int i = 0; i < length; i++){
        sum += *table;
        table++;
    }

    return sum;
}