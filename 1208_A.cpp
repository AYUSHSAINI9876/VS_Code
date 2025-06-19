#include <bits/stdc++.h>
using namespace std;

long long Xorinacci(long long a,long long b,long long n){
    long long r = n % 3;
    if (r == 0) return a;
    if (r == 1) return b;
    return a ^ b;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        long long a,b,n;
        cin >> a >> b >> n;
        cout << Xorinacci(a,b,n) << endl;
    }
    return 0;
}