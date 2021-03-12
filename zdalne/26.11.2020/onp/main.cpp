#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
main(){
    srand(time(NULL));
    // <a, b> a = 20, b = 39
    int dane = rand()%(39-20+1)+20;
    int ws=0;
    int n=10;
    int stos[n];
    while(ws<10)
    {
        dane = rand()%(39-20+1)+20;
        cout << "Pozycja danej: " << ws <<  " liczba: " << dane << endl;
        stos[ws++]  = dane;
    }
    cout<<"Odczyt danych ze stosu: ";
    while(ws > 0){
        dane=stos[--ws];
        cout<<endl<<"pozycja danej: " << ws << " liczba: " << dane;
    }
}
