#include <iostream>
#include <cmath>
using namespace std;
long double a, b, x;
int main()
{
    cout<<"Podaj liczby a, b do rownania ax-b=0, naciskajac enter po kazdym wprowadzeniu: "<<endl;
    cin>>a>>b;
    if(a!=0 && b!=0){
        x = (-b)/a;
        cout<<endl<<"x jest rowne: "<<x;
    }else if((a!=0 && b==0) || (a==0 && b==0)){
        cout<<endl<<"Nieskonczenie wiele rozwiazan.";
    }else{
        cout<<endl<<"Rownanie nie ma rozwiazan.";
    }
    return 0;
}

