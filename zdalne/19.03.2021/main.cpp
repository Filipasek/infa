#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void znajdz(int* tab, int n, int &MIN, int &MAX)
{
    int i = 2;
    if(n>=2)
    {
        if(tab[0]>tab[1])
        {
            MIN = tab[1];
            MAX = tab[0];
        }
        else
        {
            MIN = tab[0];
            MAX = tab[1];
        }

        while(i+2<=n)
        {
            if(tab[i]>tab[i+1])
            {
                if(tab[i]>MAX)
                    MAX = tab[i];
                if(tab[i+1]<MIN)
                    MIN = tab[i+1];
            }
            else
            {
                if(tab[i+1]>MAX)
                    MAX = tab[i+1];
                if(tab[i]<MIN)
                    MIN = tab[i];
            }
            i+=2;
        }
        if(n%2==1)
        {
            if(tab[i] > MAX) MAX = tab[i];
            if(tab[i] < MIN) MIN = tab[i];
        }
    }
    else
    {
        MIN = MAX = tab[0];
    }
}

int main() {
    srand(time(NULL));
    int MIN, MAX;
    unsigned int n;

    cout << "Podaj liczbe elementow w zbiorze: ";
    cin >> n;
    int tab[n];
    int temp;
    if (n == 0)
        cout << "Podaj liczbe wieksza od 0!\n";
    else
        for (int i = 0; i < n; i++){
            temp = (rand() % 50);
            cout << temp<<endl;
            tab[i] = temp;
        }

    znajdz(tab, n, MIN, MAX);

    cout<<"MIN: "<<MIN<<"\nMAX: "<<MAX<<endl;

    return 0;
}






//#include <iostream>
//using namespace std;
//
//int main() {
//    std::cout << "Hello, World!" << std::endl;
//    int n, dl;
//    int M, N;
//
//    cin>>n;
//    int x[n];
//    if(n%2 == 0){
//        dl = n-1;
//    }else{
//        dl = n-2;
//    }
//    for(int i = 0; i<=dl-1; i=+2){
//        if(x[i] < x[i+1]){
//            N = x[i];
//            M = x[i+1];
//        }else{
//            M = x[i];
//            N = x[i+1];
//        }
//    }
//    return 0;
//}