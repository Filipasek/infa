#include <iostream>
using namespace std;
int main()
{
    while(true){
        int n, i;
        int a[100];
        string again;
        cout<<"Podaj liczbe w systemie dziesietnym: ";
        cin>>n;
        for(i=0; n>0; i++)
        {
            a[i]=n%2;
            n= n/2;
        }
        cout<<endl<<"Wynik w systemie dwojkowym: ";
        for(i=i-1; i>=0; i--)
        {
            cout<<a[i];
        }
        cout<<endl<<endl<<"Ponowic? [T]/[N] ";
        cin>>again;
        if(again != "T" && again != "t"){
            return 0;
        }
    }
}
