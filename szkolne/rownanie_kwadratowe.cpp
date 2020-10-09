#include <iostream>
#include <cmath>
using namespace std;
float a,b,c;
long double d, x1, x2;
int main()
{
    cout<<"Wprowadz liczby a, b, c naciskajac ENTER: "<<endl;
    cin>>a>>b>>c;
    if(a==0){
        return 0;
    }
    d = b * b - (4*a*c);
    if(d>0){
        x1=(-b-sqrt(d))/(2*a);
        x2 = (-b+sqrt(d))/(2*a);
        cout<<endl<<"wynik wynosi: "<<x1<<" albo "<<x2;
    }else{
        if(d=0){
            x1=(-b)/(2*a);
            cout<<endl<<"wynik wynosi: "<<x1;
        }else{
            cout<<endl<<"Nie ma wyniku";
        }
    }
    return 0;
}

