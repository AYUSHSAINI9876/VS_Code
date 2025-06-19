#include <bits/stdc++.h>
using namespace std;

int main() {
    long long y,k,n;
    cin >> y >> k >> n;
    vector<long long>ans;
    long long start = ((y + k) / k) * k;
    if (start > n) {
        cout << -1;
        return 0;
    }
    for(long long m = start; m <= n; m += k){
        ans.push_back(m - y);
    }
    if (ans.empty()) {
        cout << -1;
    } 
    else {
        for (auto x : ans){
            cout << x << " ";
        }
    }
    return 0;
}