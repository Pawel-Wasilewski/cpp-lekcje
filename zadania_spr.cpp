#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <queue>

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

///*****************************************************************************************


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

            if (i == 49)
            {
                std::cout << "-1" << std::endl;
                break;
            } else {
                if (table[i] == table[50])
                {
                std::cout << table[i] << ',' << "index: " << i << std::endl;
                break;
                }
            }
            i++;
        }

    }
};

///*****************************************************************************************


class Del_zad3 {
    private:
        int a, b, c, delta;
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
                float fx = -c/b;
                std::cout << "m0(fx) = [" << fx << ", 0]";
            }
            else
            {
                int bpow = pow(b, 2);
                delta = bpow - 4*a*c;

                if(delta > 0)
                {
                    int x1;
                    x1 = (-b - sqrt(delta)) / a * 2;
                    int x2;
                    x2 = (sqrt(delta) + -b) / a * 2;

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
        void fx() {
            int x;
            float y;

            std::cout << "Podaj [X]: ";
            std::cin >> x;

            if (a == 0)
            {
                y = x + b;
            }
            else
            {
                y = a*pow(x, 2) + b*x + c;
            }
            std::cout << "y = " << y << std::endl;
        }
        ~Del_zad3() {
            std::cout << "Zniszczono obiekt typu Del" << std::endl;
        }
};


///*****************************************************************************************


class QueueZad4 {
    private:
        std::queue<int> qu;
        void insert_data() {
            for (int i = 0; i < 10; i++) {
                qu.push(i*3);
            }
            for (auto e: qu) {
                std::cout << e << std::endl;
            }
        }
    public:
        QueueZad4();

        ~QueueZad4();
        void pierwszy() {
            int pierwszy;

            pierwszy = qu.front();

            std::cout << "pierwszy: " << pierwszy << std::endl;
        }

        void usunpierwszy() {
            qu.pop();
            for (auto e: qu) {
                std::cout << e << std::endl;
            }
        }

        void dodaj_na_koniec() {
            qu.push(69);
            for (auto e: qu) {
                std::cout << e << std::endl;
            }
        }

        bool pusta() {
            if (qu.size() == 0) {
                return true;
            } else {
                return false;
            }
        }
};
QueueZad4::QueueZad4() {
    std::queue<int> qu_co = qu;
    insert_data();
    std::cout << "Stworzono obiekt typu Queue" << std::endl;
}
QueueZad4::~QueueZad4() {
    std::cout << "Zniszczono obiekt typu Queue" << std::endl;
}


///*****************************************************************************************


int main() {
    auto *t1 = new Tab_zad1();
    t1->generate();
    t1->reverse();

    delete t1;

    auto *t2 = new Tab_zad2();
    t2->generate();
    t2->assignwartownik();
    t2->search();

    delete t2;

    auto *t3 = new Del_zad3();

    if (t3->insert_data())
    {
        t3->zerowe();
        t3->fx();
    }
    delete t3;

    auto *t4 = new QueueZad4();
    t4->pierwszy();
    t4->usunpierwszy();
    t4->dodaj_na_koniec();

    if (t4->pusta()) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }


    return 0;
}
