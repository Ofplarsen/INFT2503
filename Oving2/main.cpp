#include <iostream>


using namespace std;

void task1();
void task4();
void task5();
void task6();
int main() {

    //Task 1
    //task1();

    //Task 4
    //task4();

    //Task 5
    //task5();

    //Task 6
    task6();
    return 0;
}


void task1(){
    //a)
    int i = 3;
    int j = 5;
    int *p = &i; //p -> i
    int *q = &j; //q -> j
    cout<< "A: " <<endl;
    cout << "i: " << i << endl;
    cout << " : " <<  &i << endl;

    cout << "j: " << j << endl;
    cout << " : " <<  &j << endl;

    cout << "p: " << *p << endl;
    cout << " : " <<  p << endl;

    cout << "q: " << *q << endl;
    cout << " : " <<  q << endl;
    cout << endl;
    //b)

    *p = 7; // p -> i = 7
    *q += 4; // q -> j += 4 = 9
    *q = *p +1; // q -> j = (p -> i = 7) + 1 = 8
    p = q; // p -> q -> j
    // if *p = *q, p-> i = q -> j => i = j
    cout << *p << " " << *q << endl;

    cout<< "B: " <<endl;
    cout << "i: " << i << endl;
    cout << " : " <<  &i << endl;

    cout << "j: " << j << endl;
    cout << " : " <<  &j << endl;

    cout << "p: " << *p << endl;
    cout << " : " <<  p << endl;

    cout << "q: " << *q << endl;
    cout << " : " <<  q << endl;
}

void task4(){
    /*
    Original
    int a = 5;
    int &b; //ref must be inited on creation
    int *c; //Pointer should be pointing to null, if not inited
    *a = *b + *c; // Must assign type of pointer
    &b = 2;
    */
    //TODO
    int a = 5;
    int b = 0; //ref must be inited on creation
    int c = 0; //Pointer should be pointing to null, if not inited
    int *bp = &b;
    a = *bp + c; // Must assign type of pointer
    cout << a << endl;
    b = 2;
    cout << a << endl;
}

void task5(){
    double number = 10;

    double *pointer = &number; //pointer must point to address :p
    double &ref = number;

    cout << number << endl;
    cout << *pointer << endl;
    cout << ref << endl;
}

int find_sum(const int *table, int length){
    int sum = 0;

    for(int i = 0; i < length; i++){
        sum += *table;
        table++;
    }

    return sum;
}

void task6(){
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