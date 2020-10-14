#include <iostream>
#include <math.h>

using namespace std;

long long int pole(double a, double b){
    return ceil(a*b);
}
long long int pole(double a){
    return ceil(a*a);
}

int main(){
    float a, b;
    cout<<"Podaj wymiary"<<endl;
    cout<<"Szerokosc: ";
    cin>>a;
    cout<<endl<<"Wysokosc: ";
    cin>>b;
    if(a==b) cout<<"Pole: "<<pole(a);
    else cout<<"Pole: "<<pole(a, b);
    return 0;
}