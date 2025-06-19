#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int a,b,c;
        cin >> a >> b >> c;
        vector<int> ans;
        ans.push_back(a);
        ans.push_back(b);
        ans.push_back(c);
        sort(ans.begin(), ans.end());
        cout << ans[1] << endl; 
    }
    return 0;
}