#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,p,k;
    cin >> n >> p >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    long long count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int x1 = a[i] ^ a[j];
            int x2 = (1LL * a[i] * a[i]) ^ (1LL * a[j] * a[j]);
            long long val = 1LL * x1 * x2 % p;
            if (val == k){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}