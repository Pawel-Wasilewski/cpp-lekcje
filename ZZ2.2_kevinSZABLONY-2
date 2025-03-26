#include <iostream>

using namespace std;

template <typename T>

class Figura{
    private:
    T bok1, bok2, b1, b2;
    
    public:
    
    Figura(T a) : bok1(a), bok2(a) {};
    Figura(T a, T b) : bok1(a), bok2(b) {};
    
    void pole(){
        cout << bok1*bok2;
    }
    
    
};

int main(){
    int wybor;

    cout << "Kwadrat [1] czy prostokąt [2]? -> ";
    cin >> wybor;
    
    
    if(wybor == 1){
        double bok;
        
        cout << "Podaj bok -> ";
        cin >> bok;
        Figura kwadrat(bok);
        kwadrat.pole();
        
    }
    else if(wybor == 2){
        double b1, b2;
        
        cout << "Podaj bok 1 -> ";
        cin >> b1;
        
        cout << "Podaj bok 2 -> ";
        cin >> b2;
        
        Figura prostokat(b1, b2);
        prostokat.pole();
    }
    else{
        cout << "Nie podano poprawnej liczby!" << endl;
    }

return 0;
}
