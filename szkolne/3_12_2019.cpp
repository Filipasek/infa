#include <iostream>
#include <cmath>
using namespace std;
long double x;
int main()
{
    cout<<"Podaj x: ";
    cin>>x;
    if(x != NULL){
        if(x>1){
            cout<<endl<<"Wynik to 1";
        }else if(x<-1){
            cout<<endl<<"Wynik to -1";
        }else{
            cout<<endl<<"Wynik to "<<x;
        }
    }else{
        cout<<endl<<"Nie wprowadzono liczby";
    }
    return 0;
}

