#include <iostream>
#include <string>

using namespace std;

int main() {
    string binarna;
    cout << "Podaj liczbe binarna: ";
    cin >> binarna;

    int dziesietna = 0;
    int binarnaLength = binarna.length();

    for (int i = 0; i < binarnaLength; i++) {
        if (binarna[i] == '1') {
            dziesietna = dziesietna * 2 + 1;
        } else if (binarna[i] == '0') {
            dziesietna = dziesietna * 2;
        } else {
            cout << "Nieprawidlowa liczba binarna" << endl;
            return 1; //zwraca błąd
        }
    }

    cout << "Wpisana liczba w systemie dziesietnym: " << dziesietna << endl;

    return 0;
}
