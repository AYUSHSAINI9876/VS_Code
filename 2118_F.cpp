#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    // Check frequency of each element
    unordered_map<int, int> freq_a, freq_b;
    for (int num : a) {
        freq_a[num]++;
    }
    for (int num : b) {
        freq_b[num]++;
    }
    if (freq_a != freq_b) {
        return false;
    }

    // For each x from 1 to m-1, check the relative order of x and x+1 in b matches some rotation of a
    for (int x = 1; x < m; ++x) {
        vector<int> list_a, list_b;
        for (int num : a) {
            if (num == x || num == x + 1) {
                list_a.push_back(num);
            }
        }
        for (int num : b) {
            if (num == x || num == x + 1) {
                list_b.push_back(num);
            }
        }
        if (list_b.empty()) {
            continue;
        }
        // Check if list_b is a subarray of list_a concatenated with itself
        vector<int> doubled_list_a = list_a;
        doubled_list_a.insert(doubled_list_a.end(), list_a.begin(), list_a.end());
        bool found = false;
        int len_list_b = list_b.size();
        for (int i = 0; i <= doubled_list_a.size() - len_list_b; ++i) {
            bool match = true;
            for (int j = 0; j < len_list_b; ++j) {
                if (doubled_list_a[i + j] != list_b[j]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        if (solve()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}