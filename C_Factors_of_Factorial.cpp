#include <bits/stdc++.h>
using namespace std;

const int MOD=1e9 + 7;
// Function to calculate factorial modulo MOD
long long fact(int n) {
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result = (result * i) % MOD;
    }
    return result;
}
int main() {
    int n;
    cin >> n;
    long long count=0;
    long long x=fact(n);
    for(int i=1;i<=x;i++){
        if(x%i==0){
            count++;
        }
    }
    cout<<count%MOD<<endl;
    return 0;
}