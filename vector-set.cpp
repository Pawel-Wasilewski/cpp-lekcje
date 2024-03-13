//Napisz program który pobiera od użytkownika liczbę całkowitą a następnie n liczb całkowitych i zapisuje je do wektora. 
//Następnie program powinien usunąć z wektora wszystkie duplikaty, zachowując jedynie unikalne elementy. Na końcu program powinien wyświetlić unikalne elementy w porządku ich wystąpienia. 

#include <iostream>
#include <vector>
#include <ctime>
#include <set>
#include <time.h>

using namespace std;

int main(){
    int a;
    int n;
    
    cout << "Podaj liczbe calkowita: ";
    cin >> a;
    
    vector<int> wektor = {a};
    
    cout << "Ile jeszcze chcesz liczb? ";
    cin >> n;
    
   srand(static_cast<unsigned>(time(NULL)));
    
     cout << "Wektor przed usunieciem duplikatow: " << endl;
    
     for(int i = 0; i < n; i++){
     wektor.push_back(rand() % 10);
     }
     
    for (int d : wektor)
    {
        cout << d << " ";
    }
    

     cout <<"." << endl;
     

     set<int> uniqwe;

      for(int c : wektor){
          uniqwe.insert(c);
      }

      cout << "Wektor po sortowaniu oraz usunieciu duplikatow: " << endl;

      for(int b : uniqwe){
          cout << b << " ";
      }
      
 }

