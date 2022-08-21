#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <iomanip>
using namespace std;

void read_temperatures(double temperatures[], int length);

int main() {
    const int length = 6;
    double temperatures[length];
    // Oving 1 a)
    /*

    cout << "Du skal skrive inn " << length << " temperaturer." << endl;

    for(int i = 0; i < length; i++){
        cout << "Temperatur nr " << i + 1 << ": ";
        cin >> temperatures[i];
    }
    */

    //Oving 1 b)
    read_temperatures(temperatures, length);

    int underTen = 0;
    int between = 0;
    int overTwenty = 0;

    for(double temperature : temperatures){
        if(temperature < 10)
            underTen++;
        else if(temperature >= 10 && temperature <= 20)
            between++;
        else if(temperature > 20)
            overTwenty++;
    }
    cout << "Antall under 10 er " << underTen << endl;
    cout << "Antall mellom 10 og 20 er " << between << endl;
    cout << "Antall over 20 er " << overTwenty << endl;


    return 0;
}


void read_temperatures(double temperatures[], int length){
    const char filename[] = "numbers.dat";
    ifstream  file;
    file.open(filename);
    if(!file) {
        cout << "Feil ved åpning av fil" << endl;
        exit(EXIT_FAILURE);
    }
    int temp;
    int i = 0;
    while(file >> temp && i < length){ //Reads until end
        temperatures[i] = temp;
        i++;
    }

}

