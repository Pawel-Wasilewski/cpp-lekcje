#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Funkcja{
    public:
    
    virtual double wartosc(double x) = 0;
};

class Funkcja_Liniowa : public Funkcja{
    public:
    // Pozdrawiam serdecznie :P
    double a, b;
    
    Funkcja_Liniowa(double a, double b) : a(a), b(b) {}
    
    double wartosc(double x) override {
        return a * x + b;
    }
    
};

double bisekcja(Funkcja *xf, int p, int k, double d){
    double war;
    for(double i = p; i >= k; i += d){
        
        war = xf->wartosc(i);
        if(war == 0) {
            cout << war<< endl;
            i = 99999;
        }
    }
    return war;

    //NIE MAM POJĘCIA CO TU NIE TAK
}

int main()
{
    cout<<"Hello World" << endl;
    
    Funkcja_Liniowa f1(2,-3);
    
    double wartosc = bisekcja(&f1, 0, 10, 0.1);
    cout << wartosc;

    return 0;
}
