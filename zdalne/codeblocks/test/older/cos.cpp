#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void read(){
    ifstream myfile("liczby111.txt");
    if(myfile.is_open()){
        int ilosc = 0;
        int suma = 0;
        string text;
        while(getline(myfile, text)){
            if(text != ""){
                ilosc++;
                suma += atoi(text.c_str());
            }
        }
        float srednia = (1.0 * suma)/(ilosc * 1.0);
        cout<<"Suma to: "<<suma<<endl;
        cout<<"Ilosc liczb to: "<<ilosc<<endl;
        cout<<"Srednia liczb to: "<<srednia<<endl;

        myfile.close();
    }else{
        cout<<"Error";
    }
}
int main()
{
    read();
    return 0;
}
