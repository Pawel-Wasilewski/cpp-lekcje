#include <iostream>

using namespace std;

int main() {
    start:
    
    int podstawa, wysokosc;
    
    cout << "Jaką podstawę ma twój trójkąt?: ";
    cin >> podstawa;
    cout << "Jaką twój trójkąt ma wysokość?: ";
    cin >> wysokosc;
    
    if (podstawa <= 0 && wysokosc <= 0) {
        cout << "Podstawa lub wysokość wpisana jest niemożliwa! Popraw to" << endl << endl;
        goto start;
    }
    
    int pole = podstawa * wysokosc / 2;
    
    cout << "Pole trójkąta to: " << pole;
    
    return 25;
}
