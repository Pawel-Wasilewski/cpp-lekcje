#include <iostream>
#include <cmath>

using namespace std;

int main() {
    start:
    double x;

    cout << "Wypisz x: ";
    cin >> x;

    if (x < 0) {
        cout << "pierwiastek z liczby ujemnej nie istnieje :_(" << endl << endl;
        goto start;
    } else if (x == 0) {
        cout << "Nie dziel przez zero!" << endl << endl;
        goto start;
    }

    double pierwiastek = sin(x) / (x - 1);

    if (pierwiastek <= 0) {
        cout << "Wartość pierwiastka jest niepoprawna :(" << endl << endl;
        goto start;
    }

    double wynik = sqrt(pierwiastek);

    cout << "Wynikiem funkcji to: " << wynik << endl;
    return 0;
}
