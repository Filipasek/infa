#include<iostream>
#include<cstdlib>
using namespace std;

int horner_rekurencyjnie(int wsp[],int st, int x)
{
	if(st==0)
		return wsp[0];

	return x*horner_rekurencyjnie(wsp,st-1,x)+wsp[st];
}

int horner_iteracyjnie(int wsp[],int st, int x)
{
	int wynik = wsp[0];

	for(int i=1;i<=st;i++)
		wynik = wynik*x + wsp[i];

	return wynik;
}

int main()
{
	int stopien = 6;
	int argument = 2;
	int wspolczynniki [stopien+1] = {3, 0, 2, 0, -2, 0, 1};
	cout<<wspolczynniki[0];

	cout<<"Rekurencyjnie: W( "<<argument<<" ) = "<<horner_rekurencyjnie(wspolczynniki, stopien, argument)<<endl;
	cout<<"Iteracyjnie: W( "<<argument<<" ) = "<<horner_iteracyjnie(wspolczynniki, stopien, argument)<<endl;
	return 0;
}
