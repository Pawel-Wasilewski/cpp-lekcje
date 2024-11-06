#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <ctime>

class Tab_zad1 {
    private:
        int table[10];
    public:

    Tab_zad1() {
        std::cout << "Obiekt Table utworzony" << std::endl;
        std::srand(static_cast<unsigned>(std::time(nullptr))); // Rand cast
    }

    void generate() {
        for (size_t i = 0; i < 10; i++)
        {
            table[i] = rand() % 100 + 1; // generuje wartości od 1 do 100
            std::cout << table[i] << ',';
        }
        std::cout << std::endl;
    }
    void reverse() {
        auto porownowarka = [](int dominata, int regresa) {
            return dominata > regresa;
        };

        std::sort(std::begin(table), std::end(table), porownowarka);
        std::cout << "Posortowana odwrotnie tablica: ";

        for (size_t i = 0; i < 10; i++)
        {
            std::cout << table[i] << ',';
        }
    }

    ~Tab_zad1() {
        std::cout << "Zniszczono obiekt Table" << std::endl;
    }
};

class Tab_zad2 {
    private:
        int table[51];
        int wartownik;
    public:

    Tab_zad2() {
        std::cout << "Stworzono obiekt typu Table2" << std::endl;
    }

    void generate() {
        for (size_t i = 0; i < 50; i++)
        {
            table[i] = rand() % 100 + 1; // generuje wartości od 1 do 100
            std::cout << table[i] << ',';
        }
        std::cout << std::endl;
    }

    void assignwartownik() {
        std::cout << "Podaj wartownik: ";
        std::cin >> wartownik;

        table[50] = wartownik;
    }

    void search() {
        int i = 0;

        while (i < 51)
        {
            if (table[i] == table[50])
            {
                std::cout << table[i] << ',' << "index: " << i << std::endl;
                break;
            }
            if (i == 50)
            {
                std::cout << "-1" << std::endl;
                break;
            }
            i++;
        }
        
    }
};
class Del_zad3 {
    private:
        int a, b, c;
    public:
        Del_zad3() {
            a = 1;
            b = 0;
            c = 0;

            std::cout << "Zainicjowano obiekt typu Del" << std::endl;
            std::cout << a << ',' << b << ',' << c << std::endl;
        }

        bool insert_data() {
            std::cout << "Podaj a: ";
            std::cin >> a;
            std::cout << "Podaj b: ";
            std::cin >> b;
            std::cout << "Podaj c: ";
            std::cin >> c;

            if (a + b + c == 0)
            {
                std::cout << "nie wpisałeś ani jednej wartości! " << std::endl
                << "m0 = [0,0], delta = 0" << std::endl;

                return false;
            }
            else
            {
                return true;
            }
        }
        void zerowe() {
            if (a == 0)
            {
                int fx = -c/b;
                
            }
            else
            {
                int bpow = pow(b, 2);
                int delta = bpow - 4*a*c;

                if(delta > 0) 
                {
                    int x1 = (-b-sqrt(delta))/a*2;
                    int x2 = (-b+sqrt(delta))/a*2;

                    std::cout << "x1 = [" << x1 << ", 0], x2 = [" << x2 << ", 0]" << std::endl;
                }
                if (delta == 0)
                {
                    int x0 = -(b/a*2);

                    std::cout << "x0 = [" << x0 << ", 0]" << std::endl;
                }
                else
                {
                    std::cout << "m0 = 0" << std::endl;
                }
            }
            
            
            
        }
};

int main() {
    Tab_zad1 *t1 = new Tab_zad1();
    t1->generate();
    t1->reverse();

    delete t1;

    Tab_zad2 *t2 = new Tab_zad2();
    t2->generate();
    t2->assignwartownik();
    t2->search();

    delete t2;

    return 0;
}