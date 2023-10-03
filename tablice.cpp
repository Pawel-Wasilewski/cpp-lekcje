#include <iostream>
#include <cstdlib>  
#include <ctime> 

using namespace std;

int main() {

    srand(static_cast<unsigned int>(time(nullptr)));

    int tablica[10];

    for (int i = 0; i < 10; ++i) {
        tablica[i] = rand() % 10;
    }

    cout << "Zawartosc tablicy: ";
    for (int i = 0; i < 10; ++i) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    int najwiekszy = tablica[0];
    for (int i = 1; i < 10; ++i) {
        if (tablica[i] > najwiekszy) {
            najwiekszy = tablica[i];
        }
    }

    int suma = 0;
    for (int i = 0; i < 10; ++i) {
        suma += tablica[i];
    }
    double srednia = static_cast<double>(suma) / 10.0;

    cout << "Najwiekszy element: " << najwiekszy << endl;
    cout << "Srednia arytmetyczna: " << srednia << endl;

    return 0;
}
