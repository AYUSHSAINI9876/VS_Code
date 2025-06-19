#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        // vector<long long>ans;
        // for(long long y=0;y<=100000;y++){
        //     if((x&y)>0 && (x^y)>0){
        //         cout << y << endl;
        //         break;        
        //     }
        // }
        if ((x & (x - 1)) == 0) {
            // x is power of 2
            cout << x + 1 << endl;
        } else {
            // Not a power of 2
            cout << (x & -x) << endl;
        }
    }
    return 0;
}