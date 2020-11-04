#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    int row;
    int arr[4][5];
    for(int i = 0; i< 4; i++){
        for(int l = 0; l < 5; l++){
            arr[i][l] = (rand()%9) + 1;
        }
    }
    for(int i = 0; i< 4; i++){
        cout<<endl<<endl<<"Wiersz "<<i<<": "<<endl;
        for(int l = 0; l < 5; l++){
            cout<<arr[i][l]<<"  ";
        }
    }
    cout<<endl<<"Ktory wiersz chcesz usunac: "; cin>>row;
    if(row > 3){
        cout<<endl<<"Zbyt duza liczba!";
        return 0;
    }
    int temp[5];
    for(int i = row; i < 4; i++){
        for(int l = 0; l<5; l++){
            if( i == 3){
                arr[i][l] = 0;
            }else{
                arr[i][l] = arr[i+1][l];
            }

        }
    }
    for(int i = 0; i< 4; i++){
        cout<<endl<<endl<<"Wiersz "<<i<<": "<<endl;
        for(int l = 0; l < 5; l++){
            cout<<arr[i][l]<<"  ";
        }
    }
    return 0;
}
