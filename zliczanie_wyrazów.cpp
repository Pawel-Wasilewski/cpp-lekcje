#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    /*
    zlw - zdanie lub wyraz
    lz - ilosc znaków
    tdlz - tablica do liczenia znaków
    */
    
    string zlw;
    
    cout << "Wypisz swoj wyraz: ";
    cin >> zlw;
    cout << "Wypisany wyraz to: " << zlw << endl;
    
    if(zlw.empty())
    {
        cout << "Ciąg jest pusty :(";
        return 0;
    }
    
    // Liczenie ile jest liter
    
    int lz = zlw.size();
    
    cout << "Wyraz posiada " << lz << " znaków." <<endl;
    
    // Patrzenie jakie litery
    
    char tdlz[zlw.size()+1];
    
    strcpy(tdlz, zlw.c_str());
    
    
    
    
    
    
    
    /*
    WAŻNE
    
    kod nie jest skończony będę dopiero mógł albo u Szkabara lub w Pon. wsiędnądź na tym by to zrobić więc jak chcesz Kevin go poprwaić czy coś to bier
    */
}
