#include <iostream>

using namespace std;

void zliczaj(){
    int n, negative, positive;
    double currentNumber;
    
    cout<<"Ile liczb wprowadzisz? ";
    cin>>n;
    cout<<endl<<"Podawaj liczby oddzielajac enterem"<<endl;

    for(int i = 0; i< n; i++){
        cin>>currentNumber;
        if(currentNumber < 0){
            negative++;
        }else{
            positive++;
        }
    }

    cout<<endl<<endl<<"Ilosc liczb ujemnych: "<<negative<<", a liczb dodatnich: "<<positive;
}

int main(){
    zliczaj();
    return 0;
}