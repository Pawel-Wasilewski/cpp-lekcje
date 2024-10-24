#include <iostream>
#include <string>

class Punkt2w {
    private:
    int x, y, w1, w2;
    int mo;

    public:
    Punkt2w() {
        x = y = w1 = w2 = 0;
        mo = 0;
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

    void wektor2w(int arg1, int arg2) {
        w1 = arg1 * -1;
        w2 = arg2 * -1;
        std::cout << "Wektor do miejsca zerowego: " << w1 << ';' << w2 << std::endl;
    }

    int getx() {
        return x;
    }

    int gety() {
        return y;
    }

    ~Punkt2w() {
        std::cout << "Obiekt na podstawie Punkt2w został zniszczony" << std::endl;
    }
};

class Punkt3w {
    private:
    int x, y, z;

    public:
    Punkt3w() {
        x = y = z = 0;
        std::cout << "Zainicjowano obiekt na podstawie klasy Punkt3w" << std::endl;
    }

    void wypisz() {
        std::cout << "Wypisz: " << std::endl << "x: ";
        std::cin >> x;
        std::cout << "y: ";
        std::cin >> y;
        std::cout << "z: ";
        std::cin >> z;
    }

    void wczytaj() {
        std::cout << "x: " << x << std::endl << "y: " << y << std::endl << "z: " << z << std::endl;
    }

    void rzutuj() {
        int wyb;
        std::cout << "którego potrzebujesz: " << std::endl
                  << "xz (1)" << std::endl
                  << "xy (2)" << std::endl
                  << "yz (3)" << std::endl;
        std::cin >> wyb;
        if (wyb == 1) {
            Punkt2w p;
            p.wektor2w(x, z);
        } else if (wyb == 2) {
            Punkt2w p;
            p.wektor2w(x, y);
        } else if (wyb == 3) {
            Punkt2w p;
            p.wektor2w(y, z);
        } else {
            std::cout << "zle wpisane" << std::endl;
        }
    }

    ~Punkt3w() {
        std::cout << "Obiekt na podstawie Punkt3w został zniszczony" << std::endl;
    }
};

int main() {
    Punkt2w p1;
    p1.wczytaj();
    p1.wypisz();
    p1.wektor2w(p1.getx(), p1.gety());

    Punkt3w p2;
    p2.wczytaj();
    p2.wypisz();
    p2.rzutuj();

    return 0;
}
