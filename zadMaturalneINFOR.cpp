#include <iostream>
#include <vector>

using namespace std;

int konwersjaiBloki(int i){
    int bloki = 0;
    int reszta;
    vector<int> binarna;
    
    do{
        reszta = i % 2;
        binarna.push_back(reszta);
        i = i/2;
    }
    while(i != 0);
    
    for(int j = binarna.size()-1; j>=0; j--){
        cout << binarna[j];
    }
    
    for(int k = 0; k < binarna.size();k++){
        if(binarna[k] != binarna[k+1]){
            bloki++;
        }
    }
    
    cout << endl;
    
    
    return bloki;
}

int main()
{
    int n;
    cout << "Podaj liczbę naturalną: ";
    cin >> n;
    
    int b = konwersjaiBloki(n);
    
    cout << "Liczba bloków: " << b;

    return 0;
}
