#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <sys/time.h>
#include <omp.h>

using namespace std;

const int n = 100; // 'Wielkość' tablicy

void tworz_tabele(int d[]) {
    // Wypełnianie tablicy d[] liczbami "losowymi",
    // a następnie wyświetlanie jej zawartości:
    srand(static_cast<unsigned>(time(NULL)));
    cout << "Przed sortowaniem: " << endl;
    for (int i = 0; i < n; i++) d[i] = rand() % 10;
    for (int i = 0; i < n; i++) cout << setw(2) << d[i];
    cout << endl << endl;
}

void babelkowe(int d[]) {
    // Sortowanie:
    #pragma omp parallel for
    for (int j = 0; j < n - 1; j++)
        for (int i = 0; i < n - 1; i++)
            if (d[i] > d[i + 1]) swap(d[i], d[i + 1]);

    // Wyświetlanie rezultatu:
    cout << "Po sortowaniu:" << endl;
    for (int i = 0; i < n; i++) cout << setw(2) << d[i];
    cout << endl;
}

void przez_wstawianie(int d[]) {
    for (int i = 1; i < n; i++) {
        // Wstawienie w odpowiednie miejsce
        int pom = d[i];
        int j = i - 1;

        // Przesuwanie elementów większych od 'pom'
        while (j >= 0 && d[j] > pom) {
            d[j + 1] = d[j]; // Przesuwanie
            --j;
        }
        d[j + 1] = pom; // Wstawienie 'pom' w odpowiednie miejsce
    }
    cout << "Po sortowaniu:" << endl;
    for (int i = 0; i < n; i++) cout << d[i] << " ";
}

void przez_wybor(int d[]) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        // Znajdź indeks najmniejszego elementu w nieposortowanej części tablicy
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (d[j] < d[min_idx])
                min_idx = j;
        // Zamień najmniejszy element z pierwszym elementem nieposortowanej części
        swap(d[min_idx], d[i]);
    }
}

int main() {
    int d[n];
    struct timeval begin, end;
    gettimeofday(&begin, 0);
x:
    int wybor;
    while (true) {
        cout << "------------------------" << endl
             << "|      Wybierz typ:    |" << endl
             << "------------------------" << endl
             << "|      1. BABELKOWE    |" << endl
             << "------------------------" << endl
             << "|     2. WSTAWIANIE    |" << endl
             << "------------------------" << endl
             << "|         3. WYBOR      |" << endl
             << "------------------------" << endl
             << "|   0, aby zakonczyc   |" << endl
             << "------------------------" << endl;
        cin >> wybor;

        switch (wybor) {

        //--------------------------------------------------------

        case 0:
            cout << "------------------------" << endl
                 << "|      Zakonczono.     |" << endl
                 << "------------------------" << endl;
            gettimeofday(&end, 0);
            long seconds = end.tv_sec - begin.tv_sec;
            long microseconds = end.tv_usec - begin.tv_usec;
            double elapsed = seconds + microseconds * 1e-6;

            // No 'sum' variable in your code, removing the printf line for now
            // printf("Result: %.20f\n", sum);
            return 0;

        //--------------------------------------------------------

        case 1:
            cout << "------------------------" << endl;
            tworz_tabele(d);
            babelkowe(d);
            goto x;

        //--------------------------------------------------------
        // Biblioteczne (WSTAWIANIE)
        case 2:
            cout << "------------------------" << endl;
            tworz_tabele(d);
            przez_wstawianie(d);
            goto x;

        //--------------------------------------------------------
        // PRZEZ WYBÓR
        case 3:
            cout << "------------------------" << endl;
            tworz_tabele(d);
            przez_wybor(d);
            goto x;

        //--------------------------------------------------------

        default:
            cout << "------------------------" << endl
                 << "| Nieodpowiedni numer! |" << endl
                 << "------------------------" << endl
                 << "|   Zacznij ponownie.  |" << endl
                 << "------------------------" << endl;
            goto x;
        }
    }
}
