#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 1;

int main() {
    int n;
    cin >> n;
    vector<long long>arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<bool> is_prime(MAX, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i < MAX; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX; j += i)
                is_prime[j] = false;
        }
    }

    // Step 2: Store all T-primes (squares of primes)
    unordered_set<long long> t_primes;
    for (int i = 2; i < MAX; ++i) {
        if (is_prime[i])
            t_primes.insert(1LL * i * i);
    }

    // Step 3: Check each number
    for (long long x : arr) {
        if (t_primes.count(x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}