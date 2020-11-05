#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    srand(time(NULL));
    int m, n, a, b, row;
    cout<<"Wprowadz m i n: "; cin>>m>>n;

    int T[m][n];

    cout<<endl<<"Od jakiej liczby chcesz wylosowac zakres: "; cin >> a;
    cout<<endl<<"Do jakiej: "; cin>>b;

    for(int i = 0; i < m; i++){
        for(int l = 0; l < n; l++){
            T[i][l] = (rand()&(b-a))+a;
        }
    }
    for(int i = 0; i< m; i++){
        cout<<endl<<endl<<"Wiersz "<<i<<": "<<endl;
        for(int l = 0; l < n; l++){
            cout<<T[i][l]<<"  ";
        }
    }
    cout<<endl<<"Ktory wiersz chcesz usunac: "; cin>>row;
    if(row >= m){
        cout<<endl<<"Zbyt duza liczba!";
        return 0;
    }
    for(int i = row; i < m; i++){
        for(int l = 0; l<n; l++){
            if( i == m-1){
                T[i][l] = 0;
            }else{
                T[i][l] = T[i+1][l];
            }

        }
    }
    for(int i = 0; i < m; i++){
        cout<<endl<<endl<<"Wiersz "<<i<<": "<<endl;
        for(int l = 0; l < n; l++){
            cout<<T[i][l]<<"  ";
        }
    }
    return 0;
}
