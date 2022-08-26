//
// Created by ofplarsen on 25/08/2022.
//
#include <string>
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main(){
    //a)
    string word1;
    string word2;
    string word3;

    cin >> word1;
    cin >> word2;
    cin >> word3;

    //b)
    string sentence = word1 + " " + word2 + " " + word3 + ".";

    //c)
    cout << word1 << ": " << word1.length() << endl;
    cout << word2 << ": " << word2.length() << endl;
    cout << word3 << ": " << word3.length() << endl;
    cout << sentence << ": " << sentence.length() << endl;

    //d)
    string sentence2(sentence);

    //e)
    for(int i = 9; i < 12; i++) {
        if(sentence2.length() < 12) {
            cout << "Sentence does not contain enough letters to do operation" << endl;
            break;
        }
        sentence2[i] = 'x';
    }
    cout << sentence << endl;
    cout << sentence2 << endl;

    //f)
    string sentence_start;
    if(sentence.length() < 5) {
        cout << "Sentence does not contain enough letters to do operation" << endl;
    }else{
        sentence_start = sentence.substr(0,5);
    }

    cout << "First five letters: " << sentence_start << endl;

    //g)
    bool containsHello = sentence.find("hallo") != string::npos;

    cout << "Contains hallo: " << (containsHello ? "True" : "False") << endl;

    //h)
    vector<int> indexes;
    string sub = "er";

    int pos = sentence.find(sub, 0);
    while(pos != string::npos)
    {
        indexes.push_back(pos);
        pos = sentence.find(sub,pos+1);
    }

    cout << "Index of " << sub << "(s): ";
    for (int i = 0; i < indexes.size(); i++) {
        std::cout << indexes.at(i) << ", ";
    }
    return 0;
}
