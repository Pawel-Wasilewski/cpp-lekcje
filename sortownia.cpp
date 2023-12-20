#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <time.h>
#include <omp.h>

using namespace std;

const int n = 100000; // 'Wielkość' tablicy
void tworz_tabele(int d[]) {
    // Wypełnianie tablicy d[] liczbami "losowymi",
    // a następnie wyświetlanie jej zawartości:
    srand(static_cast<unsigned>(time(NULL)));
    cout << "Przed sortowaniem: " << endl;
    for (int i = 0; i < n; i++) d[i] = rand() % 10;
    //for (int i = 0; i < n; i++) cout << setw(2) << d[i];
    cout << endl << endl;
}

void babelkowe(int d[]) {
    // Sortowanie:
    clock_t start = clock();
    
    #pragma omp parallel for
    for (int j = 0; j < n - 1; j++)
        for (int i = 0; i < n - 1; i++)
            if (d[i] > d[i + 1]) swap(d[i], d[i + 1]);

    // Wyświetlanie rezultatu:
    cout << "Po sortowaniu:" << endl;
    for (int i = 0; i < n; i++) cout << setw(2) << d[i];
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    
    cout << endl << "Liczenie zajęło: "<< elapsed <<"s"<< endl;
}

void przez_wstawianie(int d[]) {
    clock_t start = clock();
    
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
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    
    cout << endl << "Liczenie zajęło: "<< elapsed <<"s"<< endl;
}

void przez_wybor(int d[]) {
    int i, j, min_idx;
    clock_t start = clock();
    
    for (i = 0; i < n - 1; i++) {
        // Znajdź indeks najmniejszego elementu w nieposortowanej części tablicy
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (d[j] < d[min_idx])
                min_idx = j;
        // Zamień najmniejszy element z pierwszym elementem nieposortowanej części
        swap(d[min_idx], d[i]);
    }
    
    cout << "Po sortowaniu:" << endl;
    //for (int i = 0; i < n; i++) cout << d[i] << " ";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    
    cout << endl << "Liczenie zajęło: "<< elapsed <<"s"<< endl;
}


int main() {
    int d[n];
    
x:
    int wybor;
    while (true) {
        cout <<endl<< "------------------------" << endl
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

            return 0;

        //--------------------------------------------------------

        case 1:
            cout << "------------------------" << endl;
            tworz_tabele(d);
            babelkowe(d);
            return 0;
        //--------------------------------------------------------
        // Biblioteczne (WSTAWIANIE)
        case 2:
            cout << "------------------------" << endl;
            tworz_tabele(d);
            przez_wstawianie(d);
            return 0;

        //--------------------------------------------------------
        // PRZEZ WYBÓR
        case 3:
            cout << "------------------------" << endl;
            tworz_tabele(d);
            przez_wybor(d);
            return 0;

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
