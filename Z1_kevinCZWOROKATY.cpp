#include <iostream>

using namespace std;

class Czworokat{
    protected:
    int a,b,c,d;
    
    public:
    
    void wypisz() const{
        cout << "Dlugosci bokow wynosza kolejno: " << a << ", " << b << ", " << c << ", " << d << endl;
    }
    
    virtual int pole() const = 0;
    
    Czworokat(int a, int b, int c, int d){
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
    }
};

class Prostokat : public Czworokat{
    public:
    
    Prostokat(int w1,int w2) : Czworokat(w1, w2, w1, w2) {}
    
    void wymiary(int w1, int w2){
        a = w1;
        b = w2;
        c = w1;
        d = w2;
    }
    
    int pole() const override{
        return a * b;
    }

};

class Kwadrat : public Czworokat{
    public:
    
    Kwadrat(int wk) : Czworokat(wk, wk, wk, wk) {}
    
    void wymiary(int wk){
        a = wk;
        b = wk;
        c = wk;
        d = wk;
    }
    
    int pole() const override{
        return a * b;
    }
    
};

void wypisz_pola(Czworokat* tablica[], int rozmiar){
    for(int i = 0; i<rozmiar; i++){
        cout << "Pole czworokata numer " << i+1 << " wynosi " << tablica[i]->pole() << endl;
    }
}

int main()
{
    cout << "Dzień DOBRY" << endl;
    
    int wk1, wk2, pw1, pw2;
    
    cout << "------------" << endl;
    
    cout << "Dlugosc boku kwadratu nr 1 bedzie wynosila... ";
    
    cin >> wk1;
    
    Kwadrat kwad1(wk1);
    kwad1.wypisz();
    
    cout << endl << "Dlugosc boku kwadratu nr 2 bedzie wynosila... ";
    
    cin >> wk2;
    
    Kwadrat kwad2(wk2);
    kwad2.wypisz();
    
    cout << endl << "Dlugosc boku nr 1 prostokata... ";
    
    cin >> pw1;
    
    cout << endl << "Dlugosc boku nr 2 prostokata... ";
    
    cin >> pw2;
    cout << endl;
    
    Prostokat prost(pw1,pw2);
    prost.wypisz();
    
    Czworokat* tablica[3] = { &kwad1, &kwad2, &prost };
    int rozmiar = 3;
    
    wypisz_pola(tablica, rozmiar);
    
    

    return 0;
}
