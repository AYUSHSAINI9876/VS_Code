#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        // long long count=0;
        // for(long long i=1;i<n;i++){
        //     long long j=(n-i);
        //     if(i>j && j>0){
        //         count++;
        //     }
        // }
        // cout << count << endl;
        cout << (n - 1) / 2 << endl;
    }
    return 0;
}