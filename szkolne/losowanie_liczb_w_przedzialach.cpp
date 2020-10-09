#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand( time( NULL ) );
    int a;
    int b;
    cout<<"Liczby maja byc wylosowane od: ";
    cin>>a;
    cout<<endl<<"do: ";
    cin>>b;
    for(int i = 0; i<30; i++)
    {
        cout<<"Liczba "<<i+1<<" = "<<rand()%(b-a+1)+a<<endl;
    }
    return 0;
}


