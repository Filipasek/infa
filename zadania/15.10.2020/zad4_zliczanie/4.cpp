#include <iostream>
using namespace std;
void zliczanie(int n){
    int currentNumber;
    int negative = 0, nonnegative = 0;
    cout<<"Podawaj liczby oddzielajac enterem: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>currentNumber;
        if(currentNumber < 0) negative++;
        else if(currentNumber >= 0 ) nonnegative++;
    }
    cout<<endl<<endl<<"Negatywne: "<<negative;
    cout<<endl<<"Nienegatyne: "<<nonnegative;
}

int main(){
    int n;
    cout<<"Ile liczb: ";
    cin>>n;
    zliczanie(n);
}