#include <iostream>

using namespace std;

void paintRows(int n){
    for(int i = 0; i < n; i++){
        cout<<"$ ";
    }
    cout<<endl;
}
void paintTriangle(int size){
    for(int i = size; i > 0; i--){
        paintRows(i);
    }
}
int main(){
    int size;
    cout<<"Jaki trojkat chcesz? ";
    cin>>size;
    cout<<endl;
    paintTriangle(size);
    return 0;
}