#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    int counter = 0;
    int countt = 1000;
    int tab[countt + 1];
    for (int i = 2; i <= countt; i++)
        tab[i] = i;
    int pier = sqrt(countt);
    for (int i = 2; i <= pier; i++)
    {
        if (tab[i] != 0)
            for (int j = 2 * i; j <= countt; j = j + i)
            {
                if (tab[j] != 0)
                {
                    tab[j] = 0;
                    counter++;
                }
            }
    }
    cout << endl
         << "tablica z liczbami pierwszymi" << endl
         << endl;
    cout << "--------------------------------------------------------------------------------------------------" << endl
         << endl;
    int l = 0;
    for (int i = 2; i <= countt; i++)
    {
        if (tab[i] != 0)
        {
            if (l < 15)
            {
                if (l == 0){
                    cout << tab[i];
                }
                else{
                    cout << "\t " << tab[i];
                }
                if (l != 14){
                    cout << ",";
                }
                l++;
            }
            else
            {
                cout << endl
                     << tab[i] << ",";
                l = 1;
            }
        }
    }
    cout << endl
         << endl
         << "--------------------------------------------------------------------------------------------------";

    cout << endl
         << endl
         << "tablica z wygenerowanymi liczbami" << endl
         << endl;
    cout << "--------------------------------------------------------------------------------------------------" << endl
         << endl;

    int n = rand() % (196) + 5;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % (997) + 4;
    }
    l = 0;
    for (int i = 0; i < n; i++)
    {
        if (l != 10)
        {
            cout << "[" << i << "]"
                 << "=" << arr[i];
            if (l != 9)
                cout << ", ";
            l++;
        }
        else
        {
            l = 1;
            cout << endl
                 << endl
                 << "[" << i << "]"
                 << "=" << arr[i] << ", ";
        }
    }
    cout << endl
         << endl
         << "--------------------------------------------------------------------------------------------------" << endl
         << endl;

    int low = 1001;
    int temp;
    int k = -1;

    for (int i = 0; i < n; i++)
    {
        temp = arr[i];
        for (int j = 0; j < countt; j++)
        {
            if (temp == tab[j] && temp < low)
            {
                low = temp;
                k = i;
            }
        }
    }
    cout << "znaleziono w tablicy najmniesza liczbe pierwsza: " << low << " - na pozycji " << k << endl
         << endl;
    cout << "--------------------------------------------------------------------------------------------------";

    return 0;
}
