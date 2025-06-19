#include <bits/stdc++.h>
using namespace std;

int main() { 
    int n;
    cin >> n;
    vector<int>arr(n);
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        mini=min(mini,abs(arr[i]));
    }
    cout << mini;
    return 0;
}