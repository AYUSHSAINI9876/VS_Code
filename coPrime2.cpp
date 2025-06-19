#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;

vector<bool> bad(MAX, false); // mark numbers that are not coprime
vector<bool> is_prime(MAX, true); // sieve for primes

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int& x : a) cin >> x;

    // Step 1: Mark all bad primes (i.e., prime divisors of any A[i])
    for (int i = 0; i < n; ++i) {
        int x = a[i];
        for (int p = 2; p * p <= x; ++p) {
            if (x % p == 0) {
                bad[p] = true;
                while (x % p == 0) x /= p;
            }
        }
        if (x > 1) bad[x] = true;
    }

    // Step 2: Mark all numbers up to m that are divisible by any bad prime
    vector<bool> is_good(m + 1, true);
    is_good[0] = false;
    for (int i = 1; i <= m; ++i) {
        for (int p = 2; p <= i && p * p <= MAX; ++p) {
            if (bad[p] && i % p == 0) {
                is_good[i] = false;
                break;
            }
        }
    }

    // Step 3: Efficient marking using multiples
    for (int p = 1; p <= MAX; ++p) {
        if (bad[p]) {
            for (int mult = p; mult <= m; mult += p) {
                is_good[mult] = false;
            }
        }
    }

    // Step 4: Collect and print results
    vector<int> result;
    for (int i = 1; i <= m; ++i) {
        if (is_good[i]) result.push_back(i);
    }

    cout << result.size() << '\n';
    for (int x : result) cout << x << '\n';
    return 0;
}