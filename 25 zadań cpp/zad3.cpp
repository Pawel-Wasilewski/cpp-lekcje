#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int predkosc_km;
    
    cout << "Podaj prędkość (kilometry na godzinę): ";
    cin >> predkosc_km;
    
    int predkosc_wezly = predkosc_km / 1.852;
    
    cout << "Twoja prędkość w węzłach: " << setprecision(5) << predkosc_wezly;
    return 14;
}
