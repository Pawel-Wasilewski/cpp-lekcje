#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class WyszukajZWartownikiem{
  public:
  int tablicaLosowych[51];
  
  /*
  opis działania: wypełnia tablicę wartościami pseudolosowymi.
  nazwa funkcji: wypelnijTablice
  argumenty funkcji: tablica - tablica liczb całkowitych.
  wartość zwracana przez funkcję: brak.
  autor funkcji: Kevin P.
  */
  void wypelnijTablice(int tablica[]){
      srand(time(0));
      
      for(int i = 0; i <= 49; i++){
          tablica[i] = (rand() % 100) + 1;
      }
  }
  
  /*
  opis działania: wyświetla zawartość tablicy.
  nazwa funkcji: wyswietlTablice
  argumenty funkcji: tablica - tablica liczb całkowitych.
  wartość zwracana przez funkcję: brak.
  autor funkcji: Kevin P.
  */
  void wyswietlTablice(int tablica[]){
      cout << "Zawartość tablicy: " << endl;
      for(int i = 0; i <= 49; i++){
          cout << " - " << tablica[i];
      }
  }
  
  /*
  opis działania: znajduje wartość podaną przez użytkownika w tablicy.
  nazwa funkcji: znajdzWartosc
  argumenty funkcji: tablica - tablica liczb całkowitych; 
                     wartosc - liczba całkowita wpisana przez użytkownika.
  wartość zwracana przez funkcję: indeks, na którym znajduje się wartość. 99 w razie niepowodzenia.
  autor funkcji: Kevin P.
  */
  int znajdzWartosc(int tablica[], int wartosc){
      tablica[50] = wartosc;
      int dlugosc = 50;
      
      for(int i = 0; i <= dlugosc; i++){
          if(tablica[i] == wartosc){
              if(i == 50){
                 return 99;
              }
              return i;
          }
      }
  }
    
};

int main()
{
    WyszukajZWartownikiem szukaj;
    int szukanaWartosc;
    
    szukaj.wypelnijTablice(szukaj.tablicaLosowych);
    
    cout << "Wprowadź wartość z zakresu 1-100 do wyszukania w tablicy: ";
    cin >> szukanaWartosc;
    
    szukaj.wyswietlTablice(szukaj.tablicaLosowych);
    
    int indeks = szukaj.znajdzWartosc(szukaj.tablicaLosowych, szukanaWartosc);
    
    if(indeks != 99){
        cout << endl << "Znaleziono! Indeks: " << indeks;
    }
    else{
        cout << endl << "Nie znaleziono.";
    }

    return 0;
}
