#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <math.h>

using namespace std;
void suma(int m, int* arr){
    int suma[10] = {0};
    for(int i=0; i<m; i++){
        switch(arr[i]){
            case 50: suma[0]++; break;
            case 51: suma[1]++; break;
            case 52: suma[2]++; break;
            case 53: suma[3]++; break;
            case 54: suma[4]++; break;
            case 55: suma[5]++; break;
            case 56: suma[6]++; break;
            case 57: suma[7]++; break;
            case 58: suma[8]++; break;
            case 59: suma[9]++; break;
        }
    }
    for(int i = 50; i<=59; i++){
        cout<<endl<<i<<" wystepuje "<<suma[i-50]<<" razy";
    }
}
int * wypisz(int m){
    int *arr = new int[m];
    int curr = 0;
    for(int i = 0; i<m; i++){
        arr[i] = rand()%(59-51)+50;
    }
    cout<<endl<<"*************************************************************"<<endl;
    for(int i=0; i<=ceil(m/8); i++){
        for(int l = 0; l<8; l++){
            if(curr < m){
              cout<<setw(7)<<arr[curr];
            }

            curr++;
        }
        cout<<endl;
    }
    cout<<"*************************************************************"<<endl;
    return arr;
}

int main()
{
    srand( time( NULL ) );
    int m = 90;
    int *p;
    p = wypisz(m);
    suma(m, p);
    cout<<endl<<"*************************************************************"<<endl;
    return 0;
}


