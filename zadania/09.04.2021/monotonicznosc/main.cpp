#include <iostream>

using namespace std;
bool CzyMonotoniczna(int* T, int n){
    bool monotonicznoscRosnaca;
    bool czyStala = true;
    for(int i=0; i<n-1; i++){
        if((T[i] - T[i+1]) < 0){
            if(!monotonicznoscRosnaca){
                return false;
            }
            monotonicznoscRosnaca = true;
            czyStala = false;
        }else if((T[i] - T[i+1]) > 0){
            if(monotonicznoscRosnaca){
                return false;
            }
            monotonicznoscRosnaca = false;
            czyStala = false;

        }
    }
    if(czyStala){
        cout<<"Monotonicznosc stala";
    }else if(monotonicznoscRosnaca){
        cout<<"Monotonicznosc rosnaca";
    }else{
        cout<<"Monotonicznosc malejaca";
    }
    return true;
}
int main()
{
    int n;
    cout << "Podaj ilosc liczb: " << endl; cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cout<< "Podaj " << i+1 <<"liczbe "<<endl;
        cin>>arr[i];
    }
    if(CzyMonotoniczna(arr, n)) cout<<endl<<"Nie jest monotoniczna";
    else cout<<endl<<"Jest monotoniczna";
    return 0;
}
