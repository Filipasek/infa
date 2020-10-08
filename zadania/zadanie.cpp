#include <iostream>

using namespace std;

bool SumaKwadrat(int a, int b, int c)
{
    if ((a * a + b * b) == (c * c))
    {
        return true;
    }
    else if ((a * a + c * c) == (b * b))
    {
        return true;
    }
    else if ((c * c + b * b) == (a * a))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a, b, c;
    bool wynik;
    cout << "Podaj 3 liczby naturalne aby sprawdzic: "<<endl;
    cin >> a;
    cin >> b;
    cin >> c;
    wynik = SumaKwadrat(a, b, c);
    if (wynik == true)
    {
        cout << "Jak najbardziej, jeszcze jak!";
    }
    else
    {
        cout << "No nie za bardzo";
    }
    return 0;
}
