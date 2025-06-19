#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> p(n), q(n);
        for (int &x : p){
            cin >> x;
        }
        for (int &x : q){
            cin >> x;
        }
        vector<int> pow2(n);
        pow2[0] = 1;
        for (int i = 1; i < n; ++i)
            pow2[i] = (pow2[i - 1] * 2) % MOD;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            a[i] = pow2[p[i]];
            b[i] = pow2[q[i]];
        }

        vector<int> r(n);
        int max_a = a[0];
        int max_b = b[0];
        r[0] = (a[0] + b[0]) % MOD;

        for (int i = 1; i < n; ++i) {
            max_a = max(max_a, a[i]);
            max_b = max(max_b, b[i]);
            r[i] = (max_a + max_b) % MOD;
        }

        for (int i = 0; i < n; ++i) cout << r[i] << " ";
        cout << '\n';
    }
    return 0;
}