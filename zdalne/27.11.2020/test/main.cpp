#include<iostream>
#include<cmath>
#include<cstdlib>
#include <ctime>

using namespace std;


int main() {
    srand(time(NULL));
    int m = 5;
    int n = 6;
    int arr[m][n];
    int a = 2;
    int b = 20;
    for(int i = 0; i< m; i++){
        for(int l = 0; l < n; l++){
            arr[i][l] = (rand()%(b - a) + 1) + a;
        }
    }
    for(int i = 0; i< m; i++){
        cout<<endl<<endl<<"Wiersz "<<i<<": "<<endl;
        for(int l = 0; l < n; l++){
            cout<<arr[i][l]<<"  ";
        }
    }


    int x = 1, y = 3;

    for( int a = 0; a < m; a++ ) {
        int temp = arr[ a ][ x ];
        arr[ a ][ x ] = arr[ a ][ y ];
        arr[ a ][ y ] = temp;
    }

    cout << endl<<endl;
    for(int i = 0; i< m; i++){
        cout<<endl<<endl<<"Wiersz "<<i<<": "<<endl;
        for(int l = 0; l < n; l++){
            cout<<arr[i][l]<<"  ";
        }
    }
}
