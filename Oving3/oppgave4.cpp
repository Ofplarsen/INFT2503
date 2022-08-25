//
// Created by ofplarsen on 25/08/2022.
//
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

int main(){

    string word1;
    string word2;
    string word3;

    cin >> word1;
    cin >> word2;
    cin >> word3;

    string sentence = word1 + " " + word2 + " " + word3 + ".";

    cout << word1 << ": " << word1.length() << endl;
    cout << word2 << ": " << word2.length() << endl;
    cout << word3 << ": " << word3.length() << endl;
    cout << sentence << ": " << sentence.length() << endl;

    string sentence2(sentence);

    cout << sentence2 << ": " << sentence2.length() << endl;

    return 0;
}
