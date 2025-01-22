#include <iostream>
#include <cmath>

using namespace std;

class Liczba{
    public:
    double re;
    double ref;
    
    
    Liczba(double re, double ref) : re(re), ref(re) {}
    
    virtual int modul(){
        
            if(re < 0){
                re *= -1;
            }
        
        return re;
    }
    
    bool wieksza(){
        if(re>ref){
            return true;
        }
        else{
            return false;
        }
    }
    
    
};

class Zespolone {
public:
    int im;
    Liczba l;

    Zespolone(double x, double y) : l(x, y) {}

    int modul() {
        return l.modul();
    }

    Liczba getliczba() {
        return l;
    }
    
    bool wieksza(){
        return l.wieksza();
    }
};

int main()
{
    double costam;
    
    cout << "Wprowadź liczbę. ";
    cin >> costam;
    
    Liczba l1(costam, costam);
    
    cout <<"Modul Twojej liczby wynosi " << l1.modul() << "." << endl;
    
    if(l1.wieksza()){
        cout << "Modul jest wiekszy." << endl;
    }
    else{
        cout << "Modul nie jest wiekszy." << endl;
    }
    cout << "-----------------" << endl;
    
    double gdziestam;
    
    cout << "Wprowadź liczbę. ";
    cin >> gdziestam;
    
    Zespolone l2(gdziestam, gdziestam);
    
    cout <<"Modul Twojej liczby wynosi " << l2.modul() << "." << endl;
    
    if(l2.wieksza()){
        cout << "Modul jest wiekszy." << endl;
    }
    else{
        cout << "Modul nie jest wiekszy." << endl;
    }
    

    return 0;
}
