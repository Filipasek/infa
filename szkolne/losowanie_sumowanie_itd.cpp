#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <math.h>

using namespace std;
int suma(int m, int* arr){
    int suma = 0;
    for(int i=0; i<=m; i++){
        suma = suma + arr[i];
    }
    return suma;
}
int mniejsze(int m, int* arr){
    int suma = 0;
    for(int i=0; i<=m; i++){
        if(arr[i] < 13){
            suma++;
        }
    }
    return suma;
}
int najmniejsze(int m, int* arr){
    int min = arr[0];
    for(int i=0; i<=m; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int * wypisz(int m){
    int *arr = new int[m];
    int curr = 0;
    for(int i = 0; i<=m; i++){
        arr[i] = rand()%(20+2)-3;
    }
    cout<<endl<<"*********************************************"<<endl;
    for(int i=0; i<ceil(m/6); i++){
        for(int l = 0; l<6; l++){
            cout<<setw(6)<<arr[curr];
            curr++;
        }
        cout<<endl;
    }
    cout<<"*********************************************"<<endl;
    return arr;
}
void wypiszBezZera(int m, int* arr){
    int curr = 0;
    cout<<endl<<"*********************************************"<<endl;
    for(int i=0; i<ceil(m/6); i++){
        for(int l = 0; l<6; l++){
            while(arr[curr] == 0){
                curr++;
            }
            if(curr>m){
                cout<<endl<<"*********************************************"<<endl;
                exit(0);
            }
            if(l == 5){
                cout<<setw(6)<<arr[curr];
            }else{
                cout<<setw(6)<<arr[curr]<<",";
            }
            curr++;
        }
        cout<<endl;
    }
    cout<<"*********************************************"<<endl;
}
int main()
{
    srand( time( NULL ) );
    int m;
    cout<<"Ile elementow mam wprowadzic do tablicy? (m<100)? ";
    cin>>m;
    if(m>=100){
        cout<<"m<100 !!!!";
        return 1;
    }
    int *p;
    p = wypisz(m);
    cout<<endl<<"suma liczb wynosi: "<<suma(m, p);
    cout<<endl<<"Suma liczb mnniejszych od 13 wynosi: "<<mniejsze(m, p);
    cout<<endl<<"najmneijsza liczba to: "<<najmniejsze(m, p);
    wypiszBezZera(m, p);
    return 0;
}


