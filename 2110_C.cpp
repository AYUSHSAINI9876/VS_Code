#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; ++i) {
        cin >> d[i];
    }
    vector<pair<int, int>> obstacles(n);
    for (int i = 0; i < n; ++i) {
        cin >> obstacles[i].first >> obstacles[i].second;
    }
    
    vector<int> low(n + 1), high(n + 1);
    low[0] = high[0] = 0;
    bool possible = true;
    
    for (int i = 1; i <= n; ++i) {
        int prev_low = low[i - 1];
        int prev_high = high[i - 1];
        int current_d = d[i - 1];
        int li = obstacles[i - 1].first;
        int ri = obstacles[i - 1].second;
        
        int new_low, new_high;
        if (current_d == 0) {
            new_low = prev_low;
            new_high = prev_high;
        } else if (current_d == 1) {
            new_low = prev_low + 1;
            new_high = prev_high + 1;
        } else { // -1
            new_low = prev_low;
            new_high = prev_high + 1;
        }
        // Intersect with [li, ri]
        new_low = max(new_low, li);
        new_high = min(new_high, ri);
        if (new_low > new_high) {
            possible = false;
            break;
        }
        low[i] = new_low;
        high[i] = new_high;
    }
    
    if (!possible) {
        cout << -1 << '\n';
        return;
    }
    
    vector<int> res = d;
    int current_h = high[n]; // h_n is the height after processing d1..dn
    
    for (int i = n; i >= 1; --i) {
        int li = obstacles[i - 1].first;
        int ri = obstacles[i - 1].second;
        // current_h is h_i. We need to choose d[i-1] (0-based in array) such that h_{i-1} = h_i - d[i-1}, and h_{i-1} is in [low[i-1], high[i-1]].
        if (res[i - 1] == -1) {
            // Try 1 first, then 0 to get the highest possible h_{i-1} (greedy)
            int candidate_h_prev = current_h - 1;
            if (candidate_h_prev >= low[i - 1] && candidate_h_prev <= high[i - 1]) {
                res[i - 1] = 1;
                current_h = candidate_h_prev;
            } else {
                candidate_h_prev = current_h - 0;
                if (candidate_h_prev >= low[i - 1] && candidate_h_prev <= high[i - 1]) {
                    res[i - 1] = 0;
                    current_h = candidate_h_prev;
                } else {
                    possible = false;
                    break;
                }
            }
        } else {
            current_h = current_h - res[i - 1];
            if (current_h < low[i - 1] || current_h > high[i - 1]) {
                possible = false;
                break;
            }
        }
    }
    
    if (!possible) {
        cout << -1 << '\n';
    } else {
        for (int i = 0; i < n; ++i) {
            cout << res[i] << " \n"[i == n - 1];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}