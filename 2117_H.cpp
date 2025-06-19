#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

int calculate_max_k_for_value(const std::vector<int>& positions_vec) {
    if (positions_vec.empty()) {
        return 0;
    }

    long long current_min_A = 2LL * 0 - positions_vec[0];
    long long max_diff_A = 0; 

    for (int j = 1; j < positions_vec.size(); ++j) {
        long long current_A = 2LL * j - positions_vec[j];
        max_diff_A = std::max(max_diff_A, current_A - current_min_A);
        current_min_A = std::min(current_min_A, current_A);
    }
    
    return std::max(0, (int)((max_diff_A + 2) / 2));
}

void solve() {
    int n, q;
    std::cin >> n >> q;

    std::vector<int> a(n);
    std::vector<std::set<int>> positions(n + 1); 
    
    std::map<int, int> current_max_k_by_value; 
    std::multiset<int> overall_max_ks; 

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        positions[a[i]].insert(i);
    }

    for (int v = 1; v <= n; ++v) {
        if (!positions[v].empty()) {
            std::vector<int> current_pos_vec(positions[v].begin(), positions[v].end());
            int k_val = calculate_max_k_for_value(current_pos_vec);
            current_max_k_by_value[v] = k_val;
            overall_max_ks.insert(k_val);
        }
    }
    
    if (overall_max_ks.empty()) {
        overall_max_ks.insert(0);
    }

    std::vector<int> results;

    for (int q_idx = 0; q_idx < q; ++q_idx) {
        int i, x;
        std::cin >> i >> x;
        --i;

        int old_val = a[i];
        int new_val = x;

        if (current_max_k_by_value.count(old_val)) {
            overall_max_ks.erase(overall_max_ks.find(current_max_k_by_value[old_val]));
        }
        positions[old_val].erase(i);
        std::vector<int> old_pos_vec(positions[old_val].begin(), positions[old_val].end());
        int new_k_old_val = calculate_max_k_for_value(old_pos_vec);
        current_max_k_by_value[old_val] = new_k_old_val;
        overall_max_ks.insert(new_k_old_val);

        if (current_max_k_by_value.count(new_val)) {
            overall_max_ks.erase(overall_max_ks.find(current_max_k_by_value[new_val]));
        }
        positions[new_val].insert(i);
        a[i] = new_val; 
        std::vector<int> new_pos_vec(positions[new_val].begin(), positions[new_val].end());
        int new_k_new_val = calculate_max_k_for_value(new_pos_vec);
        current_max_k_by_value[new_val] = new_k_new_val;
        overall_max_ks.insert(new_k_new_val);
        
        results.push_back(*overall_max_ks.rbegin());
    }

    for (int j = 0; j < results.size(); ++j) {
        std::cout << results[j] << (j == results.size() - 1 ? "" : " ");
    }
    std::cout << "\n";
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}