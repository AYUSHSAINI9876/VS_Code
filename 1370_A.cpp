#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n;
        // int maxi=1;
        // for(int i=1;i<=n;i++){
        //     for(int j=i+1;j<=n;j++){
        //         maxi=max(maxi,__gcd(i,j));
        //     }
        // }
        // cout << maxi << endl;
        cout << n/2 << endl;
    }
    return 0;
}