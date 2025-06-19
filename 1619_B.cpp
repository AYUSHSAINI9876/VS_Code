#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
        long long n;
        cin >> n;

        long long squares = (long long)sqrt(n);
        long long cubes = (long long)cbrt(n);
        long long sixth_powers = (long long)pow(n, 1.0 / 6);

        cout << squares + cubes - sixth_powers << endl;
    }
    return 0;
}