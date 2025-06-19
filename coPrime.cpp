#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 5;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> freq(MAX, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        freq[a[i]]++;
    }
    // Check for pairwise coprime using sieve method
    bool is_pairwise = true;
    vector<bool> used(MAX, false);
    for (int i = 2; i < MAX; i++) {
        int count = 0;
        for (int j = i; j < MAX; j += i) {
            count += freq[j];
            if (count > 1) break;
        }
        if (count > 1) {
            is_pairwise = false;
            break;
        }
    }
    if (is_pairwise) {
        cout << "pairwise coprime" << endl;
        return 0;
    }
    // Check for setwise coprime
    int g = a[0];
    for (int i = 1; i < n; ++i) {
        g = __gcd(g, a[i]);
    }
    if (g == 1) {
        cout << "setwise coprime" << endl;
    } else {
        cout << "not coprime" << endl;
    }
    return 0;
}