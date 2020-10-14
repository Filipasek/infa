#include <iostream>
#include <cmath>

using namespace std;
int zapotrzebowanie(float a, float b, float c, float d){
    float suma = a+b+c+d;
    if(suma/20>10){
        suma = suma+10;
        
    }else{
        suma=ceil(1.05 * suma);

    }
    return int(suma);
}
int zapotrzebowanie(float a, float b){
    float suma = 2*a + 2*b;
    if(suma/20 > 10){
        suma = ceil(suma + 10);
    }else{
        suma=ceil(1.05 * suma);
    }
    return int(suma);
}

int main(){
    cout<<zapotrzebowanie(13.3, 20.0, 20.8, 15.1)<<endl;
    cout<<zapotrzebowanie(20.0, 55.6)<<endl<<endl;
}