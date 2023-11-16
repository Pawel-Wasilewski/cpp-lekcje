// Napisz program pozwalający na obliczenie wartości wyrażenia w, danego wzorem: a/b + c/(a+b)+(a+c)/(a+b+c+d) Wartości argumentów: a, b, c i d mają być wprowadzane z klawiatury. Zabezpiecz program przed próbą (próbami) dzielenia przez zero. Wykonaj program w dwóch wariantach:
//• z użyciem instrukcji if (wariant pierwszy),
//• z użyciem instrukcji if-else (wariant drugi).

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    start:
    int a, b, c, d; 
    
    cout << "Wypisz a: ";
    cin >> a;
    cout << "Wypisz b: ";
    cin >> b;
    cout << "Wypisz c: ";
    cin >> c;
    cout << "Wypisz d: ";
    cin >> d;
    
    if (a == 0 || b == 0 || c == 0 || d == 0) {
        cout << "Nie ma dzielenia przez 0!" << endl << endl;
        goto start;
    }
    
    int wynik = a/b+c/(a+b)+(a+c)/(a+b+c+d);
    
    cout << "Wynik to: " << wynik;
    return 31;
}