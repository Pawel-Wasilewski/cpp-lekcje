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
    
    if (a == 0) {
        cout << "Twoje a jest zerem :(" << endl << endl;
        goto start;
    } if (b == 0) {
        cout << "Twoje b jest zerem :(" << endl << endl;
        goto start;
    } if (c == 0) {
        cout << "Twoje c jest zerem :(" << endl << endl;
        goto start;
    } if (d == 0) {
        cout << "Twoje d jest zerem :(" << endl << endl;
        goto start;
    } else {
        int wynik = a/b+c/(a+b)+(a+c)/(a+b+c+d);
        cout << "Wynik to: " << setprecision(5) << wynik;
        return 38;
    }
}