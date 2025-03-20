#include <iostream>

using namespace std;

class Figura{
    public:
    
    virtual int pole() = 0;
    virtual void wyswietlPole() = 0;
};

class Prostokat : public Figura{
    public:
    int a;
    int b;
    
    Prostokat(int bok1, int bok2) : a(bok1), b(bok2) {}
    ~Prostokat(){}
    
    int pole() override{
        int pole = a*b;
        return pole;
    }
    
    void wyswietlPole() override{
        cout << "Pole tego prostokąta wynosi " << pole() << endl;
    }
};

class Kwadrat : public Figura{
    public:
    int c;
    
    Kwadrat(int bok) : c(bok) {}
    ~Kwadrat(){}
    
    int pole() override{
        int pole = c*c;
        return pole;
    }
    
    void wyswietlPole() override{
        cout << "Pole tego kwadratu wynosi " << pole() << endl;
    }
};

int main()
{
    int wybor, kb, pb1, pb2;
    
    
    cout<<"Wybierz figurę: " << endl <<"[1] Prostokąt, [2] Kwadrat" <<endl;
    cin>> wybor;
    
    if(wybor == 1){
        cout << "Podaj długość pierwszego boku -> ";
        cin >> pb1;
        
        cout << endl << "Podaj długość drugiego boku -> ";
        cin >> pb2;
        
        Prostokat prostokat(pb1, pb2);
        cout << "---" << endl;
        prostokat.wyswietlPole();
    }
    
    else if(wybor == 2){
        cout << "Podaj długość boku -> ";
        cin >> kb;
        
        Kwadrat kwadrat(kb);
        cout << "---" << endl;
        kwadrat.wyswietlPole();
    }
    
    else{
        cout << "Nie wybrano odpowiedniego numeru!";
    }

    return 0;
}
