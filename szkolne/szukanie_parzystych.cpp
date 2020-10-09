#include <iostream>

using namespace std;

int main(){
    int n;
    cout<< "Podaj ilosc liczb, ktore bedziesz wprowadzac: "; cin>>n; cin.ignore();
    int wynik=0;
    int wynik_nieparzyste=0;
    int liczba;
    for(int i=0; i<n; i++){
        cout<<endl<<"Podaj liczbe numer "<<i+1<<": "; cin>>liczba; cin.ignore();
        if(liczba%2==0){
            wynik++;
        }else if(liczba%2==1){
            wynik_nieparzyste++;
        }
    }
    cout<<endl<<"Ilosc liczb parzystych wynosi: "<<wynik<<", a liczb nieparzystych: "<<wynik_nieparzyste;
    return 0;
}
