#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;
const int rozmiar=100;
int STOS[rozmiar];
int ws=0;

float zdejmij()
{

if(ws!=0)
{
int dana;
dana=STOS[ws--]
return dana;
}
}

void poloz(int dana)
{

if(ws<rozmiar)
{
 dana=STOS[ws++];
}
}


void suma()
{
int y= zdejmij();
int x = zdejmij();
poloz(x+y);
}

void roznica()
{
int y= zdejmij();
int x = zdejmij();
poloz(x-y);
}
void mnozenie()
{
int y= zdejmij();
int x = zdejmij();
poloz(x*y);
}
{
void dzielenie()
int y= zdejmij();
int x = zdejmij();
poloz(x/y);
}
int main()
{
cout<<"wprowadz wyrazenie w ONP"<<endl;
getline(cin,wyrazenie);
string wyrazenie;
dl =wyrazenie.length();
for (int i=0; i<dl;i++)
{
if(wyrazenie[i]<=48 && wyrazenie[i]<=57)  poloz(wyrazenie[i]-48);
else switch(wyrazenie[i])
{
case'+';
suma();
break;

case '-':
roznica();
break;

case '*':
mnozenie();
break;

case '/':
dzielenie();
break;

}
}

	cout<<"\t"<<STOS[0]<<"\t"<<STOS[1]<<"\t"<<STOS[2]<<"\t"<<STOS[3]<<endl;
}
//stop
