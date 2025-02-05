#include <iostream>
#include <string>

using namespace std;

class Auto{
    public:
    string marka;
    int rocznik;
    
    virtual void przebieg(){
        int sumaPrz;
        int iloczynPrz = 2025 - rocznik;
        
        sumaPrz = 15000 * iloczynPrz;
        cout << "Przebieg tego samochodu wynosi " << sumaPrz << endl;
    }
    
    Auto(string m, int r) : marka(m), rocznik(r) {}
};

class Auto_ciezarowe : public Auto{
    public:
    float ladownosc_max;
    
    void obciazenie(){
        int ladunek;
        float procentZal;
        
        cout << "Podaj wagę ładunku: ";
        cin >> ladunek;
        
        procentZal = static_cast<float>(ladunek)/ladownosc_max;
        
        cout << "Procent obciążenia wynosi " << procentZal * 100 << "%" << endl;
    }

    void przebieg() override {
        int sumaPrz;
        int iloczynPrz = 2025 - rocznik;
        
        sumaPrz = 50000 * iloczynPrz;
        cout << "Przebieg tego samochodu wynosi " << sumaPrz << endl;
    }
    
    Auto_ciezarowe(string m, int r, float lm) : Auto(m, r), ladownosc_max(lm) {}
};

class Auto_sportowe : public Auto{
    public:
    int przyspieszenie;
    
    void droga(){
        float odleglosc;
        int czasDr = 0;
        int drogaPocz = 0;
        
        cout << "Dla jakiej odległości podliczyć? (w metrach): ";
        cin >> odleglosc;
        
        if(odleglosc > 402.336){
            cout << "Obliczam dla 1/4 mili..." << endl;
            odleglosc = 402.336;
        }
        
        do{
            drogaPocz = drogaPocz + przyspieszenie;
            czasDr++;
        } while(drogaPocz <= odleglosc);
        
        cout << "Ten samochód pokonuje " << odleglosc << " metrów w około " << czasDr << " sekund!" << endl;
    }

    void przebieg() override {
        int sumaPrz;
        int iloczynPrz = 2025 - rocznik;
        
        sumaPrz = 10000 * iloczynPrz;
        cout << "Przebieg tego samochodu wynosi " << sumaPrz << endl;
    }
    
    Auto_sportowe(string m, int r, int p) : Auto(m, r), przyspieszenie(p) {}
};

int main()
{
    string wpMarka;
    int wpRocznik;
    
    float wpLadow;
    
    int wpPrzys;
    
    int wybor;
    
    
    cout << "SAMOCHODZIARNIA 2025 ROKU!!" << endl;
    cout << "---------------------------" << endl;
    
    Auto_ciezarowe ciezarowka("SzefRolet", 1997, 15020);
    cout << "DANE: Ciężarówka marki " << ciezarowka.marka << " z roku " << ciezarowka.rocznik << "." << endl;
    ciezarowka.przebieg();
    ciezarowka.obciazenie();
    cout << endl;
    cout << "---------------------------" << endl;
    
    Auto_sportowe sportowka("Daczja", 2008, 128);
    cout << "DANE: Auto sportowe marki " << sportowka.marka << " z roku " << sportowka.rocznik << "." << endl;
    sportowka.przebieg();
    sportowka.droga();
    cout << "---------------------------" << endl;
    
    cout << "Stwórz własny samochód!" << endl << endl;
    
    do{
    cout << "Zwykłe [1], ciężarowe [2] czy sportowe [3]? ";
    cin >> wybor;
    
    if(wybor == 1){
        cout << "Podaj markę: ";
        cin >> wpMarka;
        cout << "Podaj rocznik: ";
        cin >> wpRocznik;
        
        Auto autko(wpMarka, wpRocznik);
        autko.przebieg();
    }
    
    else if(wybor == 2){
        cout << "Podaj markę: ";
        cin >> wpMarka;
        cout << "Podaj rocznik: ";
        cin >> wpRocznik;
        cout << "Podaj ładowność: ";
        cin >> wpLadow;
        
        Auto_ciezarowe auteczko(wpMarka, wpRocznik, wpLadow);
        auteczko.przebieg();
        auteczko.obciazenie();
    }
    
    else if(wybor == 3){
        cout << "Podaj markę: ";
        cin >> wpMarka;
        cout << "Podaj rocznik: ";
        cin >> wpRocznik;
        cout << "Podaj przyspieszenie: ";
        cin >> wpPrzys;
        
        Auto_sportowe autunio(wpMarka, wpRocznik, wpPrzys);
        autunio.przebieg();
        autunio.droga();
    }
    
    else{
        cout << "Nie wpisano liczby/wpisano złą liczbę!" << endl;
    }
    
    } while (wybor != 1 && wybor != 2 && wybor != 3);
    
    cout << "---------------------------" << endl;
    cout << " DZIĘKUJEMY ZA ODWIEDZENIE " << endl;
    cout << "      SAMOCHODZIARNI       " << endl;
    cout << "---------------------------" << endl;

    return 0;
}
