#include    <stdio.h>
#include    <iostream>

using namespace std;

int main()
{
    int rozmiar;

    cout << "Podaj dlugosc ciagu: ";
    cin >> rozmiar;

    int liczby[rozmiar];

    for(int i = 0; i < rozmiar; i++)
    {
        cout << "Liczba " << i+1 <<": ";
        cin >> liczby[i];
    }

    for(int i = 1; i < rozmiar; i++)
    {
        switch(liczby[i] <= liczby[i-1])
        {
            case false:
            {
                cout << "ciag nie jest malejacy";
                return 0;
            }
        }
    }

    cout << "ciag jest malejacy";

    return 0;
}
