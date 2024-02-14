#include <iostream>
#include <algorithm>
#include <functional>
#include <cmath>
#include <cstdlib>  
#include <ctime> 
#include <iomanip>

using namespace std;

int main()
{
    int wybor, wielkosc_tablicy, mediana, moda;
    
    srand(static_cast<unsigned int>(time (nullptr)));
    
//  Tworzenie Tablicy

    cout << "Wybierz wielkość tablicy: ";
    cin >> wielkosc_tablicy;
    
    int tablica[wielkosc_tablicy];
    
    for (int i = 0; i < wielkosc_tablicy; i++) {
        tablica[i] = rand() % 10;
    }
    
    cout << "Nieposortowana tablica: ";
    for (int i = 0; i < wielkosc_tablicy; i++) {
        cout << tablica[i] << " ";
    }

//  Pole Działania Dla Użytkownika

    cout << endl << endl << "Co chcesz zrobić z tablicą?" << endl << "1. Moda (najczęściej powtarzająca się liczba)" << endl << "2. Mediana (Środkowa wartość)" << endl << "wybór: ";
    cin >> wybor;
    
    switch (wybor)
    {
        case 1:
        
        sort(tablica, tablica + wielkosc_tablicy);
        
         for( int i = 0; i < wielkosc_tablicy; i++ ) {
            cout << tablica[i] << " "; 
         }
    }
    
    
    return 0;
}
