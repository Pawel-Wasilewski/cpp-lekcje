#include <iostream>
#include <string>
#include <algorithm>

/*
zlw - zdanie lub Wyraz
azlw - anagra zlw 
zlwp - polindrom zlwp
lz - liczba znaków
*/

using namespace std;

bool anagram_sprawdzanie(const string &azlw, const string &zlw) {
    if (azlw.length() != zlw.length()) {
        return false; 
    }
    
    string sorted_azlw = azlw;
    string sorted_zlw = zlw;
    
    
    sort(sorted_azlw.begin(), sorted_azlw.end());
    sort(sorted_zlw.begin(), sorted_zlw.end());
    
    
    return sorted_azlw == sorted_zlw;
}

int main() {
    string zlw;
    
    cout << "Wprowadź zdanie: ";
    getline(cin, zlw);
    cout << "Wprowadzone zdanie to: " << zlw << endl;
    
    int lz = zlw.size();
    
    cout << "Wyraz posiada " << lz << " znaków." << endl;
    
    cout << "Litery w naszym zdaniu to:" << endl;
    //Czytanie liter i powtórki
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
        cout << "nie ma powtarzających się liter kolo siebie" << endl;
    }
    // Palindrom
    
    string zlwp = zlw;
    
    reverse(zlwp.begin(), zlwp.end());
    
    if (zlw == zlwp) {
        cout << "To jest palindrom" << endl;
    } if (zlw != zlwp) { 
        cout << "To nie jest palindrom" << endl;
    }
    
    // Anagram
    string azlw;
    
    cout << "Wprowadź drugi wyraz do sprawdzenia anagramu: ";
    cin >> azlw;

    if (anagram_sprawdzanie(azlw, zlw)) {
        cout << "Twój wyraz jest anagramem" << endl;
    } else {
        cout << "Twój wyraz nie jest anagramem" << endl;
    }

    return 0;
}

    /*
    Kod opiera się na:
    https://www.youtube.com/watch?v=ZGtdSv7Ktt4
    https://www.youtube.com/watch?v=lTPT1cPfVmI
    https://chat.openai.com/c/9b701316-18c2-41a3-b93e-03cb3ce80274
    http://www.algorytm.org/przetwarzanie-tekstu/palindromy/palindrom-1-c.html
    https://www.geeksforgeeks.org/check-whether-two-strings-are-anagram-of-each-other/
    */
