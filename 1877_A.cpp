#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
    cin >> n;
    vector<int>arr(n-1);
    int sum=0;
    for(int i=0;i<n-1;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    cout << -sum << endl;
    }
    return 0;
}