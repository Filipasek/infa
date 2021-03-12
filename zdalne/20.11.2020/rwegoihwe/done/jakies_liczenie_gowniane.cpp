#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<< "Wprowadz rozmiar tablicy: "; cin>>n;
    if(n <= 0){
        cout<<"Rozmiar musi byc wiekszy od zera!";
        return 0;
    }
    int T[n];
    cout<< endl << "Wprowadz cyfry od 0 do 9 oddzielajac enterem: "<<endl;
    for(int i = 0; i < n; i++){
        bool notDone = true;
        while(notDone){
            cout<<endl<<"Element "<<i<<": "; cin>>T[i];
            if(T[i] >= 0 && T[i] <= 9) notDone = false;
            else cout<<endl<<"Podana liczba nie jest z zakresu od 0 do 9";
        }

    }
    int maxTab = T[0];
    for(int i = 1; i < n; i++) if(T[i] > maxTab) maxTab = T[i];
    int podstawa = maxTab + 1;
    int L = T[0];
    for(int i = 1; i < n; i++){
        L = L*podstawa + T[i];
    }
    cout<<endl<<"L: "<<L;


    return 0;
}
