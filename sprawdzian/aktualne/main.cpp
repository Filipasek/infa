#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;


int a,b,m,n,liczba,wiersz;
int main()
{
srand(time(NULL));
cout<<"Wprowadz liczby m i n"<<endl;
cin>>m;
cin>>n;

cout<<"Wprowadz zakres liczb do losowania"<<endl;
cin>>a;
cin>>b;

int T[m][n];

for(int i=0;i<m;i++)
    {
        for(int j=0;j< n;j++)
        {
            T[i][j]=(rand()&(b-a))+a;
        }
    }
    for(int i= 0;i<m;i++)
    {
        cout<<endl<<endl<<"Wiersz "<<i<<": "<<endl;
        for(int j=0;j<n;j++)
        {
            cout<<T[i][j]<<"  ";
        }
    }
    cout<<endl<<"Ktory wiersz chcesz usunac: "<<endl;
    cin>>wiersz;
    if(wiersz>=m)
        {
        cout<<endl<<"za duzo";
        return 0;
    }
    for(int i=wiersz;i<m;i++)
        {
        for(int j=0;j<n;j++)
        {
            if( i == m-1)
            {
               T[i][j] = 0;
            }
    else
            {
                T[i][j] = T[i+1][j];
            }

        }
    }
    for(int i=1; i<m;i++)
        {
        cout<<endl<<endl<<"Wiersz nr :"<<i<<endl;
        for(int j=0;j<n;j++)
        {
            cout<<T[i][j]<<"  ";
        }
    }
    return 0;
}
