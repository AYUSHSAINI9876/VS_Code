#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }
    long long ans=0;
    for (int i = 0; i < n; i++) {
        int count0 = 0, count1 = 0;
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == 0){
                count0++;
            }
            else count1++;
        }
        ans += (1LL << count0) - 1;
        ans += (1LL << count1) - 1;
    }
    for (int j = 0; j < m; j++) {
        int count0 = 0, count1 = 0;
        for (int i = 0; i < n; i++) {
            if (mat[i][j] == 0){
                count0++;
            }
            else count1++;
        }
        ans += (1LL << count0) - 1;
        ans += (1LL << count1) - 1;
    }
    cout << ans - (1LL * n * m) << endl;
    return 0;
}