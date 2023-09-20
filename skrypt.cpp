#include <iostream>
using namespace std;

int minval, maxval, allvals, newval;
char useroption;


int main() {
        cout << "wprowadz pierwsza zmienna: ";
        cin >> newval;
        
        minval = newval;
        maxval = newval;
        allvals = newval;
    
    while ((useroption != 'N') || (useroption != 'n'))
    {
        cout << "wprowadz nastepna zmienna: ";
        cin >> newval;

        allvals = allvals + newval;

        if (newval > maxval) {
            maxval = newval;
        }
        if (newval < minval) {
            minval = newval;
        }

        cout << "Czy chcesz podac nastepna zmienna (Y/N): ";
        cin >> useroption;
        if ((useroption == 'N') || (useroption == 'n')) 
        {
            cout << maxval << " Jest najwieksza liczba"<< endl;
            cout << minval << " Jest najmniejsza liczba"<< endl;
            cout << allvals << " Razem wszystkie wartosci"<<endl;
            break;
        }
    }
}