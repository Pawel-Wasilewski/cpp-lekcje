#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    /*
    zlw - zdanie lub wyraz
    lz - ilosc znaków
    */
    
    string zlw;
    
    cout << "Wypisz swoje zdanie: ";
    getline(cin, zlw);
    cout << "Wypisane zdanie to: " << zlw << endl;
    
    // Liczenie ile jest liter
    
    int lz = zlw.size();
    
    cout << "Wyraz posiada " << lz << " znaków." <<endl;
    
    // Patrzenie jakie litery i przy okazji widzi kiedy się powtarza
    cout << "Litery w naszym zdaniu to: "<< endl;
    bool powtorka = false;
    
    for (int i = 0; i < lz; i++) {
        cout << " " << zlw[i] << endl;
        if (zlw[i] == zlw[i+1]) {
            cout << " " << zlw[i] << "(powtórzone)" << endl;
            i++;
            powtorka = true;
        }
    }
    
    if (!powtorka) {
        cout << "nie ma powtarzających się liter" << endl;
    }
    
    
    /*
    WAŻNE
    
    Zjebałem tamten kod xD
    
    Kod opiera się na:
    https://www.youtube.com/watch?v=ZGtdSv7Ktt4
    https://www.youtube.com/watch?v=lTPT1cPfVmI
    https://chat.openai.com/c/9b701316-18c2-41a3-b93e-03cb3ce80274
    */
    return 0;
}
