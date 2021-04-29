#include <iostream>

using namespace std;
void wydajReszte(int reszta){
    int nominaly[6] = {50, 20, 10, 5, 2, 1};
    int iloscNominalow[6];
    for(int i=0; i<6; i++){
        cout<<endl<<"Podaj ilosc dostepnych nominalow o wartosci "<<nominaly[i]<<": "; cin>>iloscNominalow[i];
    }
    int uzyte[6] = {0};
    int zebrane = 0;
    int indeks = 0;
    while(zebrane != reszta && indeks <= 5){
        if(iloscNominalow[indeks] == 0){
            cout<<endl<<"Nominalow o wartosci "<<nominaly[indeks]<<" zl zabraklo";
            indeks++;
        }else if(nominaly[indeks] <= (reszta - zebrane)){
            zebrane += nominaly[indeks];
            uzyte[indeks]++;
            iloscNominalow[indeks]--;
        }else{
            indeks++;
        }
    }
    cout<<endl<<"Wydano "<<zebrane<<" zl z "<<reszta<<" zl. Jestesmy ci winni jeszcze "<<reszta-zebrane<<" zl.";
    cout<<endl<<endl<<"Reszte wydano w nominalach: 50x"<<uzyte[0]<<", 20x"<<uzyte[1]<<", 10x"<<uzyte[2]<<", 5x"<<uzyte[3]<<", 2x"<<uzyte[4]<<", 1x"<<uzyte[5];
}
int main()
{
    int wplacone, wymagane;
    cout << "Podaj cene zakupu: " << endl; cin>>wymagane;
    cout << endl << "Podaj ile zaplacono: " << endl; cin>>wplacone;

    wydajReszte(wplacone - wymagane);
    return 0;
}
