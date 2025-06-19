#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int sum=0,total=n*(n+1)/2;
    vector<int>arr(n-1);
    for(int i=0;i<n-1;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    cout << total-sum;
    return 0;
}