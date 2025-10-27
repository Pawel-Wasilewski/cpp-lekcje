#include <iostream>
#include <string>

using namespace std;

class StringOperacje{
    public :static int ileSamoglosek(string tekst){
        int licznik = 0;
        string samogloski = "aąeęiouóyAĄEĘIOUÓY";
        
        if(tekst == "" || tekst.empty()){
            return 0;
        }
        
        for(int i = 0; i< samogloski.length(); i++){
            for(int j = 0; j< tekst.length(); j++){
                
                if(tekst[j] == samogloski[i]){
                    licznik++;
                }
                
            }
        }
        
        return licznik;
        
    }
    
    public :static string usunPowtorzenia(string tekst){
        string tekstBezPowtorzen = "";
        
        if(tekst == "" || tekst.empty()){
            return "";
        }
        
        for(int k = 0; k< tekst.length(); k++){
            tekstBezPowtorzen += tekst[k];
            if(tekst[k] == tekst[k+1]){
                k+=1;
            }
        }
        
        return tekstBezPowtorzen;
    }
};

int main()
{
    string wprowadzonyTekst;
    
    cout<<"Wprowadz tekst: ";
    
    cin >> wprowadzonyTekst;
    
    int samogloski = StringOperacje::ileSamoglosek(wprowadzonyTekst);
    
    string bezPowtorzen = StringOperacje::usunPowtorzenia(wprowadzonyTekst);
    
    cout << "Ten tekst ma " << samogloski << " samoglosek." << endl;
    cout << "Tekst bez powtorzen obok siebie: " << bezPowtorzen;

    return 0;
}
