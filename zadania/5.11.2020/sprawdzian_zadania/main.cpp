#include <iostream>

using namespace std;

int main()
{
    int arr[5][6];
    int row1, row2;
    for(int i = 0; i < 5; i++){
        for(int l = 0; l < 6; l++){
            arr[i][l] = i+l;
        }
    }
    for(int i = 0; i< 5; i++){
        cout<<endl<<endl<<"Wiersz "<<i<<": "<<endl;
        for( int l = 0; l<6;l++){
            cout<<arr[i][l]<<"  ";
        }
    }
    cout<<endl<<endl;
    int temp;
    for(int i = 0; i<5; i++){
        temp = arr[i][1];
        arr[i][1] = arr[i][2];
        arr[i][2] = temp;
    }
    for(int i = 0; i< 5; i++){
        cout<<endl<<endl<<"Wiersz "<<i<<": "<<endl;
        for( int l = 0; l<6;l++){
            cout<<arr[i][l]<<"  ";
        }
    }

    cout<<endl<<"Ktory wiersz chcesz zamienic: ";
    cin >> row1;
    cout<<endl<<"Oraz drugi: ";
    cin >> row2;

    for(int i = 0; i<5; i++){
        temp = arr[row1][i];
        arr[row1][i] = arr[row2][i];
        arr[row2][i] = temp;
    }
    for(int i = 0; i< 5; i++){
        cout<<endl<<endl<<"Wiersz "<<i<<": "<<endl;
        for( int l = 0; l<6;l++){
            cout<<arr[i][l]<<"  ";
        }
    }

    return 0;
}
