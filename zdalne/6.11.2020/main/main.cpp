#include <iostream>

using namespace std;
long double potega_rekurencyjnie(double liczba, int potega){
    if(potega == 0) return 1;
    return liczba * potega_rekurencyjnie(liczba, potega - 1);
}
long double potega_iteracyjnie(double liczba, int potega){
    long double suma = 1 ;
    for(int i = 1; i <= potega; i++) suma = suma * liczba;
    return suma;
}
int main()
{
    double podstawa;
    int potega;
    cout << "Podstawa, potega: ";
    cin >> podstawa >> potega;
    cout << endl << "Rekurencyjnie: " << potega_rekurencyjnie(podstawa, potega);
    cout << endl << "Iteracyjnie: " << potega_iteracyjnie(podstawa, potega);
    return 0;
}
