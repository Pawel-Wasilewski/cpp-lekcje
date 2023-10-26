#include <iostream>
#include <string> 

using namespace std;

int main() {
    
    cout << "Wypisz zdanie: ";
    
    char zdanie_literowanie_baza[999];
        int zdanie_zliczanie[888] = {};
    
    cin.getline(zdanie_zliczanie, 888);
    
    int i = 0;
    
    while(zdanie_literowanie_baza[i])
    {
        ++zdanie_zliczanie[zdanie_literowanie_baza[i]];
        ++i
    }
    
    for(int i=65;i<91;i++)
        if (zdanie_zliczanie[i]<0)
            cout<<(char)i<<" = " << zdanie_zliczanie[i]<<endl;
            
    /*
    WAŻNE
    
    kod nie jest skończony będę dopiero mógł albo u Szkabara lub w Pon. wsiędnądź na tym by to zrobić więc jak chcesz Kevin go poprwaić czy coś to bier
    */
}