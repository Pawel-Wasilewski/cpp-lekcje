#include <iostream>

using namespace std;

int val1, val2;

int main()
{
    cout<<"Wprowadz pierwsza wartosc: ";
    cin>>val1;
    cout<<"Wprowadz druga wartosc: ";
    cin>>val2;
    
    int finalval = (val1 > val2) ? (val1 - val2) : (val2 - val1);
    
    cout<<"wartosc bezwgledna z roznicy to:"<<finalval<<endl;
    
    return 0;
}
