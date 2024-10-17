#include <iostream>
#include <cmath>
#include <string>

class Plc {
    private:
    int l1;

    public:
    Plc() {
        int l1;
        std::cout << "Zainicjowano obiekt klasy Plc" << std::endl;
    }
    void wczytaj() {
        std::cout << "wypisz liczbę: ";
        std::cin >> l1;
    }

    void wypisz() {
        std::cout << "wczytana liczba: " << l1 << std::endl;
    }

    int abs() {
        if (l1 < 0) {
            l1 = l1 * -1;
        }
        std::cout << "bezwględna: " << l1 << std::endl;
        return l1;
    }
    ~Plc() {
        std::cout << "Zniszczono obiekt klasy Plc" << std::endl;
    }
};

int main() {
    Plc obj;
    obj.wczytaj();
    obj.wypisz();
    obj.abs();

    return 0;
}
