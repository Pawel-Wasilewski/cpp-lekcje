#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int L1, L2;
    
    int parzyste = 0;
    int nieparzyste = 0;
    
    cout << "Podaj pierwszą wartość: ";
    cin >> L1;
    cout << "Podaj drugą wartość: ";
    cin >> L2;
    
    do {
        if (L1 % 2 == 0) {
            parzyste += 1;
        } else {
            nieparzyste += 1;
        }
        L1++;
    } while (L1 < L2);
    
    cout << "Suma liczb parzystych: " << parzyste << endl << "Suma liczb nieparzystych: " << nieparzyste;
    
    return 27;
}
// WERSJA Do > While (dziwna pętla ale ok)