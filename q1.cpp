#include <iostream>
using namespace std;

void dinner() {
    int n,m,p,q;
    cin >> n >> m >> p >> q;
    
    if(p==n){
        if(m==q){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
        return;
    }  
    int k=n/p;
    int r=n%p; 
    if(r==0){
        if(m==k*q){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }else{
        cout << "YES\n";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        dinner();
    }
    return 0;
}