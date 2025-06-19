#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long sum = 0;
        for (int i = 0; i < n; i++){
            sum += a[i];
        }

        long long maxi = 0;
        for (int i = 0; i < n; i++) {
            long long curr = 0;
            for (int j = 0; j < n; j++) {
                curr += (a[i] ^ a[j]);
            }
            maxi = max(maxi, curr);
        }

        cout << maxi << endl;
    }
    return 0;
}