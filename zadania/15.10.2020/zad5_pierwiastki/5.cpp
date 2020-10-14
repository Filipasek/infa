#include <iostream>
#include <cmath>
using namespace std;

void liczPierwiastki(float a, float b, float c){
    float delta = (b*b) - (4*a*c);
    float pierDelta = sqrt(delta);

    if(delta > 0){
        float x1 = ((-b) - (pierDelta))/(2*a);
        float x2 = ((-b) + (pierDelta))/(2*a);
        cout<<"Miejsca zerowe funkcji: "<<x1<<" oraz: "<<x2;
    }else if(delta == 0){
        float x = (-b)/(2*a);
        cout<<"Miejsce zerowe funkcji: "<<x;
    }else if(delta < 0){
        cout<<"Brak miejsc zerowych funkcji";
    }
}

int main(){
    float a, b, c;
    cout<<"Podaj parametry a, b oraz c oddzielajac enterem z wzoru funkcji ax^2+bx+c, by obliczyc jej miejsca zerowe: "<<endl;
    cin>>a>>b>>c;
    liczPierwiastki(a, b, c);
    return 0;
}