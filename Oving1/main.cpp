#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <iomanip>

using namespace std;


int main() {
    // Oving 1 a)

    const int length = 5;
    double temperatures[length];
    cout << "Du skal skrive inn " << length << " temperaturer." << endl;

    for(int i = 0; i < length; i++){
        cout << "Temperatur nr " << i + 1 << ": ";
        cin >> temperatures[i];
    }

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
