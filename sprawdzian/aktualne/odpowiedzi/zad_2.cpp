#include <iostream>

using namespace std;
int pole_podstawy(int bok){
    return bok*bok;
}
int pole_boku(int podstawa, int bok){
    return podstawa*bok;
}
int main()
{
    int w, h;
    cout<<"Wprowadz dlugosc boku podstawy prostopadloscianu: "; cin>>w;
    cout<<endl<<"Wprowadz wysokosc prostopadloscianu: "; cin>>h;
    cout<<endl<<endl<<"Pole powierzchni tego prostopadloscianu jest rowne: "<<(pole_podstawy(w)*2) + (pole_boku(w, h)*4);
    return 0;
}
