#include <iostream>
#include <cmath>

using namespace std;

void wczytajInt(int &liczba1, int &liczba2) {
    while (true) {
        try {
            string input;
            cout << "Podaj liczbę 1 -> ";
            cin >> input;

            for (char c : input) {
                if (!isdigit(c) && c != '-' && c != '+') {
                    throw runtime_error("Postaraj się bardziej:");
                }
            }

            liczba1 = stoi(input);
            break;

        } catch (const exception &e) {
            cout << e.what() << endl;
        }
    }
    
    while (true) {
        try {
            string input;
            cout << "Podaj liczbę 2 -> ";
            cin >> input;

            for (char c : input) {
                if (!isdigit(c) && c != '-' && c != '+') {
                    throw runtime_error("Postaraj się bardziej:");
                }
            }

            liczba2 = stoi(input);
            break;

        } catch (const exception &e) {
            cout << e.what() << endl;
        }
    }
    
    
}


int main() {
    int liczba1, liczba2;

    wczytajInt(liczba1,liczba2);

    cout << "Wynik: " << liczba1 + liczba2 << endl;

    return 0;
}

