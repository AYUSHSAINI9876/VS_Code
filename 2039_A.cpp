#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> ans;
        int current = 1;
        for (int i = 1; i <= n; ++i) {
            while (true) {
                bool valid = true;
                for (int j = 0; j < ans.size(); ++j) {
                    if (current % (j + 1) == ans[j] % (j + 1)) {
                        valid = false;
                        break;
                    }
                }
                if (valid) {
                    ans.push_back(current);
                    ++current;
                    break;
                }
                ++current;
            }
        }
        for (int i = 0; i < n; ++i){
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}