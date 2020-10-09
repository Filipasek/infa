#include <iostream>

using namespace std;
int ilosc;
int a;
int b;
int c;
int main(){
    cout<<"Wprowadz, dla ilu trojkatow chcesz sprawdzic boki: ";
    cin>>ilosc;
    for(int i=0; i<ilosc; i++){
        cout<<endl<<"Podaj dlugosc pierwszego boku: ";
        cin>>a;
        cout<<endl<<"Podaj dlugosc drugiego boku: ";
        cin>>b;
        cout<<endl<<"Podaj dlugosc trzeciego boku: ";
        cin>>c;
        if(a+b>c && a+c > b && b+c > a){
            cout<<endl<<"Da sie stworzyc taki trojkat";
        }else{
            cout<<endl<<"Nie da sie stworzyc takiego trojkata";
        }
    }
    return 0;
}
