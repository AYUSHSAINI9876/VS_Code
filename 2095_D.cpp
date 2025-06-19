#include <bits/stdc++.h>
using namespace std;

long long mod = 998244353;
int inf = 1e9;
long long sp(long long a, long long n, long long mod) {
    long long res = 1;
    for (long long t = a; n; n >>= 1, t *= t) {
        if (n & 1) res *= t % mod;
    }
    return res % mod;
}
 
int main() { 
    int _ = 1;
    while (_--) {
        cout << fixed << setprecision(6);
        cout << 36.104215 <<  ' '  << - 115.172320;
    }
}