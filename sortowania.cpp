#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;

const int n = 10; // 'Wielkość' tablicy


int main(){
    
    int wybor;
    while(true){
        cout << "------------------------" << endl;
        cout << "|      Wybierz typ:    |" << endl;
        cout << "------------------------" << endl;
        cout << "|      1. BABELKOWE    |" << endl;
        cout << "------------------------" << endl;
        cout << "|         WKROTCE      |" << endl;
        cout << "------------------------" << endl;
        cout << "|         WKROTCE      |" << endl;
        cout << "------------------------" << endl;
        cout << "|   0, aby zakonczyc   |" << endl;
        cout << "------------------------" << endl;
        cin >> wybor;
        
        switch(wybor){
            
        //--------------------------------------------------------
            
            case 0:
            cout << "------------------------" << endl;
            cout << "|      Zakonczono.     |" << endl;
            cout << "------------------------" << endl;
            return 0;
            
        //--------------------------------------------------------    
            
            case 1:
            cout << "------------------------" << endl;
            int d[n],i,j;
  
  
            // Wypełnianie tablicy d[] liczbami "losowymi",
           // a następnie wyświetlanie jej zawartości:

            srand((unsigned)time(NULL));
            cout << "Przed sortowaniem: " << endl;
            for(i = 0; i < n; i++) d[i] = rand() % 10;
            for(i = 0; i < n; i++) cout << setw(2) << d[i];
            cout << endl << endl;
  

            // Sortowanie:

            for(j = 0; j < n - 1; j++)
            for(i = 0; i < n - 1; i++)
            if(d[i] > d[i + 1]) swap(d[i], d[i + 1]);
      

            // Wyświetlanie rezultatu:

            cout << "Po sortowaniu:" << endl;
            for(i = 0; i < n; i++) cout << setw(2) << d[i];
            cout << endl;
            return 0;
            
        //--------------------------------------------------------
        //Biblioteczne    
            case 2:
            cout << "------------------------" << endl;
            cout << "|     Juz wkrotce!     |" << endl;
            cout << "------------------------" << endl;
            return 0;
            
        //--------------------------------------------------------
        //Przez wybór
            case 3:
            cout << "------------------------" << endl;
            cout << "|     Juz wkrotce!     |" << endl;
            cout << "------------------------" << endl;
            return 0;
            
        //--------------------------------------------------------
        
            default:
            cout << "------------------------" << endl;
            cout << "| Nieodpowiedni numer! |" << endl;
            cout << "------------------------" << endl;
            cout << "|   Zacznij ponownie.  |" << endl;
            cout << "------------------------" << endl;
            return 0;
}
        }
        
    }
