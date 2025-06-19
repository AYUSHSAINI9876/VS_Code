#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    set<int>st(arr.begin(),arr.end());
    vector<int>ans;
    for(int num:st){
        ans.push_back(num);
    }
    sort(ans.begin(),ans.end());
    if(ans.size() < 2){
        cout << "NO";
    } else {
        cout << ans[1];
    }
    return 0;
}