#include <iostream>
using namespace std;
int main()
{
    cout<<"Liczby podzielne przez 3: "<<endl;
    for(int i=2; i<=16; i++){
        if(i%3==0){
            cout<<i<<" ";
        }
    }
    cout<<endl<<endl<<"Liczby niepodzielne przez 4"<<endl;
    for(int i = 24; i>=8; i--){
        if(i%4!=0){
            cout<<i<<" ";
        }
    }
    return 0;
}

