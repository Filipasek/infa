#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int rek(int n,int g){
   if(n==g) return n;
   else if(n>g) return rek(n-g,g);
   else return rek(n,g-n);
}
int main () {
   int x,y;
   cout <<"Podaj 2 liczby ";
   cin >> x;
   cout <<endl;
   cin >>y;
   cout <<endl;
   cout <<"NWD wynosi " << rek(x,y);
cout << "\n";

return 0;

}
