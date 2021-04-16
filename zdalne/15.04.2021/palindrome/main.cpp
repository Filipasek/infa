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
    int parzyste = 0;
    int nieparzyste = 0;
    string slowo;
    fstream dane;
    fstream wynika;
    fstream wynikb;
    fstream wynikc;
    dane.open("hasla.txt");
    wynika.open("wynik4a.txt", ios::app);
    wynikb.open("wynik4b.txt", ios::app);
    wynikc.open("wynik4c.txt", ios::app);

    if(dane.is_open() && wynika.is_open() && wynikb.is_open() && wynikc.is_open()){
       string tekst;
        while(getline(dane, tekst)){
            if(tekst.length()%2 == 0) parzyste++;
            else nieparzyste++;
            if(jestPalindromem(tekst)){
                wynikb << tekst<<endl;
            }
            for(int i = 0; i<tekst.length(); i++){
                if(int(tekst[i]) + int(tekst[i+1] == 220)) wynikc << tekst<<endl;
            }
       }
       wynika<<"Nieparzysta ilosc znakow: "<<nieparzyste<<endl;
       wynika<<"Parzysta ilosc znakow: "<<parzyste<<endl;

       wynika.close();
       wynikb.close();
       wynikc.close();
       dane.close();
    }
    return 0;
}










