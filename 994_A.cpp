#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    vector<int>arr1(n),arr2(m);
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    for(int i=0;i<m;i++){
        cin >> arr2[i];
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                ans.push_back(arr1[i]);
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}