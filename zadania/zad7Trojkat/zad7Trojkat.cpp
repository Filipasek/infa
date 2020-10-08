#include <iostream>

using namespace std;

void paintRows(int n){
    for(int i = 0; i < n; i++){
        cout<<"$ ";
    }
    cout<<endl;
}
void paintTriangle(){
    for(int i = 10; i > 0; i--){
        paintRows(i);
    }
}
int main(){
    paintTriangle();
    return 0;
}