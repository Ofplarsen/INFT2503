#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;
int main() {
    char text[5];
    cout << "Skriv inn et ord: ";
    cin >> text;

    for(int i = 0; i < strlen(text); i++){
        text[i] = toupper(text[i]); //Uppercase
    }
    cout << "Uppercase: " << text << endl;

    for(int j = 0; j < strlen(text); j++){
        text[j] = tolower(text[j]);
    }

    cout << "Lower case: " << text << endl;

    return 0;
}
