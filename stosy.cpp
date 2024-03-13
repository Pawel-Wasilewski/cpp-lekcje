#include <iostream>
#include <stack>

using namespace std;

int main(){
    int a; int b; int c;
    
    cout << "Podaj liczbe 1: ";
    cin >> a;
    cout << "Podaj liczbe 2: ";
    cin >> b;
    cout << "Podaj liczbe c: ";
    cin >> c;
    
    stack<int> stosidlo;
    stosidlo.push(a);
    stosidlo.push(b);
    stosidlo.push(c);
    
    cout << "Twoj stos: " << endl;
    
    while(!stosidlo.empty()){
        cout << stosidlo.top() << " ";
        stosidlo.pop();
    }
    cout << "." << endl;

    stosidlo.push(c);
    stosidlo.push(b);
    stosidlo.push(a);

    cout << "Twoj stos na odwrot: " << endl;

    while(!stosidlo.empty()){
        cout << stosidlo.top() << " ";
        stosidlo.pop();
    }
}
