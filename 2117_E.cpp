#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <bitset>

const int MAX_VAL = 200005; 

int solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    std::vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        std::cin >> b[i];
    }

    int max_matches = 0;

    std::bitset<MAX_VAL> s_a_next_nr, s_b_next_nr; 
    int current_matches_nr = 0;
    
    for (int i = n - 1; i >= 0; --i) {
        std::bitset<MAX_VAL> s_a_curr, s_b_curr; 
        
        s_a_curr[a[i]] = true;
        s_b_curr[b[i]] = true;

        s_a_curr |= s_b_next_nr; 
        s_b_curr |= s_a_next_nr;

        if ((s_a_curr & s_b_curr).any()) {
            current_matches_nr++;
        }

        s_a_next_nr = s_a_curr;
        s_b_next_nr = s_b_curr;
    }
    max_matches = current_matches_nr;

    std::vector<std::bitset<MAX_VAL>> dp_sa_suffix(n + 1);
    std::vector<std::bitset<MAX_VAL>> dp_sb_suffix(n + 1);
    std::vector<int> matches_suffix(n + 1, 0); 

    for (int i = n - 1; i >= 0; --i) {
        std::bitset<MAX_VAL> s_a_curr, s_b_curr;
        s_a_curr[a[i]] = true;
        s_b_curr[b[i]] = true;

        if (i + 1 < n) {
            s_a_curr |= dp_sb_suffix[i+1];
            s_b_curr |= dp_sa_suffix[i+1];
        }
        
        matches_suffix[i] = matches_suffix[i+1]; 
        if ((s_a_curr & s_b_curr).any()) {
            matches_suffix[i]++; 
        }
        dp_sa_suffix[i] = s_a_curr;
        dp_sb_suffix[i] = s_b_curr;
    }

    std::vector<int> left_matches(n + 1, 0); 
    std::bitset<MAX_VAL> s_a_next_l, s_b_next_l; 
    for (int i = 0; i < n; ++i) { 
        std::bitset<MAX_VAL> s_a_curr, s_b_curr;
        s_a_curr[a[i]] = true;
        s_b_curr[b[i]] = true;
        
        if (i > 0) { 
            s_a_curr |= s_b_next_l;
            s_b_curr |= s_a_next_l;
        }
        left_matches[i+1] = left_matches[i];
        if ((s_a_curr & s_b_curr).any()) {
            left_matches[i+1]++;
        }
        s_a_next_l = s_a_curr;
        s_b_next_l = s_b_curr;
    }

    for (int k = 0; k < n; ++k) {
        int current_total = left_matches[k] + matches_suffix[k+1];
        max_matches = std::max(max_matches, current_total);
    }
    
    return max_matches;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::cout << solve() << "\n";
    }
    return 0;
}