#include <iostream>
using namespace std;

const int MAXW = 5, MXK = 5;

void wczytaj(int T[][MAXK], int m = 5, int n = 5){
    cout<< "Podaj elementy tablicy: "<<endl;
    for(int i = 0; i < m; i++)
        for(int j = 0; j< n; j++){
            cout<<"T["<<i<<"]["<<j<<"] = ";
            cin>>T[i][j];
        }
}
void wypisz(int T[][MAXK], int m = 5, int n = 5){
    cout<< "\nwczytana tablica: "<<endl;
    for(int i = 0; i< m; i++){
        for(int j = 0; j<n; j++){
            cout<<T[i][j] << "\t";
            cout<<endl;
        }
        cout<<endl;
    }
}
void wyzeruj(T[][MAXK], int m = 5, int n = 5){
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n;j++){
            if(i != j) T[i][j] = 0;
        }
    }
}

int main(){
    int T[MAXW][MAXK];
    wczytaj(T);
    wypisz(T);
    wyzeruj(T);
    wypisz(T);
    return 0;
}
