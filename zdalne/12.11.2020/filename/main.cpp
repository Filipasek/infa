#include<iostream>
#include<cstdlib>
using namespace std;

unsigned long long fib(short int n)
{
	if(n<=2)
		return 1;

	return fib(n-2)+fib(n-1);
}

unsigned long long fibo(int n){
    int i, F, F1, F2;
    if(n<=2) return 1;
    else{
        F1=1;
        F2 = 1;
        for(i = 3; i<=n; i++){
            F = F1+F2;
            F1 = F2;
            F2 = F;
        }
    }

    return F;
}
int main()
{

	int n;

	cout<<"Podaj nr wyrazu ciagu: ";
	cin>>n;

	cout<<n<<" wyraz ciagu ma wartosc "<<fib(n)<<endl;
    cout<<"A drugim sposobem: "<<fibo(n)<<endl;
	return 0;
}
