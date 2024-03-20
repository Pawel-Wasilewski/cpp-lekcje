include <iostream>

using namespace std;

int main(){
    
    struct papaj{
        string imie;
        string nazwisko;
        int numer_seryjny;
    };
    
    papaj wrona = {"Kasia", "Ptaszynska", 3572};
    
    cout << "\033[36m" << "Kolejna ofiara papieza zostala " << wrona.imie << " " << wrona.nazwisko << ". Nadal on jej numer seryjny: " << wrona.numer_seryjny;
