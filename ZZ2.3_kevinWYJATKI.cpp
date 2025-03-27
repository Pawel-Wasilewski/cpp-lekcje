#include <iostream>

using namespace std;

void wczytajInt(int liczba1, int liczba2){
    while(true){
        try{
            cout << "Podaj liczbę 1 -> ";
            cin >> liczba1;
    
            if(cin.fail()){
                cin.clear();
                cin.ignore(1000,'\n');
        
                throw runtime_error("Postaraj się bardziej:");
            }
            
            break;
        }
        catch(const exception& e){
            cout << e.what() << endl;
        }
        
    }
    
    while(true){
        try{
            cout << "Podaj liczbę 2 -> ";
            cin >> liczba2;
    
            if(cin.fail()){
                cin.clear();
                cin.ignore(1000,'\n');
        
                throw runtime_error("Postaraj się bardziej:");
            }
            
            break;
        }
        catch(const exception& e){
            cout << e.what() << endl;
        }
        
    }
}

int main()
{
    int liczba1, liczba2;
    
    wczytajInt(liczba1,liczba2);
    
    cout << "Wynik: " << liczba1+liczba2;

    return 0;
}
