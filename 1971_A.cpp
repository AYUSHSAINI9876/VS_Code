#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int a,b;
        cin >> a >> b;
        vector<int>ans;
        ans.push_back(a);
        ans.push_back(b);
        sort(ans.begin(), ans.end());
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}