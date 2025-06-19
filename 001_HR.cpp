#include <bits/stdc++.h>
using namespace std;

long long sumDivisibleBy(long long k, long long n) {
    long long p = (n - 1) / k; // numbers less than n divisible by k
    return k * p * (p + 1) / 2;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long sum = sumDivisibleBy(3, n) + sumDivisibleBy(5, n) - sumDivisibleBy(15, n);
        cout << sum << endl;
    }
    return 0;
}