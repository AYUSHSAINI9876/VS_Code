#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>ans;
    if(n==1){
        cout << 1;
        return 0;
    }
    int total = 0;

    for (int i = 1; ; i++) {
        int blocks = i * (i + 1) / 2;
        total += blocks;
        if (total > n) break;
        ans.push_back(i);
    }
    cout << ans.size();
    return 0;
}