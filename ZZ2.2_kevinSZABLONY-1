#include <iostream>

using namespace std;


template <typename T>

T sortuj(T a, T b, T c){
    T tab[3];
    
    tab[0] = a;
    tab[1] = b;
    tab[2] = c;
    
    int n = sizeof(tab)/sizeof(tab[0]);
    
    sort(tab, tab + n);
    
    cout << "Posortowana tablica: " << endl;
    for(int i = 0; i<n; i++){
        cout << tab[i] << " ";
    }
    cout << endl;
    
    cout << "Najmniejsze: " << endl;
    
    return tab[0];
}

int main()
{
    int wybor;
    
    do{
        cout << endl << "Wybierz typ danych: " << endl;
        cout << "[0] int, [1] double, [2] char" << endl;
        cout << "[3] Zakończ program" << endl;
        cout << "-> ";
        
        cin >> wybor;
        
        if(wybor == 0){
            int arg1, arg2, arg3;
            
            cout << "Podaj element 1 -> ";
            cin >> arg1;
            cout << "Podaj element 2 -> ";
            cin >> arg2;
            cout << "Podaj element 3 -> ";
            cin >> arg3;
            
            cout << sortuj(arg1, arg2, arg3) << endl;
        }
        
        if(wybor == 1){
            double arg1, arg2, arg3;
            
            cout << "Podaj element 1 -> ";
            cin >> arg1;
            cout << "Podaj element 2 -> ";
            cin >> arg2;
            cout << "Podaj element 3 -> ";
            cin >> arg3;
            
            cout << sortuj(arg1, arg2, arg3);
        }
        
        if(wybor == 2){
            char arg1, arg2, arg3;
            
            cout << "Podaj element 1 -> ";
            cin >> arg1;
            cout << "Podaj element 2 -> ";
            cin >> arg2;
            cout << "Podaj element 3 -> ";
            cin >> arg3;
            
            cout << sortuj(arg1, arg2, arg3);
        }
        
        
    }
    while(wybor != 3);

    return 0;
}
