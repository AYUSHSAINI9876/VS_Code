#include <bits/stdc++.h>
using namespace std;

int calculate_gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    int overall_gcd_val = 0;
    bool first_element = true;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        if (first_element) {
            overall_gcd_val = a[i];
            first_element = false;
        } else {
            overall_gcd_val = calculate_gcd(overall_gcd_val, a[i]);
        }
    }
    int initial_G_count = 0;
    for (int x : a) {
        if (x == overall_gcd_val) {
            initial_G_count++;
        }
    }
    if (initial_G_count == n) {
        std::cout << 0 << std::endl; 
        return;
    }
    if (initial_G_count > 0) {
        std::cout << n - initial_G_count << std::endl; 
        return;
    }
    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        b[i] = a[i] / overall_gcd_val;
    }
    int min_len_to_one = n + 1;

    for (int i = 0; i < n; ++i) {
        int current_gcd_in_subarray = b[i];
        if (current_gcd_in_subarray == 1) {
            min_len_to_one = 1;
            break; 
        }
        for (int j = i + 1; j < n; ++j) {
            current_gcd_in_subarray = calculate_gcd(current_gcd_in_subarray, b[j]);
            if (current_gcd_in_subarray == 1) {
                min_len_to_one = std::min(min_len_to_one, j - i + 1);
                break;
            }
        }
    }
    cout << (min_len_to_one - 1) + (n - 1) << endl;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}