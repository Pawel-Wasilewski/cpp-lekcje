#include <iostream>
#include <cmath>

using namespace std;

int bok1, bok2, bok3;

int main() {
    cout << "Podaj 1 wartość: ";
    cin >> bok1;
    cout << "Podaj 2 wartość: ";
    cin >> bok2;
    cout << "Podaj 3 wartość: ";
    cin >> bok3;

    int podstawa;
    if (bok1 >= bok2 && bok1 >= bok3) {
        podstawa = bok1;
        bok1 = bok3;
    }
    if (bok2 >= bok1 && bok2 >= bok3) {
        podstawa = bok2;
        bok2 = bok3;
    }
    if (bok3 >= bok2 && bok3 >= bok1) {
        podstawa = bok3;
    }

    if (podstawa >= bok1 + bok2) {
        cout << "Podstawa jest za długa, aby utworzyć trójkąt." << endl;
        return 0;
    }
    int liczeniep = 0.5 * (podstawa + bok2 + bok3);
    int trokatap = sqrt(liczeniep * (liczeniep - podstawa) * (liczeniep - bok2) * (liczeniep - bok3));
    int obwtrojkota = podstawa + bok1 + bok2;
    cout << "Obwód trójkąta wynosi " << obwtrojkota << endl;
    cout << "Pole trójkąta wynosi " << trokatap << endl;
    return 0;
}
