#include <bits/stdc++.h>
using namespace std;

long long nCr(int n, int k) {
    if (k < 0 || k > n) {
        return 0;
    }
    if (k == 0 || k == n) {
        return 1;
    }
    if (k > n / 2) {
        k = n - k;
    }
    long long res = 1;
    for (int i = 1; i <= k; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

int main() {
    int n, m, t;
    cin >> n >> m >> t;
    long long total = 0;
    int min_boys = max(4, t - m);
    int max_boys = min(n, t - 1);
    for (int b = min_boys; b <= max_boys; b++) {
        int g = t - b;
        total += nCr(n, b) * nCr(m, g);
    }
    cout << total << endl;
    return 0;
}