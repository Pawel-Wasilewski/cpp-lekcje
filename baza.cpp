#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    
    int choice;
    int kl_id;
    int ilosc;
    int us_id;
    int ed_id;
    int wys_id;
    string kl_name;
    string kl_lname;
    string kl_email;
    string kl_numtel;
    string ed_name;
    string ed_lname;
    string ed_email;
    string ed_numtel;
    
    
    
    map<int, string> klienci;
    x:
    cout << "Co chchialbys zrobic?" << endl;
    cout << "1. Dodaj klienta" << endl;
    cout << "2. Usun klienta" << endl;
    cout << "3. Edytuj klienta" << endl;
    cout << "4. Wyswietl klienta" << endl;
    
    cin >> choice;
    
    switch(choice){
        
        case 1:
            cout << "ILu uzytkownikow chcesz dodac? ";
            cin >> ilosc;
            
            for(int i=0; i<ilosc; i++){
                kl_id = i;
                
                cout << "Podaj imie klienta: ";
            cin >> kl_name;
            
            cout << "Podaj nazwisko klienta: ";
            cin >> kl_lname;
            
            cout << "Podaj adres e-mail klienta: ";
            cin >> kl_email;
            
            cout << "Podaj numer telefonu klienta: ";
            cin >> kl_numtel;
            
            klienci.insert(pair<int,string>(kl_id, kl_name + " " + kl_lname + " " + kl_email + " " + kl_numtel));
            
            cout << "Wprowadzono uzytkownika o ID " << kl_id << endl;
            }
            
            goto x;

        
        case 2:
            if(klienci.empty()){
                cout << "Na grzyba tu jestes?????????" << endl;
                goto x;
            }
            else{
        
            cout << "Podaj ID uzytkownika, ktorego chcesz usunac. ";
            cin >> us_id;
            
            auto it = klienci.find(us_id);
            if(it == klienci.end()) {
                cout << "Istnieje jak mózg moniki (nie)" << endl;
            } else {
                klienci.erase(it);
            }
            
            cout << "Uzytkownik o ID " << us_id << " wybuchl." << endl;
            
            }
            goto x;
            
        case 3:{
            cout << "Uzytkownika o jakim ID chcesz edytowac? ";
            cin >> ed_id;
            
            auto iit = klienci.find(ed_id);
            if(iit == klienci.end()){
                cout << "Bambusie co ty gadasz" << endl;
                goto x;
            }
            else{
                
                cout << "Edytujesz użytkownika " << ed_id << " (Jeżeli chcesz zmienić tylko jedną rzecz musisz przepisać wszystko od nowa)"<< endl;
                
                cout << "Podaj imie klienta: ";
                cin >> ed_name;
                
                cout << "Podaj nazwisko klienta: ";
                cin >> ed_lname;
                
                cout << "Podaj adres e-mail klienta: ";
                cin >> ed_email;
                
                cout << "Podaj numer telefonu klienta: ";
                cin >> ed_numtel;
                
                klienci.insert(pair<int,string>(ed_id, ed_name + " " + ed_lname + " " + ed_email + " " + ed_numtel));

                goto x;
            }}
            
        case 4:{
            cout << "Uzytkownika o jakim ID chcesz wyswietlic? ";
            cin >> wys_id;
            
            auto iiit = klienci.find(wys_id);
            if(iiit == klienci.end()){
                cout << "Gosciu nie farmazon." << endl;
                goto x;
            } else {
                cout << "Użytkownik o ID " << iiit -> first << " to: " << iiit -> second << endl;  
                
               goto x; 
            }}
            
            
        default:
        cout << "Ta opcja nie istnieje!" << endl;
        goto x;
        
    }
    

    return 0;
}
