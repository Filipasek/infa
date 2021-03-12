#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    plik.open("horner3.txt");
    string z; int x, y;
    if(plik.is_open()) getline(plik, z); else return 1;

    int index = atoi(z.c_str());
    string T[index];
    long long int l[index];
    long long int r[index];
    for(int i = 0; i < index; i++){
        getline(plik, T[i]);
        l[i] = atoi((T[i].substr(0,1)).c_str());
        r[i] = atoi((T[i].substr(2)).c_str());
        cout<<"Debug: "<<T[i]<<endl;
        cout<<"Debug transformed: "<<r[i]<<endl;
    }
    plik.close();
    for(int i=0; i<index; i++){
        cout<<"Wypisuje l: "<<l[i]<<endl;
        cout<<"Wypisuje r: "<<r[i]<<endl;
    }
    return 0;
}
