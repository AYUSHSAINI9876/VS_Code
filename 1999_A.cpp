#include <bits/stdc++.h>
using namespace std;

int sumDig(long long x) {
    long long sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        cout << sumDig(x) << endl;
    }
    return 0;
}