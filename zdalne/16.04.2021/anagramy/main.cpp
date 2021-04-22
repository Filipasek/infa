#include <iostream>
#include <fstream>

using namespace std;

string sortuj(string wyraz)
{
    int n = wyraz.length();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (wyraz[j] > wyraz[j + 1])
            {
                char temp = wyraz[j + 1];
                wyraz[j + 1] = wyraz[j];
                wyraz[j] = temp;
            }
        }
    }
    return wyraz;
}
bool czyAnagram(string tekst1, string tekst2)
{
    if (tekst1.length() == tekst2.length())
    {
        tekst1 = sortuj(tekst1);
        tekst2 = sortuj(tekst2);
        if (tekst1 == tekst2)
            return true;
    }
    return false;
}

int main()
{
    string wiersz;
    fstream dane;
    fstream wynik1;
    fstream wynik2;
    dane.open("anagram.txt");
    wynik1.open("dlugosc.txt", ios::app);
    wynik2.open("anagram_wyniki.txt", ios::app);
    if (dane.is_open() && wynik1.is_open() && wynik2.is_open())
    {
        while (getline(dane, wiersz))
        {
            int pos = 0;
            string arr[5];
            for (int i = 0; i < wiersz.length(); i++)
            {
                if (wiersz[i] == ' ') pos++;
                else arr[pos] = arr[pos] + wiersz[i];
            }
            bool anagram = true;
            for(int i = 0; i < 4; i++){
                if(!czyAnagram(arr[i], arr[i+1])) anagram = false;
            }
            if(anagram) wynik2 << wiersz << endl;

            bool czyDlugosc = true;
            for(int i = 0; i < 4; i++){
                if(!(arr[i].length() == arr[i+1].length())) czyDlugosc = false;
            }
            if(czyDlugosc) wynik1 << wiersz << endl;
        }
        dane.close();
        wynik1.close();
        wynik2.close();
    }else{
        cout<<"Cos nie dziala";
    }
    return 0;
}
