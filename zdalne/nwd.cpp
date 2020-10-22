#include <iostream>
using namespace std;

int obliczNWD(int a, int b){
    while(a != b){
        if(a > b) a = a - b;
        else if(b > a) b = b - a;
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