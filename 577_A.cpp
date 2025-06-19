#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,x;
    cin >> n >> x;
    long long count = 0;
    for (long long i = 1; i <= n; i++) {
        if (x % i == 0) {
            int j = x / i;
            if (j <= n)
                count++;
        }
    }
    cout << count << endl;
    return 0;
}