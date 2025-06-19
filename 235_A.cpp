#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b) {
    return a / __gcd(a, b) * b;
}

int main() {
    long long n;
    cin >> n;
    long long ans = 0;
    for (long long i = n; i >= max(1LL, n - 50); i--) {
        for (long long j = n; j >= max(1LL, n - 50); j--) {
            for (long long k = n; k >= max(1LL, n - 50); k--) {
                long long current_lcm = lcm(lcm(i, j), k);
                ans = max(ans, current_lcm);
            }
        }
    }
    cout << ans;
    return 0;
}