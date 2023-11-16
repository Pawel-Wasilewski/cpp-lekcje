#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(nullptr)));
    
    
    int size = 10;
    char numbers[size];
    
    for (int i = 0; i < size; i++) {
        numbers[i] = rand() % 10;
    }
    
    cout << "Zawartosc tablicy: ";
    for (int i = 0; i < 10; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}
// WERSJA For

//NIEDOKOŃCZONE