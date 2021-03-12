#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double f(double x)
{
	return sin(x)-0.5;
}

double p(double a, double b, double e)
{
	if(f(a)==0.0)return a;
	if(f(b)==0.0)return b;

	double srodek;

	while(b-a > e)
	{
		srodek = (a+b)/2;

		if(f(srodek) == 0.0)
			return srodek;

		if(f(a)*f(srodek)<0)
			b = srodek;
		else
			a = srodek;
	}
	return (a+b)/2;
}

int main()
{
	double a = 2, b = 4, e = 0.000001;

	cout<<"Znalezione miejsce zerowe wynosi: ";
	cout<<fixed<<setprecision(5)<<p(a, b, e);

	return 0;
}
