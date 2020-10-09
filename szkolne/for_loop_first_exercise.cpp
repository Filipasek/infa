#include <iostream>

using namespace std;

int main(){
    int a, w;
    cout<<"Podaj liczby: ";
    cin>>a;
    w=a;
    for(int i=0; i<2; i++){
        cin>>a;
        w=w*a;
    }
    cout<<endl<<"Wynik to: "<<w;
    return 0;
}
