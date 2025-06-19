#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s; 
    vector<int> ans;
    for(int i = 0; i < s.size(); i++) {
        if(s[i]>='0' && s[i]<='9') {
            ans.push_back(s[i]);
        }
    }
    sort(ans.begin(), ans.end());
    string res;
    for(int i = 0; i < ans.size(); i++) {
        res.push_back(ans[i] );
        res.push_back('+'); 
    }
    res.pop_back();
    cout << res;
    return 0;
}