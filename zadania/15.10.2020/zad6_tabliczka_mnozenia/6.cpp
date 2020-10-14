#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout<<endl<<"TABLICZKA MNOZENIA DO 100"<<endl<<endl;
    for(int i = 0; i<=10; i++){
        if(i == 0){
            cout<<setw(2)<<" ";
        }else{
            cout<<setw(7)<<i;
        }
    }
    for(int i = 1; i<=10; i++){
        cout<<endl<<endl;
        for(int l = 0; l<=10; l++){
            if(l == 0){
                cout<<setw(2)<<i;
            }else{
                cout<<setw(7)<<i*l;
            }
        }
    }
    cout<<endl<<endl;
}