#include <iostream>

using namespace std;

char pierwszy_znak(char p[20]){
    char c, min;
    int i = 0;
    min='z';
    while(p[i]!='\0' && i<20){
        c=p[i];
        if(p[i]>64 && p[i]<91){
            c = p[i]+' ';
        }
        if(c<min) min = c;
        i++;
    }
    return min;
}

int main(){
    int i;
    char t[20];
    cout<<"Podaj znaki: "<<endl;
    cin>>t;
    cout<<endl;
    cout<<pierwszy_znak(t);
    return 0;
}