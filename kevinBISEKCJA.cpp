#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Funkcja{
    public:
    int x;
    
    Funkcja(int x) : x(x) {}
    
    virtual int wartosc(int x) = 0;
};

class Funkcja_Liniowa : public Funkcja{
    public:
    int a;
    int b;
    
    Funkcja_Liniowa(int ojej, int ajaj, int nwm) : a(ojej), b(ajaj), Funkcja(nwm){}
    
    int wartosc(int x) override{
        int wynik = a*x+b;
        return wynik;
    }
    
    //TODO: Bisekcja
  //TODO: Bisekcja      //TODO: Bisekcja
//TODO: Bisekcja        //TODO: Bisekcja
//TODO: Bisekcja
//TODO: Bisekcja
//TODO: Bisekcja        //TODO: Bisekcja
  //TODO: Bisekcja      //TODO: Bisekcja
    //TODO: Bisekcja
    
};

int main()
{
    cout<<"Hello World";
    
    Funkcja_Liniowa f1(12,6,3);
    
    int rezultat = f1.wartosc(f1.x);
    
    cout << rezultat;

    return 0;
}
