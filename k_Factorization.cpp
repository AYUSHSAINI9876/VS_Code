#include <bits/stdc++.h>
using namespace std;

// const int MOD=1e9 + 7;
// // Function to calculate factorial modulo MOD
// long long fact(int n) {
//     long long result = 1;
//     for (int i = 2; i <= n; ++i) {
//         result = (result * i) % MOD;
//     }
//     return result;
// }
int main() {
    long long n;
    int k;
    cin >> n >> k;

    vector<long long> primes;
    long long num = n;
    for (long long i = 2; i * i <= num; ++i) {
        while (num % i == 0) {
            primes.push_back(i);
            num /= i;
        }
    }
    if (num > 1) {
        primes.push_back(num);
    }

    if ((int)primes.size() < k) {
        cout << -1 << endl;
        return 0;
    }

    vector<long long> result;
    for (int i = 0; i < k - 1; ++i) {
        result.push_back(primes[i]);
    }

    long long last = 1;
    for (int i = k - 1; i < (int)primes.size(); ++i) {
        last *= primes[i];
    }
    result.push_back(last);

    for (auto val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}