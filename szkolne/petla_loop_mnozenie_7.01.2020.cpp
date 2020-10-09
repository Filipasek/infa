#include <iostream>

using namespace std;

int main(){
    int n;
    cout<< "Podaj ilosc liczb: "; cin>>n; cin.ignore();
    int wynik=1;
    int liczba;
    for(int i=0; i<n; i++){
        cout<<endl<<"Podaj liczbe numer "<<i+1<<": "; cin>>liczba;
        wynik = wynik*liczba;
    }
    cout<<endl<<"Wynik to: "<<wynik;
    return 0;
}
