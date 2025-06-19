#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    if (n == 4) {
        vector<int> original = a;
        vector<int> operated = {a[2], a[3], a[0], a[1]};
        if (operated < original) {
            a = operated;
        }
    } else {
        vector<int> others;
        for (int num : a) {
            if (num != 1 && num != 2) {
                others.push_back(num);
            }
        }
        sort(others.begin(), others.end());
        vector<int> ans = {2, 1};
        ans.insert(ans.end(), others.begin(), others.end());
        a = ans;
    }
    for (int num : a) {
        cout << num << ' ';
    }
    cout << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}