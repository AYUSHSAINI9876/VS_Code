#include <bits/stdc++.h>
using namespace std;

long long calculate_mod(long long x, long long y) {
    if (y == 0) return 0; 
    return (x % y) + (y % x);
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }

        long long cur = 0;
        set<long long> distinct_elements;
        long long maxi = 0;

        for (int i = 0; i < n; ++i) {
            long long val = a[i];

            cur = max(cur, calculate_mod(val, val)); // f(x,x) is 0

            // Update max_val_so_far with the current element
            maxi = max(maxi, val);
            for (long long k = 1; k * k <= val; ++k) {
                if (val % k == 0) {
                    if (distinct_elements.count(k)) {
                        cur = max(cur, calculate_mod(val, k));
                    }
                    if (distinct_elements.count(val / k)) {
                        cur = max(cur, calculate_mod(val, val / k));
                    }
                }
            }
            for (long long multiple = val; multiple <= maxi + val; multiple += val) {
                // Check elements slightly less than 'multiple'
                auto it = distinct_elements.lower_bound(multiple);
                for (int count = 0; count < 3 && it != distinct_elements.end(); ++count) {
                    cur = max(cur, calculate_mod(val, *it));
                    ++it;
                }
                
                it = distinct_elements.lower_bound(multiple);
                for (int count = 0; count < 3 && it != distinct_elements.begin(); ++count) {
                    --it;
                    cur = max(cur, calculate_mod(val, *it));
                }
            }
            long long threshold = (cur + 1) / 2;
            auto val1 = distinct_elements.lower_bound(threshold);
            for (auto it = distinct_elements.begin(); it != distinct_elements.end(); it++) {
                 cur = max(cur, calculate_mod(val, *it));
            }
            distinct_elements.insert(val);
            cout << cur << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    }
    return 0;
}