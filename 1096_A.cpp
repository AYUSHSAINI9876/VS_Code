#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long l,r;
        cin >> l >> r;
        vector<long long>ans;
        for(long long i=l;i<=r;i++){
            for(long long j=i+1;j<=r;j++){
                if(j%i==0){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
            if(!ans.empty()) break;
        }
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}