// Napisz program umożliwiający obliczenie pola i obwodu koła dla promienia o wartości wprowadzonej z klawiatury. Zabezpiecz program przed wykonywaniem obliczeń dla promienia o długości niedodatniej. W razie wprowadzenia z klawiatury blednej (np. ujemnej) wartości promienia na ekranie powinien zostać wyświetlony odpowiedni komunikat.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    start:
    int π = 3.14, promien;
    
    cout << "Jaki promień wariacie: ";
    cin >> promien;
    
    if (promien <= 0) {
        cout << "Promień nie może być ujemny :(" << endl << endl;
        goto start;
    }
    
    int pole = π*promien;
    
    cout << "Pole koła to: " << setprecision(5) << pole;
    
    return 24;
}