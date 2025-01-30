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

double bisekcja(Funkcja *xf, double p, double k, double d){
    
    while((k-p)>=d){
    double srodek = (p+k)/2;
    double srodek_fun = xf->wartosc(srodek);
    
    if(srodek_fun == 0){
        return srodek_fun;
    }
    if((xf->wartosc(p) > 0 && srodek_fun < 0) || (xf->wartosc(p) < 0 && srodek_fun > 0)){
        k = srodek;
    }
    else{
        p = srodek;
    }
  }
    
    return (p+k)/2;
}

int main()
{
    cout<<"Hello World" << endl;
    
    Funkcja_Liniowa f1(2,-3);
    
    double wartosc = bisekcja(&f1, 0, 10, 0.1);
    cout << wartosc;

    return 0;
}
