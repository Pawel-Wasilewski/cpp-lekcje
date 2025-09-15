#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include <sstream>
#include <random> // Random lib

#pragma execution_character_set( "utf-8" )

void printVector(const std::vector<int>& v) {
    for (int val : v) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int partition(std::vector<int> &v, int low, int high) {
    int pivot = v[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (v[j] <= pivot) {
            i++;
            std::swap(v[i], v[j]);
        }
    }
    std::swap(v[i + 1], v[high]);
    return i + 1;
}

/** Metoda do sortowania vectora za pomocą QuickSort
 *  nazwa funckji: QuickSort
 *  @param v: vector wartości na którym dokonujemy QuickSort'a
 *  @param low: zmienna najniżej pozycji potrzebna do podzielenia na partycję
 *  @param high: zmienna najwyższej pozycji do podzielenia vectora na partycję
 *  @returns -
 *  @author Paweł Wasilewski
 */
void QuickSort(std::vector<int> &v, int low, int high) {
    if (low < high) {
        int pi = partition(v, low, high);
        QuickSort(v, low, pi - 1);
        QuickSort(v, pi + 1, high);
    }
}

/** Metoda do zapełniania vectora niedeterministycznymi (niemającej stałego "seeda") liczbami z biblioteki Random
 * @param v vector zapełniany przez wartości
 * @param s wielkość vectora
 * @returns -
 * @author Paweł Wasilewski
 */
void fillAnVector(std::vector<int>& v, int s) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 999);
    v.resize(s);
    for (int i = 0; i < s; ++i) {
        v[i] = dis(gen);
    }
}

double median(std::vector<int> &v) {
    int n = v.size();
    if (n % 2 == 0) {
        return (v[n / 2 - 1] + v[n / 2]) / 2.0;
    } else {
        return v[n / 2];
    }
}


int binarySearch(std::vector<int> &v, int value) {
    int l = 0, r = v.size() - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (v[mid] == value) {
            return mid;
        }
        if (v[mid] < value) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return -1;
}

std::vector<int> getData(const std::string& fileName) {
    std::ifstream f(fileName);
    std::string line;
    std::vector<int> v;

    if (!f.is_open()) {
        std::cout
        << "Nie udało się otworzyć pliku: "
        << fileName << std::endl;
        return v;
    }

    while (std::getline(f, line)) {
        std::istringstream iss(line);
        int val;
        while (iss >> val) {
            v.push_back(val);
        }
    }

    f.close();
    return v;
}
int main() {
    SetConsoleOutputCP( 65001 );
    int opt, n;
    std::vector<int> genVec;
    std::cout
    << "Wczytać z pliku?" << std::endl
    << "1. Nie" << std::endl
    << "2. Tak" << std::endl;

    std::cin >> opt;

    switch (opt) {
        case 1: {
            fillAnVector(genVec, 100);
            break;
        }
        case 2: {
            std::string fileName;
            std::cout
            << "Podaj nazwe pliku z danymi: ";
            std::cin >> fileName;
            genVec = getData(fileName);
            if (genVec.empty()) {
                std::cout
                << "Nie podano wartości do pliku .txt lub plik .txt jest pusty" << std::endl;
                return 1;
            }
            break;
        }
        default: {
            return 0;
        }
    }
    QuickSort(genVec, 0, genVec.size() - 1);
    printVector(genVec);
    std::cout
    << "Mediana: " << median(genVec) << std::endl
    << "wybierz wartość szukajnej: ";
    std::cin >> n;
    if (binarySearch(genVec, n) != -1) {
        std::cout
        << "znaleziona została wartość " << n
        <<" (index: " << binarySearch(genVec,n) << ")"
        <<std::endl;
    }
    else {
        std::cout << "nie ma wartości " << n << std::endl;
    }
    return 0;
}
