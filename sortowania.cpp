#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;

const int n = 10; // 'Wielkość' tablicy


void tworz_tabele(){
   // Wypełnianie tablicy d[] liczbami "losowymi",
           // a następnie wyświetlanie jej zawartości: 
           int d[n],i,j;
           srand((unsigned)time(NULL));
            cout << "Przed sortowaniem: " << endl;
            for(i = 0; i < n; i++) d[i] = rand() % 10;
            for(i = 0; i < n; i++) cout << setw(2) << d[i];
            cout << endl << endl;
}

void babelkowe(){
            int d[n],i,j;

            // Sortowanie:
            for(j = 0; j < n - 1; j++)
            for(i = 0; i < n - 1; i++)
            if(d[i] > d[i + 1]) swap(d[i], d[i + 1]);
            
            // Wyświetlanie rezultatu:
            cout << "Po sortowaniu:" << endl;
            for(i = 0; i < n; i++) cout << setw(2) << d[i];
            cout << endl;
            }

void przez_wstawianie(){ //NIE DZIAŁA ODPOWIEDNIO!!!
            int d[n],i,j, pom;
    
            for(int i=1; i<n; i++)
            {
             //Wstawienie w odpowiednie miejsce
             pom = d[n];
             j = i-1;
             
             //Przesuwanie elementów większych od 'pom'
             while(j>=0 && d[j]>pom) 
             {
                        d[j+1] = d[j]; //Przesuwanie
                        --j;
             }
             d[j+1] = pom; //Wstawienie 'pom' w odpowiednie miejsce
             
             }
             cout << "Po sortowaniu:" << endl;
             for(int i=0; i<n; i++)
             cout<<d[i]<<" ";
          
}

int main(){
    
    int wybor;
    while(true){
        cout << "------------------------" << endl
        << "|      Wybierz typ:    |" << endl
        << "------------------------" << endl
        << "|      1. BABELKOWE    |" << endl
        << "------------------------" << endl
        << "|     2. WSTAWIANIE    |" << endl
        << "------------------------" << endl
        << "|         WKROTCE      |" << endl
        << "------------------------" << endl
        << "|   0, aby zakonczyc   |" << endl
        << "------------------------" << endl;
        cin >> wybor;
        
        switch(wybor){
            
        //--------------------------------------------------------
            
            case 0:
            cout << "------------------------" << endl
            << "|      Zakonczono.     |" << endl
            << "------------------------" << endl;
            return 0;
            
        //--------------------------------------------------------    
            
            case 1:
            cout << "------------------------" << endl;
            tworz_tabele();
            babelkowe();
            return 0;

        
        //--------------------------------------------------------
        //Biblioteczne    
            case 2:
            cout << "------------------------" << endl;
            tworz_tabele();
            przez_wstawianie();
            return 0;
            
        //--------------------------------------------------------
        
            default:
            cout << "------------------------" << endl
            << "| Nieodpowiedni numer! |" << endl
            << "------------------------" << endl
            << "|   Zacznij ponownie.  |" << endl
            << "------------------------" << endl;
            return 0;
}
        }
        
    }
