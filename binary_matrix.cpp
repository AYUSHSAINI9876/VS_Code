#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            string s; cin >> s;
            for (int j = 0; j < m; ++j)
                mat[i][j] = s[j] - '0';
        }

        int res = INT_MAX;

        // Try all 2^(n-1 + m-1) combinations of XOR parities
        for (int rmask = 0; rmask < (1 << (n - 1)); ++rmask) {
            for (int cmask = 0; cmask < (1 << (m - 1)); ++cmask) {
                vector<int> row_parity(n), col_parity(m);

                // Assign row parities
                for (int i = 0; i < n - 1; ++i)
                    row_parity[i] = (rmask >> i) & 1;

                // Assign column parities
                for (int j = 0; j < m - 1; ++j)
                    col_parity[j] = (cmask >> j) & 1;

                // Determine last row and column
                int row_sum = 0, col_sum = 0;
                for (int i = 0; i < n - 1; ++i) row_sum ^= row_parity[i];
                for (int j = 0; j < m - 1; ++j) col_sum ^= col_parity[j];

                row_parity[n - 1] = col_sum;
                col_parity[m - 1] = row_sum;

                int changes = 0;
                for (int i = 0; i < n; ++i)
                    for (int j = 0; j < m; ++j) {
                        int desired = row_parity[i] ^ col_parity[j];
                        if (mat[i][j] != desired) ++changes;
                    }

                res = min(res, changes);
            }
        }
        cout << res << '\n';
    }
    return 0;
}
