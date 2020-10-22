#include <iostream>
using namespace std;

int obliczNWD(int a, int b){ //a%
    int placeholder;
    while(b != 0){
        placeholder = a;
        a = b;
        b = placeholder%b;
    }
    return a;
}

int main(){
    int x, y;
    cout<<"Podaj liczby: "<<endl;
    cin>>x>>y;
    int a = obliczNWD(x, y);
    cout<<endl<<"NWD liczb "<<x<<" i "<<y<<" jest rowny: "<<a;
    return 0;
}