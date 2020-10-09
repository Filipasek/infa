#include <iostream>

using namespace std;

int main(){
    int n;
    cout<< "Podaj liczbe, ktorej silnie chcesz obliczyc: "; cin>>n; cin.ignore();
    int wynik=1;
    for(int i=1; i<=n; i++){
        wynik=wynik*i;
    }
    cout<<endl<<"Wynik: "<<wynik;
    return 0;
}
