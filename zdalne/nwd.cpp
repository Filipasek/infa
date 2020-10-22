#include <iostream>
using namespace std;

int main(){
    int a, b, x, y;
    cout<<"Podaj liczby: "<<endl;
    cin>>a>>b;
    x = a; //placeholder
    y = b; //placeholder asweel
    while(a != b){
        if(a > b) a = a - b;
        else if(b > a) b = b - a;
    }
    cout<<endl<<"NWD liczb "<<x<<" i "<<y<<" jest rowny: "<<a;
    return 0;
}