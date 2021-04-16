#include <iostream>
#include <math.h>

using namespace std;
void liderQ(int* T, int n){
    int poczatkowa = 0;
    int jakaLiczba;
    int ileRazy = 0;
    while(true){
        for(int i = poczatkowa; i<n;i++){
            jakaLiczba = T[poczatkowa];
            if(T[i] == jakaLiczba) ileRazy++;
        }
        // cout <<"TEST "<<jakaLiczba<<"  "<<ileRazy<<endl;
        if(ileRazy > floor(n/2)){
            cout<<"Lider to liczba "<<jakaLiczba<<" wystepujaca "<< ileRazy << " razy"<<endl;
            break;
        }
        poczatkowa++;
        if(poczatkowa > floor(n/2)){
            cout << "Zbior nie ma lidera"<<endl;
            break;
        }
        jakaLiczba = T[poczatkowa];
        ileRazy = 0;
    }

}
int main()
{
    int n;
    cout << "Podaj ilosc liczb: " << endl; cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cout<< "Podaj " << i+1 <<" liczbe "<<endl;
        cin>>arr[i];
    }
    liderQ(arr, n);
    return 0;
}
