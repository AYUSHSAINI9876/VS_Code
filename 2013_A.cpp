#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        if (x >= y) {
            cout << (n + y - 1) / y << endl;
        } else {
            cout << (n + x - 1) / x << endl;
        }
    }
    return 0;
}