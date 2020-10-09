#include <iostream>

using namespace std;

int main(){
    int m, n;
    cout<<"Podaj ilosc bokow w poziomie: "; cin>>m; cin.ignore();
    cout<<"Podaj ilosc bokow w pionie: "; cin>>n; cin.ignore();
    for(int i=0; i<n; i++){
        if(i==0 || i==n-1){
            for(int l=0; l<m; l++){
                cout<<"-";
            }
        }else{
            cout<<"-";
            for(int l=0; l<m-2; l++){
                cout<<" ";
            }
            cout<<"-";
        }
        cout<<endl;
    }
    return 0;
}
