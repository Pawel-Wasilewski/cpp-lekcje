#include<iostream>
#include <cstring>

using namespace std;

void szyfruj(int klucz, char tab[])
{
	int dl = strlen(tab); //określenie ilości znaków wyrazu
	
	//sprawdzenie, czy klucz miesci sie w zakresie
	if(!(klucz >= -26 && klucz <= 26)) return;
	
	if(klucz >= 0)
		for(int i=0;i<dl;i++)
		if(tab[i] + klucz <= 'Z')
			tab[i] += klucz;
		else
			tab[i] = tab[i] + klucz - 26; 
	else
		for(int i=0;i<dl;i++)
		if(tab[i] + klucz >= 'A')
			tab[i] += klucz;
		else
			tab[i] = tab[i] + klucz + 26;
}

int main()
{
    int wybor;
    int klucz;
    
    cout << "|~~~~~~~~~~~~~~~~~~~|" << endl << "  Co chcesz zrobic?" << endl << "   1 - Szyfrowanie" << endl << "   2 - Dekodowanie" << endl <<"|~~~~~~~~~~~~~~~~~~~|" << endl << "|~-~-~-~-{ ";
    cin >> wybor;
        	       if (wybor != 1 && wybor != 2){
	           cout << "|~-~-~-{ A moze wybierzesz dostepna opcje?" << endl;
	           return 0;
	       }
	       char tab[101];
	       
        switch(wybor){
            case 1:
            
                cout << "|~-~-~-{ UWAGA! Po wprowadzeniu nieprawidlwoego klucza program zwroci wpisany ciag." << endl;
                cout << "|~-~-~-{ UWAGA! Po wprowadzeniu malych liter program nie zadziala poprawnie." << endl;
                cout << "|~-~-~-{ UWAGA! Po wprowadzeniu polskich znakow program nie zadziala poprawnie." << endl << endl;
	
	            cout<<"|~-~-~-~-~-{ Podaj wyraz składający się z duzych liter: ";
	            cin>>tab;
	            
	            
	            cout<<"|~-~-~-{ Podaj klucz z przedzialu [-26;26]: ";
	            cin>>klucz;
	
	            szyfruj(klucz,tab); //szyfrowanie
	
	            cout<<"|~-~-{ Zaszyfrowany ciag: "<<tab<<endl;
	            return 0;
	            break;
            
            case 2:
	
	            cout << "|~-~-~-{ UWAGA! Po wprowadzeniu nieprawidlwoego klucza program zwroci wpisany ciag." << endl;
	            cout << "|~-~-~-{ UWAGA! Po wprowadzeniu malych liter program nie zadziala poprawnie." << endl;
	            cout << "|~-~-~-{ UWAGA! Po wprowadzeniu polskich znakow program nie zadziala poprawnie." << endl << endl;
	            
	            cout<<"|~-~-~-~-~-{ Podaj zaszyfrowany wyraz skladajacy sie z duzych liter: ";
	            cin>>tab;
	
	            cout<<"|~-~-~-{ Podaj klucz z przedzialu [-26;26]: ";
	            cin>>klucz;
	            
	            szyfruj(-klucz,tab); //deszyfrowanie
	
	            cout<<"|~-~-{ Zdekodowany ciag: "<<tab<<endl;
	            return 0;
	            break;
	
        }}

