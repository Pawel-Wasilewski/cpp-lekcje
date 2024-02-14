#include <iostream>
#include <cstdlib>  
#include <ctime> 
#include <iomanip>
#include <time.h>
#include <omp.h>

using namespace std;

void moda(){
  //TO DO
}

void mediana(){
    //TO DO
    
}

int main() {
    
    //tworzenie tablicy
    
    int tab_wiel;

    srand(static_cast<unsigned int>(time(nullptr)));
    
    cout << "Wybierz wielkosc tablicy: ";
    cin >> tab_wiel;

    int tablica[tab_wiel];

    for (int i = 0; i < tab_wiel; ++i) {
        tablica[i] = rand() % 10;
    }

    cout << "Zawartosc tablicy: ";
    for (int i = 0; i < tab_wiel; ++i) {
        cout << tablica[i] << " ";
    }
    cout << endl;
    
    //switch
    int wybor;
    
    cout << "Co chcesz zrobic?" << endl << endl;
    cout << "1. MODA" << endl << "2. MEDIANA " << endl;
    cin >> wybor;
    
    switch(wybor) {
    
        case 0:
            cout << "Zakonczono." << endl;
            return 0;
    
        case 1:
            for(int j=0; j<tab_wiel; j++){
                for(int i=0; i<tab_wiel; i++){
                    if(tablica[i]>tablica[i+1]) swap(tablica[i], tablica[i+1]);
                }
            }
            cout << "Po sortowaniu: ";
            for(int i=0; i<tab_wiel; i++){
                cout << tablica[i] << " ";
            }
            cout << endl;
            
            moda();
            return 0;
        
        case 2:
            for(int j=0; j<tab_wiel; j++){
                for(int i=0; i<tab_wiel-1; i++){
                    if(tablica[i]>tablica[i+1]) swap(tablica[i], tablica[i+1]);
                }
            }
            cout << "Po sortowaniu: ";
            for(int i=0; i<tab_wiel; i++){
                cout << tablica[i] << " ";
            }
            cout << endl;
            
            mediana();
            return 0;
    }
}
