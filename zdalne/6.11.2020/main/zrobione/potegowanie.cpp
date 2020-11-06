#include <iostream>

using namespace std;
long long int potega_rekurencyjnie(int liczba, int potega){
    if(potega == 0) return 1;
    return liczba * potega_rekurencyjnie(liczba, potega - 1);
}
long long int potega_iteracyjnie(int liczba, int potega){
    long long int suma = 1 ;
    for(int i = 1; i <= potega; i++) suma = suma * liczba;
    return suma;
}
int main()
{
    int podstawa, potega;
    cout << "Podstawa, potega: ";
    cin >> podstawa >> potega;
    cout << endl << "Rekurencyjnie: " << potega_rekurencyjnie(podstawa, potega);
    cout << endl << "Iteracyjnie: " << potega_iteracyjnie(podstawa, potega);
    return 0;
}
