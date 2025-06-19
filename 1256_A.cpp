#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while(t--){
        long long a,b,n,s;
        cin >> a >> b >> n >> s;
        long long maxi=min(a,s/n);
        long long rem=s-maxi*n; 
        if(rem<=b){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}