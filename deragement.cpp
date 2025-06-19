#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
long long der[1000001];

void compute_derangements(int N) {
    der[1] = 0, der[2] = 1;
    for (int i = 3; i <= N; i++) {
        der[i] = ((i - 1) * (der[i - 1] + der[i - 2])) % MOD;
    }
}

int main() {
    int n;
    cin >> n;
    compute_derangements(n);
    cout << der[n] << endl;
    return 0;
}
