#include <iostream>

using namespace std;
long long int silnia_rekurencyjnie(int liczba){
    if(liczba == 1) return 1;
    return liczba * silnia_rekurencyjnie(liczba - 1);
}
long long int silnia_iteracyjnie(int liczba){
    long long int suma = 1 ;
    for(int i = 1; i <= liczba; i++) suma = suma * i;
    return suma;
}
int main()
{
    int liczba;
    cin>>liczba;
    cout << "Rekurencyjnie: "<<silnia_rekurencyjnie(liczba);
    cout << endl << "Iteracyjnie: "<<silnia_iteracyjnie(liczba);
    return 0;
}
