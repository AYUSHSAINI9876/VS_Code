#include <bits/stdc++.h>
using namespace std;

void maxheight(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])%2!=0){
                arr[i]--;
                arr[j]++;
            }
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans[n-1];
    }
}

int main()
{
maxheight();
  return 0;
}