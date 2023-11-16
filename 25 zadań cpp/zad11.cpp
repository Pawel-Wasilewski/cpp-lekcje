#include <iostream> 
#include <cmath>

using namespace std;

int main(){
    start:
    int x;
    
    cout << "Wypisz x: ";
    cin >> x;
    
    if (x == 0) {
        cout << "Nie można dzielić przez 0!" << endl << endl;
        goto start;
    }
    
    int wynik = sqrt(sin(x)/(x-1));
    
    if (wynik <= 0) {
        cout << "Pierwiastek jest na minusie!" << endl << endl;
        goto start;
    } else {
        cout << "Wynikiem funkcji to: " << wynik;
        return 25;
    }
}
// NIEDOKOŃCZONE