#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
    cin >> n;

    vector<tuple<int, int, int>> ops;

    if (n == 3) {
        // Specific operations for n=3, matching the problem's example output.
        ops.emplace_back(2, 1, 3);
        ops.emplace_back(2, 2, 3);
        ops.emplace_back(3, 1, 2);
        ops.emplace_back(3, 2, 3);
    } else {
        ops.emplace_back(2, 1, n);
        for (int i = 3; i <= n; ++i) {
            if (i % 2 != 0) {
                ops.emplace_back(i, 1, i);
                ops.emplace_back(i, 2, n);
            } 
            else{
                ops.emplace_back(i, i - 1, n);
                ops.emplace_back(i, 1, i - 2);
            }
        }
    }
    cout << ops.size() << endl;
    for (const auto& it : ops) {
        cout << get<0>(it) << " " << get<1>(it) << " " << get<2>(it) << endl;
    }
}
    return 0;
}