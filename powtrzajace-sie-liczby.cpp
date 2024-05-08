#include <iostream>
#include <unordered_set>
#include <ctime>
#include <cstdlib>

using namespace std;

void createtable(int* table, int n) {
    srand(static_cast<unsigned>(time(NULL)));
    for (int i = 0; i < n; i++) {
        table[i] = rand() % 50;
    }
}

bool duplikat(int* table, int n) {
    unordered_set<int> seen;
    for (int i = 0; i < n; ++i) {
        if (seen.find(table[i]) != seen.end()) {
            return true; 
        }
        seen.insert(table[i]);
    }
    return false; 
}

int main() {
    int n;
    cout << "Ile chcesz liczb: ";
    cin >> n;

    int* table = new int[n];
    createtable(table, n);

    clock_t start = clock();
    bool wynik = duplikat(table, n);
    clock_t end = clock();

    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    cout << "Czas wykonania: " << elapsed << " sekund\n";

    if(wynik == true) {
        cout<< "PRAWDA";
    } else {
        cout << "FAŁSZ";
    }

    delete[] table;
    return 0;
}
