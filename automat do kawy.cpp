#include <iostream>

using namespace std;

int main() {
    int wybor;
    int kwota = 0;
    int cena = 0;

    while (true) {
        cout << "Automat do napojow" << endl;
        cout << "1. Herbata - 2zł" << endl;
        cout << "2. Kawa - 3zł" << endl;
        cout << "3. Kakao - 5zł" << endl;
        cout << "Wybierz napoj (1-3) lub wprowadz 0 aby zakonczyc: ";
        cin >> wybor;

        switch (wybor) {
            case 0:
                cout << "Zakonczono wybor napojow." << endl;
                return 0;

            case 1:
                cena = 2;
                break;

            case 2:
                cena = 3;
                break;

            case 3:
                cena = 5;
                break;

            default:
                cout << "Nieprawidlowy wybor. Wybierz ponownie." << endl;
                continue;
        }

        cout << "Cena napoju: " << cena << "zł" << endl;

        while (kwota < cena) {
            int moneta;
            cout << "Wprowadz monete (1, 2 lub 5zł): ";
            cin >> moneta;

            if (moneta != 1 && moneta != 2 && moneta != 5) {
                cout << "Nieprawidlowa moneta. Wprowadz ponownie." << endl;
                continue;
            }

            kwota += moneta;
            cout << "Obecna kwota: " << kwota << "zł" << endl;
        }

        if (kwota >= cena) {
            cout << "Wydano napoj." << endl;

            if (kwota > cena) {
                int reszta = kwota - cena;
                cout << "Reszta: " << reszta << "zł" << endl;
            }

            kwota = 0;
        }
    }

    return 0;
}
