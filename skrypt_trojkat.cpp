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
    
    if (bok3 >= bok1 + bok2 || bok2 >= bok1 + bok3 || bok1 >= bok2 + bok3) {
        cout << "Podstawa jest za długa, aby utworzyć trójkąt." << endl;
        return 0;
    };

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

    if ((bok1^2) + (bok2^2) == (podstawa^2)) {
        cout << "To trojkat prostokatny" << endl;
    }
    int liczeniep = 0.5 * (podstawa + bok2 + bok1);
    int trokatap = sqrt(liczeniep * (liczeniep - podstawa) * (liczeniep - bok2) * (liczeniep - bok1));
    int obwtrojkota = podstawa + bok1 + bok2;
    cout << "Obwód trójkąta wynosi " << obwtrojkota << endl;
    cout << "Pole trójkąta wynosi " << trokatap << endl;
    return 0;
}
