#include <iostream>
using namespace std;
int main()
{
    float a,b,iloraz;
    while(b!=0){
        cout<<endl<<"Wynik: "<<a/b;
        cout<<"Podaj liczby a i b: "; cin>>a>>b; cin.ignore();
        if(b==0){
            cout<<endl<<"Nie mozna dzielic przez 0!";
        }
        cout<<endl<<"Wynik: "<<a/b;
    }


    return 0;
}

