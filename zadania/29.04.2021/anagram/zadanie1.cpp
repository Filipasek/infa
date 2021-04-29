#include <iostream>

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
    string wyraz1, wyraz2;
    cout << "Podaj wyraz pierwszy: "; cin>>wyraz1;
    cout << endl<< "Podaj wyraz drugi: "; cin>>wyraz2;
    if(czyAnagram(wyraz1, wyraz2)) cout<<endl<<endl<<"Wyrazy sa anagramami";
    else cout<<endl<<endl<<"Wyrazy nie sa anagramami";
    return 0;
}
