#include <iostream>

using namespace std;

void Test(int x, int y){
    int t;
    t = x;
    x = y;
    y = t+1;
    cout<<x<<" "<<y;
}

int main(){
    Test(1, 2);
    return 0;
}

//SEND HELP, O CO TU CHODZI???