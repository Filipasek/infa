#include <iostream>
#include <fstream>

using namespace std;

bool jestPalindromem(string tekst){
    if (tekst == string(tekst.rbegin(), tekst.rend())) {
        return true;
    }else {
        return false;
    }
}

int main()
{
    string slowo;
    fstream dane;
    fstream wyniki;
    dane.open("dane.txt");
    wyniki.open("zadanie4.txt", ios::app);

    if(dane.is_open() && wyniki.is_open()){
       string tekst;
        while(getline(dane, tekst)){
            if(jestPalindromem(tekst)){
                wyniki << tekst<<endl;
            }
       }
       wyniki.close();
       dane.close();
    }
    return 0;
}
