#include <bits/stdc++.h>
using namespace std;

bool hasDistinctDigs(int n) {
    vector<int>ans;
    while(n>0){
        ans.push_back(n%10);
        n/=10;
    }
    set<int>st(ans.begin(),ans.end());
    return st.size()==ans.size();
}

int main() {
    int l,r;
    cin >> l >> r;
    bool found=false;
    vector<int>ans;
    for (int i=l;i<=r;i++) {
        if(hasDistinctDigs(i)){
            found=true;
            ans.push_back(i);
        }
    }
    if(found){
        cout << ans[0];
    }
    else{
        cout << -1;
    }
    return 0;
}