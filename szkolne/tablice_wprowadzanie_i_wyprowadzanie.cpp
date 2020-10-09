#include <iostream>

using namespace std;
const int arrSize = 10;
int array[arrSize];
void czytaj(){
    int currentValue;
    for(int i=0; i<arrSize; i++){
        cout<<"Podaj liczbe numer "<<i+1<<": ";
        cin>>currentValue;
        array[i] = currentValue;
        cout<<endl;
    }
}

void wypisz(){
    cout<<endl<<endl;
    for(int i = 0; i<arrSize; i++){
        cout<<"Liczba numer "<<i+1<<": "<<array[i]<<endl;
    }
}

int main()
{
    czytaj();
    wypisz();
    return 0;
}


