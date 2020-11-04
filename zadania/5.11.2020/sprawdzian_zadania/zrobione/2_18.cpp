#include <iostream>

using namespace std;

int main()
{
    int arr[4][3];
    int n = -1;
    for(int i = 0; i< 4; i++){
        for(int l = 0; l < 3; l++){
            n += 2;
            arr[i][l] = n;
        }
        n-=1;
    }
    for(int i = 0; i < 4; i++){
            cout<<endl<<endl<<"Wiersz "<<i<<": "<<endl;
        for(int l = 0; l<3; l++){
            cout<<arr[i][l]<<"  ";
        }
    }
    return 0;
}
