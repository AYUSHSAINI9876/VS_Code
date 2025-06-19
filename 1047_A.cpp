#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>ans;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            int k=n-(i+j);
            if(i%3!=0 && j%3!=0 && k%3!=0){
                ans.push_back(i);
                ans.push_back(j);
                ans.push_back(k);
                break;
            }
        }
    }
    cout << ans[0] << " " << ans[1] << " " << ans[2];
    return 0;
}