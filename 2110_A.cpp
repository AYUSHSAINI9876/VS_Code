#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n; 
    vector<int> a(n);
    int min_overall = 51; 
    int max_overall = 0;  
    int min_even = 51; 
    int max_even = 0;  
    int min_odd = 51; 
    int max_odd = 0; 

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        min_overall=min(min_overall, a[i]);
        max_overall=max(max_overall, a[i]);

        if (a[i] % 2 == 0) { // If the number is even
            min_even=min(min_even, a[i]);
            max_even=max(max_even, a[i]);
        } else { 
            min_odd=min(min_odd, a[i]);
            max_odd=max(max_odd, a[i]);
        }
    }
    if ((min_overall % 2) == (max_overall % 2)) {
        cout << 0 << endl; 
        return;
    }

    int cost1 = 0,cost2 = 0; 
    if (min_overall % 2 == 0 && max_overall % 2 != 0) {
        for (int x : a) {
            if (x % 2 == 0 && x < min_odd) {
                cost1++;
            }
        }
        for (int x : a) {
            if (x % 2 != 0 && x > max_even) {
                cost2++;
            }
        }
    } 
    else { 
        for (int x : a) {
            if (x % 2 == 0 && x > max_odd) {
                cost1++;
            }
        }
        for (int x : a) {
            if (x % 2 != 0 && x < min_even) {
                cost2++;
            }
        }
    }
    cout << min(cost1, cost2) << endl;
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}