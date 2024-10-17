#include <iostream>
#include <cmath>
#include <string>

class Punkt2w {
    private:
    int x, y, wx, wy; // Do układu
    int mo = 0;

    public:
    Punkt2w() {
        int x, y, wx, wy;
        int mo = 0;

        std::cout << "Zainicjowano obiekt na podstawie klasy Punkt2w" << std::endl;
    }

    void wypisz() {
        std::cout << "Wypisz: " << std::endl << "x: ";
        std::cin >> x;
        std::cout << "y: ";
        std::cin >> y;
    }
    void wczytaj() {
        std::cout << "x: " << x << std::endl << "y: " << y << std::endl;
    }

    void wektor2w() {
        if (x < mo) {
            wx = x * -1;
        } 
        else {
            wx = x;
        }
        
        if (y < mo) {
            wy = y;
        } 
        else {
            wy = y * -1;
        }
        
        std::cout << "Wektor do miejsca zerowego: " << wx << ';' << wy << std::endl;
    }

    int getx() {
        return x;
    }
    int gety() {
        return y;
    }

    ~Punkt2w() {
        std::cout << "Obiekt na podstawie Punkt2w został zniszczony";
    }
};
class Punkt3w {
    private:
    int xz,yz;
    int z;

    public:

    Punkt3w() {
        this->xz =
    }

};



int main() {
    Punkt2w p1;

    p1.wczytaj();
    p1.wypisz();
    p1.wektor2w();

    return 0;
}
