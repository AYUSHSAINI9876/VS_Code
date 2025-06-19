#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    int sum=0, count = 0;
    for(int i=0;i<n && count <m;i++){
        if(arr[i] < 0) {
            sum += -arr[i];  // Bob earns money from negative prices
            count++;
        }
    }
    cout << sum << endl;
    return 0;
}