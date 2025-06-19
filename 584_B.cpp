#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MOD = 1e9 + 7;

ll mod_pow(ll base, ll exp, ll mod) {
    ll res = 1;
    while (exp) {
        if (exp % 2)
            res = res * base % mod;
        base = base * base % mod;
        exp /= 2;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    ll total = mod_pow(3, 3LL * n, MOD);
    ll excluded = mod_pow(7, n, MOD);
    ll result = (total - excluded + MOD) % MOD;
    cout << result << endl;
    return 0;
}