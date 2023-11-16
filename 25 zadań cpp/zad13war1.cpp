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
    
    while (L1 <= L2) {
        if (L1 % 2 == 0) {
            parzyste += 1;
        } else {
            nieparzyste += 1;
        }
        L1++;
    }
    
    cout << "Suma liczb parzystych: " << parzyste << endl << "Suma liczb nieparzystych: " << nieparzyste;
    
    return 28;
}
// WERSJA WHILE 