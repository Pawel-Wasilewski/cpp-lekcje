#include <iostream> 
#include <ctime>
using namespace std;

int binTab[8];
int decy;
int border = 255;
int waga = 1;
int i;

int main(){
    
    srand (time(NULL));
    decy = rand() % border;
    cout << "Twoja liczba to " << decy << endl;
    
    for(i=7; i>=0; i--){
        binTab[i] = decy % 2;
        decy = decy/2;
    }
    cout << "Wersja binarna tej liczby to ";
    for(i=0; i<=7; i++){
        cout << binTab[i];
    }
}
