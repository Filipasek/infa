#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;
string generujSlowo(const int dlugosc){
    string tekst;
    char tab[4] = {'a', 'b', 'c', 'd'};
    for(int i = 0; i<dlugosc; i++){
        tekst += tab[rand()%4];
    }
    return tekst;
}
void generujTablice(const string tekst){
    for(int i=0; i < tekst.length(); i++){
        if( i%8 == 0) cout<<endl;
        cout<<setw(6)<<i<<":"<<tekst[i];
    }
}
int ileZawiera(const string tekst, const string wzor){
    int licznik = 0;
    for(int i = 0; i < tekst.length() - wzor.length() + 1; i++){
        if(tekst[i] == wzor[0]){
            bool match = true;
            for(int j = 0; j < wzor.length(); j++){
                if(tekst[i+j] != wzor[j]){
                    match=false;
                    j=wzor.length();
                }
            }
            if(match) licznik++;
            i += wzor.length()-1;
        }
    }
    return licznik;
}

int main()
{
    srand( time( NULL ) );
    string wybor, wyraz, wzor;
    cout<<"Generowac slowo czy z klawiatury? Wpisz [g] lub [k]: ";cin>>wybor;
    while(wybor!= "g" && wybor != "k"){
        cout<<"Sprobuj jeszcze raz. Wpisz [g] lub [k]: ";cin>>wybor;
    }
    if(wybor == "g") {
            wyraz = generujSlowo(30); wzor = generujSlowo(4);
    }
    else{
        cout<<endl<<"Podaj wyraz: "; cin>>wyraz;
        cout<<endl<<"Podaj wzorzec: "; cin>>wzor;
    }
    cout<<endl<<endl;
    generujTablice(wyraz);
    cout<<endl<<endl;
    int ileRazy = ileZawiera(wyraz, wzor);
    if(ileRazy != 0)cout<<endl<<endl<<"Wzor " << wzor <<" zawiera sie w wyrazie "<< wyraz<<" " << ileRazy << " razy.";
    else cout<<endl<<endl<<"Wzor " << wzor <<" nie zawiera sie w wyrazie "<< wyraz<<".";
    return 0;
}
