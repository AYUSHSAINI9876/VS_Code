#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int gcd=0;
    int count_G = 0; 
    int count_ones = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            count_ones++;
        }
        if (i == 0) {
           gcd = a[i];
        } else {
            gcd = __gcd(gcd, a[i]);
        }
    }
    bool all_equal = true;
    for (int i = 0; i < n; i++) {
        if (a[i] !=gcd) {
            all_equal = false;
            break;
        }
    }
    if (all_equal) {
        cout << 0 << endl;
        return;
    }
    for (int x : a) {
        if (x ==gcd) {
            count_G++;
        }
    }

    if (count_G > 0) {
        cout << n - count_G << endl;
        return;
    }
    vector<int> b = a;
    for (int i = 0; i < n; ++i) {
        b[i] /= gcd;
    }
    int mini = n + 1; 
    for (int i = 0; i < n; ++i) {
        int current_gcd = 0; 
        for (int j = i; j < n; ++j) {
            current_gcd = __gcd(current_gcd, b[j]);
            if (current_gcd == 1) {
                mini = min(mini, j - i + 1);
                break;
            }
        }
    }
    cout << (mini - 1) + (n - 1) << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}